//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/includes/architecture/ObjPtrCollection.h $
//  
//  Owner: NickN
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
#ifndef __OBJPTRCOLLECTION__
#define __OBJPTRCOLLECTION__

#ifdef ID_DEPRECATED
#include "K2Vector.h"

// this is a version of K2Vector that is tuned for pointers to Objects.
// it's just the K2Vector with a method based on the knowledge
// that these are pointers to objects that might want to be deleted en masse

template <class T>
class ObjPtrCollection : public K2Vector<T>
{
	public:
		~ObjPtrCollection();
		void ClearDelete();	
			// Empty the collection, calling delete on whatever is 
			// currently in it.
};	

#ifdef _INCLUDE_TPP_IN_H_
	#include "ObjPtrCollection.tpp"
#endif //_INCLUDE_TPP_IN_H_
#endif // ID_DEPRECATED

#endif
