//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/BypassAllocator.h $
//  
//  Owner: Robin_Briggs
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2017/03/10 00:54:55 $
//  
//  $Revision: #8 $
//  
//  $Change: 979292 $
//  
//  ADOBE CONFIDENTIAL
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  All information contained herein is, and remains
//  the property of Adobe Systems Incorporated and its suppliers,
//  if any.  The intellectual and technical concepts contained
//  herein are proprietary to Adobe Systems Incorporated and its
//  suppliers and may be covered by U.S. and Foreign Patents,
//  patents in process, and are protected by trade secret or copyright law.
//  Dissemination of this information or reproduction of this material
//  is strictly forbidden unless prior written permission is obtained
//  from Adobe Systems Incorporated.
//  
//========================================================================================

#pragma once
#ifndef __BypassAllocator__
#define __BypassAllocator__

#include <stdlib.h>	// for malloc, free

#ifdef MACINTOSH
#include <new>
#endif

#include "MemoryUtils.h"

//========================================================================================

// The point of this allocator is to be able to use an STL object while completely
// bypassing our allocation mechanisms and going directly to the runtime library.
// This is done by using malloc/free in the underlying RTL.

template <class T>
class BypassAllocator {
public:
  // type definitions
  typedef T        value_type;
  typedef T*       pointer;
  typedef const T* const_pointer;
  typedef T&       reference;
  typedef const T& const_reference;
  typedef size_t    size_type;
  typedef ptrdiff_t difference_type;

  // rebind allocator to type U
  template <class U >
  struct rebind {
    typedef BypassAllocator< U > other;
  };

  // return address of values
  pointer address (reference value) const {
    return &value;
  }
  const_pointer address (const_reference value) const {
    return &value;
  }

  /* constructors and destructor
  * - nothing to do because the allocator has no state
  */
  BypassAllocator() throw() {
  }
  BypassAllocator(const BypassAllocator& src) throw() {
  }
  template <class U >
  BypassAllocator (const BypassAllocator< U > &src) throw() {
  }
  ~BypassAllocator() throw() {
  }

  // return maximum number of elements that can be allocated
  size_type max_size () const throw() {
	return (size_type) (int64) -1 / sizeof(T);
  }

  // allocate but don't initialize num elements of type T
  pointer allocate (size_type num, const void* = 0) {
    pointer ret = (pointer) malloc (num * sizeof(T));
	if (!ret) throw std::bad_alloc();
    return ret;
  }

  // initialize elements of allocated storage p with value value
  void construct (pointer p, const T& value) {
    // initialize memory with placement new
    new((void*)p)T(value);
  }

  // destroy elements of initialized storage p
  void destroy (pointer p) {
    // destroy objects by calling their destructor
    p->~T();
  }

  // deallocate storage p of deleted elements
  void deallocate (pointer p, size_type num) {
	  free (p);
  }

};

// return that all specializations of this allocator are interchangeable
template <class T1, class T2>
bool operator== (const BypassAllocator<T1>&, const BypassAllocator<T2>&) throw() {
  return true;
}
template <class T1, class T2>
bool operator!= (const BypassAllocator<T1>&, const BypassAllocator<T2>&) throw() {
  return false;
}

//========================================================================================

// This is similar, but keeps a pool of recently used objects to recycle.

// This is cheesy and NOT a good example of how to do this in a general case for
// a number of reasons, but this is sufficient for our memory tracking debug code.

template <class T>
class BypassRecycleAllocator {
public:
  // type definitions
  typedef T        value_type;
  typedef T*       pointer;
  typedef const T* const_pointer;
  typedef T&       reference;
  typedef const T& const_reference;
  typedef size_t    size_type;
  typedef ptrdiff_t difference_type;

  // rebind allocator to type U
  template <class U >
  struct rebind {
    typedef BypassRecycleAllocator< U > other;
  };

  // return address of values
  pointer address (reference value) const {
    return &value;
  }
  const_pointer address (const_reference value) const {
    return &value;
  }

  /* constructors and destructor
  */
  BypassRecycleAllocator() throw() : fSP (0)  {
  }
  BypassRecycleAllocator(const BypassRecycleAllocator& src) throw() : fSP (0) {
  }
  template <class U >
  BypassRecycleAllocator (const BypassRecycleAllocator< U > &src) throw() : fSP (0) {
  }
  ~BypassRecycleAllocator() throw() {
	  while (fSP) free (fStack [--fSP]);
  }

  // return maximum number of elements that can be allocated
  size_type max_size () const throw() {
	return (size_type) (int64) -1 / sizeof(T);
  }

  // allocate but don't initialize num elements of type T
  pointer allocate (size_type num, const void* = 0) {
	if (num == 1 && fSP) return fStack [--fSP];
	pointer ret = (pointer) malloc (num * sizeof(T));
	if (!ret) throw std::bad_alloc();
    return ret;
  }

  // initialize elements of allocated storage p with value value
  void construct (pointer p, const T& value) {
    // initialize memory with placement new
    new((void*)p)T(value);
  }

  // destroy elements of initialized storage p
  void destroy (pointer p) {
    // destroy objects by calling their destructor
    p->~T();
  }

  // deallocate storage p of deleted elements
  void deallocate (pointer p, size_type num) {
	if (num == 1 && fSP < kMaxSize) 
	  fStack [fSP++] = p;
	else
	  free (p);
  }

private:

	enum { kMaxSize = 1000 };	// tested: 90% recycle rate for build acceptance, only 10% of requests actually hit malloc/free
	pointer fStack [kMaxSize];
	int32 fSP;
};

template <class T1, class T2>
bool operator== (const BypassRecycleAllocator<T1>&lhs, const BypassRecycleAllocator<T2>&rhs) throw() {
  return &lhs==&rhs;
}
template <class T1, class T2>
bool operator!= (const BypassRecycleAllocator<T1>&lhs, const BypassRecycleAllocator<T2>&rhs) throw() {
  return &lhs!=&rhs;
}

//========================================================================================

/** Alocator that bypasses the purging mechanism in our default allocator.
 Used in special places that cause problems if a purge happens in the middle of a allocation.
 Still uses the allocation tracker for memory leak detection.
 IMPORTANT: if the system allocator fails to allocate the requested block this allocator doesn't attempt to purge
 so it will throw std::bad_alloc.
 */
template <class T>
class BypassPurgingAllocator {
public:
	// type definitions
	typedef T        value_type;
	typedef T*       pointer;
	typedef const T* const_pointer;
	typedef T&       reference;
	typedef const T& const_reference;
	typedef size_t    size_type;
	typedef ptrdiff_t difference_type;
	
	// rebind allocator to type U
	template <class U >
	struct rebind {
		typedef BypassPurgingAllocator< U > other;
	};
	
	// return address of values
	pointer address (reference value) const {
		return &value;
	}
	const_pointer address (const_reference value) const {
		return &value;
	}
	
	/* constructors and destructor
	 * - nothing to do because the allocator has no state
	 */
	BypassPurgingAllocator() throw() {}
	~BypassPurgingAllocator() throw() {}
	BypassPurgingAllocator(const BypassPurgingAllocator& src) throw() {}
	template <class U >
	BypassPurgingAllocator (const BypassPurgingAllocator< U > &src) throw() {}
	
	// return maximum number of elements that can be allocated
	size_type max_size () const throw() {
		return (size_type) (int64) -1 / sizeof(T);
	}
	
	// allocate but don't initialize num elements of type T
	pointer allocate (size_type num, const void* = 0) {
		pointer ret = (pointer) K2Memory::RTLCompatibleMallocNoPurging (num * sizeof(value_type));
		if (!ret) throw std::bad_alloc();
		return ret;
	}
	
	// initialize elements of allocated storage p with value value
	void construct (pointer p, const T& value) {
		// initialize memory with placement new
		new((void*)p)value_type(value);
	}
	
	// destroy elements of initialized storage p
	void destroy (pointer p) {
		// destroy objects by calling their destructor
		p->~value_type();
	}
	
	// deallocate storage p of deleted elements
	void deallocate (pointer p, size_type num) {
		K2Memory::RTLCompatibleFree(p);
	}
	
};

// return that all specializations of this allocator are interchangeable
template <class T1, class T2>
bool operator== (const BypassPurgingAllocator<T1>&, const BypassPurgingAllocator<T2>&) throw() {
	return true;
}
template <class T1, class T2>
bool operator!= (const BypassPurgingAllocator<T1>&, const BypassPurgingAllocator<T2>&) throw() {
	return false;
}


#endif // __BypassAllocator__
