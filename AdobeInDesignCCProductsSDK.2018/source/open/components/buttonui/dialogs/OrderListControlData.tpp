//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/buttonui/dialogs/OrderListControlData.tpp $
//  
//  Owner: Tim Wright
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2018/03/06 12:15:34 $
//  
//  $Revision: #10 $
//  
//  $Change: 1009641 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#ifndef __OrderListControlData_tpp__
#define __OrderListControlData_tpp__

#include "ListBoxControlDataOf.tpp"

// twright 09/28/2001 This is kind of stupid. The platform specificness
// could have been handled at a higher level by ListBoxControlDataOf to
// prevent the need for platform files here (and everytime the template
// is used) 

#ifdef MACINTOSH
#include "MOrderListControlData.tpp"
#endif

#ifdef WINDOWS
#include "WOrderListControlData.tpp"
#endif

#endif // __OrderListControlData_tpp__

