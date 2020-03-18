//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/open/components/buttonui/common/StrIntPairDDLControlData.cpp $
//  
//  Owner: Michael Burbidge
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2019/10/11 10:48:01 $
//  
//  $Revision: #2 $
//  
//  $Change: 1061132 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#include "VCPlugInHeaders.h"

// ----- Interface Includes -----

#include "IPMStream.h"

// ----- Implementation Includes -----

#include "BehaviorUIID.h"
#include "DropDownListControlDataOf.tpp"
#include "K2Vector.tpp"
#include "K2Pair.h"
#include "PMString.h"

typedef K2Pair<PMString, int32> ContainerData;

CREATE_PMINTERFACE(DropDownListControlDataOf<ContainerData>, kStrIntPairDDLControlDataImpl);

template <>
PMString DropDownListControlDataOf<ContainerData>::GetString(const ContainerData& item) const
{
	return item.first;
}