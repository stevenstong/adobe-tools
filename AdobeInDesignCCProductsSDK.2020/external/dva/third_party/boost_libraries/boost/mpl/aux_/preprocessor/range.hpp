
#ifndef BOOST_MPL_AUX_PREPROCESSOR_RANGE_HPP_INCLUDED
#define BOOST_MPL_AUX_PREPROCESSOR_RANGE_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2002-2004
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Id: //depot/devtech/15.0/plugin/external/dva/third_party/boost_libraries/boost/mpl/aux_/preprocessor/range.hpp#2 $
// $Date: 2019/10/11 $
// $Revision: #2 $

#include <boost/preprocessor/seq/subseq.hpp>
#include <boost/preprocessor/repetition/repeat.hpp>
#include <boost/preprocessor/arithmetic/add.hpp>

#define BOOST_MPL_PP_RANGE_ITEM(z,n,_) (n)

#define BOOST_MPL_PP_RANGE(first, length) \
    BOOST_PP_SEQ_SUBSEQ( \
        BOOST_PP_REPEAT(BOOST_PP_ADD(first,length), BOOST_MPL_PP_RANGE_ITEM, _), \
        first, length \
    ) \
/**/

#endif // BOOST_MPL_AUX_PREPROCESSOR_RANGE_HPP_INCLUDED