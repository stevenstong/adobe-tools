// Boost.TypeErasure library
//
// Copyright 2011 Steven Watanabe
//
// Distributed under the Boost Software License Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
// $Id: //depot/devtech/15.0/plugin/external/dva/third_party/boost_libraries/boost/type_erasure/placeholder_of.hpp#2 $

#ifndef BOOST_TYPE_ERASURE_PLACEHOLDER_OF_HPP_INCLUDED
#define BOOST_TYPE_ERASURE_PLACEHOLDER_OF_HPP_INCLUDED

namespace boost {
namespace type_erasure {

template<class Concept, class T>
class any;

template<class Concept, class T>
class param;

/**
 * A metafunction returning the (const/reference qualified) placeholder
 * corresponding  to an @ref any.  It will also work for all bases
 * of @ref any, so it can be applied to the @c Base
 * parameter of @ref concept_interface.
 */
template<class T>
struct placeholder_of
{
#ifdef BOOST_TYPE_ERASURE_DOXYGEN
    typedef detail::unspecified type;
#else
    typedef typename ::boost::type_erasure::placeholder_of<
        typename T::_boost_type_erasure_derived_type
    >::type type;
#endif
};

/** INTERNAL ONLY */
template<class Concept, class T>
struct placeholder_of< ::boost::type_erasure::any<Concept, T> >
{
    typedef T type;
};

/** INTERNAL ONLY */
template<class Concept, class T>
struct placeholder_of< ::boost::type_erasure::param<Concept, T> >
{
    typedef T type;
};

}
}

#endif