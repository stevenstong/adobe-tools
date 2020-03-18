//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/public/interfaces/onboarding/IEndnoteIAMUtils.h $
//  
//  Owner: Susmita Singh
//  
//  $Author: vans $
//  
//  $DateTime: 2019/10/03 10:41:47 $
//  
//  $Revision: #1 $
//  
//  $Change: 1060349 $
//  ___________________
//  
//  ADOBE CONFIDENTIAL
//  
//  Copyright 2017 Adobe Systems Incorporated
//  All Rights Reserved.
//  
//  NOTICE:  All information contained herein is, and remains
//  the property of Adobe Systems Incorporated and its suppliers,
//  if any.  The intellectual and technical concepts contained
//  herein are proprietary to Adobe Systems Incorporated and its
//  suppliers and are protected by all applicable intellectual property
//  laws, including trade secret and copyright laws.
//  Dissemination of this information or reproduction of this material
//  is strictly forbidden unless prior written permission is obtained
//  from Adobe Systems Incorporated.
//  
//========================================================================================

#pragma once
#ifndef __IEndnoteIAMUtils__
#define __IEndnoteIAMUtils__

#include "IPMUnknown.h"
#include "Utils.h"
#include "OnBoardingID.h"
#include "EndNoteUseCaseConstants.h"

class IEndnoteIAMUtils : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IENDNOTEIAMUTILS };

	virtual void ShowEndnoteIAM(const char *loggingEventName) = 0;
};

	
#endif
		// __IEndnoteIAMUtils__
		

