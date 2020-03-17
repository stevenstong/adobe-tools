//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/buttonui/dialogs/MChoiceListControlData.tpp $
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

#ifndef __MChoiceListControlData_tpp__
#define __MChoiceListControlData_tpp__

#include "ChoiceListElement.h"
#include "MListBoxControlDataOf.tpp"

//----------------------------------------------------------------------------------------
// MListBoxControlDataOf::GetItemData -- Specialization for ActionsListElement
//----------------------------------------------------------------------------------------

template <>
void MListBoxControlDataOf<ChoiceListElement>::GetItemData(const ChoiceListElement& item, void** data, short* length) const
{
	static std::string staticString;

	PMString string = item.GetChoice();
	staticString = string.GetPlatformString();

	*data = (void*)staticString.c_str();
	*length = staticString.size();
}

#endif // __MChoiceListControlData_tpp__

