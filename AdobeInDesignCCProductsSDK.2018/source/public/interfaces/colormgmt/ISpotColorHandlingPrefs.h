//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/colormgmt/ISpotColorHandlingPrefs.h $
//  
//  Owner: Reena Agrawal
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2018/03/06 12:15:34 $
//  
//  $Revision: #10 $
//  
//  $Change: 1009641 $
//  
//  Copyright 2014 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#ifndef __ISpotColorHandlingPrefs__
#define __ISpotColorHandlingPrefs__

#if PRAGMA_ONCE
#pragma once
#endif

#include "IPMUnknown.h"
#include "ColorMgmtID.h"

//========================================================================================
// CLASS ISpotColorHandlingPrefs
//========================================================================================

class ISpotColorHandlingPrefs : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ISPOTCOLORHANDLINGPREFS };
	
	virtual bool16 GetUseIncomingSpotDefinition() = 0;
	virtual void SetUseIncomingSpotDefinition(bool16 useIncomingSpotDefinition) = 0;
};

#endif // __ISpotColorHandlingPrefs__

// End, ISpotColorHandlingPrefs.h.
