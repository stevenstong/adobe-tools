//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/colormgmt/ICMSProfileCodeData.h $
//  
//  Owner: James Jardee-Borquist
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

#ifndef __ICMSProfileCodeData__
#define __ICMSProfileCodeData__

#if PRAGMA_ONCE
#pragma once
#endif

#include "ICMSProfile.h"
#include "IPMUnknown.h"

#include "ACEColorMgmtID.h"

//========================================================================================
// CLASS ICMSProfileCodeData
//========================================================================================

class ICMSProfileCodeData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ICMSPROFILECODEDATA };
	
	virtual void Set(ICMSProfile::profileCode profileCode) = 0;
	virtual ICMSProfile::profileCode GetProfileCode() const = 0;
};

#endif // __ICMSProfileCodeData__

// End, ICMSProfileCodeData.h.
