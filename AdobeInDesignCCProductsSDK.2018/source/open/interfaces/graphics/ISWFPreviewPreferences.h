//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/interfaces/graphics/ISWFPreviewPreferences.h $
//  
//  Owner: Yeming Liu
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

#pragma once
#ifndef __ISWFPreviewPreferences__
#define __ISWFPreviewPreferences__

#include "IPMUnknown.h"
#include "DynamicDocumentsID.h"

class ISWFPreviewPreferences : public IPMUnknown
{
	public:	
		enum { kDefaultIID = IID_ISWFPREVIEWPREFERENCES };
		typedef enum 
		{ 
			kPreviewWholeDocument = 0, 
			kPreviewCurrentSpread, 
			kPreviewCurrentSelection,
			kTestInBrowser
		} SWFPreviewType;

		virtual void SetPreviewType(const ISWFPreviewPreferences::SWFPreviewType &previewType) = 0;
		virtual const ISWFPreviewPreferences::SWFPreviewType&  GetPreviewType( ) = 0;
};

#endif
