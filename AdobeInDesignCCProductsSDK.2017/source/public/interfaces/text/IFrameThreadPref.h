//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/IFrameThreadPref.h $
//  
//  Owner: Tom Taylor
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2017/03/10 00:54:55 $
//  
//  $Revision: #8 $
//  
//  $Change: 979292 $
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
#ifndef __IFrameThreadPrefs__
#define __IFrameThreadPrefs__

#include "IPMUnknown.h"

/**
	@ingroup text_layout
*/
class IFrameThreadPrefs : public IPMUnknown
{
public:	
	////
	//// Frame Thread Preferences
	////
	
	// Are frame threads shown or hidden by default
	virtual void	SetFrameThreadsShown(bool16 bShown) = 0;
	virtual bool16	GetFrameThreadsShown() = 0;
};

#endif
