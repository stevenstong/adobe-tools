//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/public/interfaces/graphics/IFlattenerUsage.h $
//  
//  Owner: Matt Phillips
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
#ifndef __IFlattenerUsage__
#define __IFlattenerUsage__

#include "XPID.h"

class IFlattenerUsage : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IFLATTENERUSAGE };
	virtual bool32 IsFlattenerRequired(int32 nFlags = 0) = 0;
};

#endif
