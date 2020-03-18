//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/public/interfaces/layout/IAutoTextFramePrefs.h $
//  
//  Owner: Brendan O'Shea
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

#pragma once
#ifndef __IAUTOTEXTFRAMEPREFS__
#define __IAUTOTEXTFRAMEPREFS__

#include "IPMUnknown.h"
#include "SpreadID.h"

class IAutoTextFramePrefs : public IPMUnknown
{
public:	
	enum { kDefaultIID = IID_IAUTOTEXTFRAMEPREFERENCES }; 

	// Are frame edges shown or hidden by default
	virtual void SetAutoTextFrame(const bool16 bShown) = 0;
	virtual const bool16 GetAutoTextFrame() = 0;
};

#endif