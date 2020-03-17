//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/conditionaltextui/ConditionTagEyeballView.cpp $
//  
//  Owner: Michele Stutzman
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

#include "VCPlugInHeaders.h"

// ----- Interfaces -----

#include "ITriStateControlData.h"

// ----- Includes -----

#include "IconRsrcDefs.h"
#include "CIDIconSuiteButtonView.h"
#include "SysControlIds.h"

// ----- ID.h files -----

#include "ConditionalTextUIID.h"


class ConditionTagEyeballView : public CIDIconSuiteButtonView
{
	typedef CIDIconSuiteButtonView inherited;
public:
	ConditionTagEyeballView(IPMUnknown *boss);
	virtual ~ConditionTagEyeballView();
			
	virtual void PreDrawDoIconChange();
	
};

// =============================================================================
// *** ConditionTagEyeballView impl ***
// -----------------------------------------------------------------------------

CREATE_PERSIST_PMINTERFACE(ConditionTagEyeballView, kConditionTagEyeballViewImpl)

ConditionTagEyeballView::ConditionTagEyeballView(IPMUnknown *boss) :
	inherited(boss)
{
} // end constructor

ConditionTagEyeballView::~ConditionTagEyeballView()
{
} // end destructor
	
//--------------------------------------------------------------------------------------

void ConditionTagEyeballView::PreDrawDoIconChange()
{
	InterfacePtr<ITriStateControlData> eyeballData(this, UseDefaultIID());

	RsrcID	rsrcID;
	if (eyeballData->IsSelected())
		rsrcID = kEyeballIcon;
	else
		rsrcID = kNoIcon;

	this->SetRsrcID(rsrcID);

} // end PreDrawDoIconChange()
