
#ifndef BOOST_MPL_AUX_RANGE_C_BACK_HPP_INCLUDED
#define BOOST_MPL_AUX_RANGE_C_BACK_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2000-2004
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Id: //depot/devtech/nevis/plugin/external/dva/third_party/boost_libraries/boost/mpl/aux_/range_c/back.hpp#14 $
// $Date: 2018/03/06 $
// $Revision: #14 $

#include <boost/mpl/back_fwd.hpp>
#include <boost/mpl/prior.hpp>
#include <boost/mpl/aux_/range_c/tag.hpp>

namespace boost { namespace mpl {

template<>
struct back_impl< aux::half_open_range_tag >
{
    template< typename Range > struct apply
    {
        typedef typename prior< typename Range::finish >::type type;
    };
};

}}

#endif // BOOST_MPL_AUX_RANGE_C_BACK_HPP_INCLUDED
