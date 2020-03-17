//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/ui/ITitlebarData.h $
//  
//  Owner: robin briggs
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
//  
//  Purpose:
//  Interface for storing information about window titlebar
//  
//========================================================================================

#pragma once
#ifndef __ITitleBarData__
#define __ITitleBarData__

#include "IPMUnknown.h"
#include "WidgetID.h"

class ITitlebarData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ITITLEBARDATA };

	virtual void SetHasSideTitlebar(bool16 b) = 0;
	virtual bool16 GetHasSideTitlebar() const = 0;
	
	virtual void SetHasClosebox(bool16 b) = 0;
	virtual bool16 GetHasClosebox() const = 0;
	
};


#endif // __ITitleBarData__
