
#ifndef BOOST_MPL_BITOR_HPP_INCLUDED
#define BOOST_MPL_BITOR_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2000-2009
// Copyright Jaap Suter 2003
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Id: //depot/devtech/nevis/plugin/external/dva/third_party/boost_libraries/boost/mpl/bitor.hpp#14 $
// $Date: 2018/03/06 $
// $Revision: #14 $

// agurt, 23/jan/10: workaround a conflict with <iso646.h> header's 
// macros, see http://tinyurl.com/ycwdxco; 'defined(bitor)'
// has to be checked in a separate condition, otherwise GCC complains 
// about 'bitor' being an alternative token
#if defined(_MSC_VER) && !defined(__clang__)
#ifndef __GCCXML__
#if defined(bitor)
#   pragma push_macro("bitor")
#   undef bitor
#   define bitor(x)
#endif
#endif
#endif

#define AUX778076_OP_NAME   bitor_
#define AUX778076_OP_PREFIX bitor
#define AUX778076_OP_TOKEN  |
#include <boost/mpl/aux_/arithmetic_op.hpp>

#if defined(_MSC_VER) && !defined(__clang__)
#ifndef __GCCXML__
#if defined(bitor)
#   pragma pop_macro("bitor")
#endif
#endif
#endif

#endif // BOOST_MPL_BITOR_HPP_INCLUDED