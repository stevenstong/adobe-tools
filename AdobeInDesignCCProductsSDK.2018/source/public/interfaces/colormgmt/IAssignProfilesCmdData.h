//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/colormgmt/IAssignProfilesCmdData.h $
//  
//  Owner: James Jardee-Borquist
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

#ifndef __IAssignProfilesCmdData__
#define __IAssignProfilesCmdData__

#if PRAGMA_ONCE
#pragma once
#endif

#include "ICMSProfile.h"
#include "ICMSSettings.h"
#include "IPMUnknown.h"

#include "ACEColorMgmtID.h"

//========================================================================================
// CLASS IAssignProfilesCmdData
//========================================================================================

class IAssignProfilesCmdData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IASSIGNPROFILESCMDDATA };
	
	virtual void SetName(ICMSProfile::profileCategory category, const PMString &name) = 0;
	virtual bool16 GetName(ICMSProfile::profileCategory category, PMString &name) const = 0;
	
	virtual void SetVectorRI(ICMSSettings::renderingIntent ri) = 0;
	virtual void SetRasterRI(ICMSSettings::renderingIntent ri) = 0;
	virtual void SetPostBlendRI(ICMSSettings::renderingIntent ri) = 0;
	virtual ICMSSettings::renderingIntent GetVectorRI() const = 0;
	virtual ICMSSettings::renderingIntent GetRasterRI() const = 0;
	virtual ICMSSettings::renderingIntent GetPostBlendRI() const = 0;
};

#endif // __IAssignProfilesCmdData__

// End, IAssignProfilesCmdData.h.
