//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/open/components/dynamicdocumentsui/SWFPreviewCurrentPageTip.cpp $
//  
//  Owner: Yeming Liu
//  
//  $Author: vans $
//  
//  $DateTime: 2019/10/03 10:41:47 $
//  
//  $Revision: #1 $
//  
//  $Change: 1060349 $
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

#include "IStringData.h"
#include "AbstractTip.h"

// ----- Includes -----

#include "PMString.h"

// ----- Utils -----

#include "IMenuUtils.h"

// ----- ID.h files -----

#include "DynamicDocumentsUIID.h"

class SWFPreviewCurrentPageTip : public AbstractTip
{			
	public:
		SWFPreviewCurrentPageTip( IPMUnknown *boss );
		virtual ~SWFPreviewCurrentPageTip();

		virtual PMString  GetTipText(const PMPoint& mouseLocation);
};

CREATE_PMINTERFACE(SWFPreviewCurrentPageTip, kSWFPreviewCurrentPageTipImpl)

SWFPreviewCurrentPageTip::SWFPreviewCurrentPageTip(IPMUnknown *boss) :
	AbstractTip( boss )
{
}

SWFPreviewCurrentPageTip::~SWFPreviewCurrentPageTip()
{
}

PMString SWFPreviewCurrentPageTip::GetTipText(const PMPoint& mouseLocation)
{
	PMString tipString("");
	InterfacePtr<IStringData> iData(this, UseDefaultIID()); // string data is set in SWFPreviewPanelObserver when update the current page widget
	if (iData)
	{
		tipString = iData->GetString();  
	}

	return tipString;
} 

