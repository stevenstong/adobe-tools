//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/IOffscreenAttr.h $
//  
//  Owner: Greg St. Pierre
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
#ifndef __IOffscreenAttr__
#define __IOffscreenAttr__

#include "IPMUnknown.h"
#include "TextID.h"

/** This interface added to provide a hook from TextFrame to potentially
	delegate functionality to custom CanUseOffscreen implementation
	@ingroup text_layout
*/
class IOffscreenAttr : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IOFFSCREENATTR };

	virtual bool16 CanUseOffscreen(PMMatrix const &innerToPasteboard) const = 0;
};

#endif //!def __IOffscreenAttr__
