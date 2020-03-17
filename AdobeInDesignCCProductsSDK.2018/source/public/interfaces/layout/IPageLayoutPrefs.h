//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IPageLayoutPrefs.h $
//  
//  Owner: psorrick
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
#ifndef __IPageLayoutPrefs__
#define __IPageLayoutPrefs__

#include "IPMUnknown.h"
#include "SpreadID.h"

class IPageLayoutPrefs : public IPMUnknown
{
public:	
	enum { kDefaultIID = IID_IPAGELAYOUTPREFERENCES };

	////
	//// Page Layout Preferences:
	////
	
	// Is shuffle on or off
	virtual void  SetShuffle(const bool16 bShuffle) = 0;
	virtual const bool16 GetShuffle() = 0;

	// Preserve page layout when shuffle is turned on? (turn Keep Spread Together on for non-default spreads).

	virtual void  SetPreserveLayout(const bool16 bPreserve) = 0;
	virtual const bool16 GetPreserveLayout() = 0;

};

#endif
