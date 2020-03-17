
#ifndef BOOST_MPL_LIST_AUX_EMPTY_HPP_INCLUDED
#define BOOST_MPL_LIST_AUX_EMPTY_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2000-2004
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Id: //depot/devtech/14.0/plugin/external/dva/third_party/boost_libraries/boost/mpl/list/aux_/empty.hpp#2 $
// $Date: 2018/09/10 $
// $Revision: #2 $

#include <boost/mpl/empty_fwd.hpp>
#include <boost/mpl/not.hpp>
#include <boost/mpl/list/aux_/tag.hpp>

namespace boost { namespace mpl {

template<>
struct empty_impl< aux::list_tag >
{
    template< typename List > struct apply
        : not_<typename List::size>
    {
    };
};

}}

#endif // BOOST_MPL_LIST_AUX_EMPTY_HPP_INCLUDED