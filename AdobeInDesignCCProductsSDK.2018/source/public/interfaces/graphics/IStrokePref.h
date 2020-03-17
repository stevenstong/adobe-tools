//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/IStrokePref.h $
//  
//  Owner: Dave Burnard
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
//  
//  Defines the stroke interface preferences.
//  
//========================================================================================

#pragma once
#ifndef __ISTROKEPREF__
#define __ISTROKEPREF__

#include "IPMUnknown.h"
#include "GenericID.h"
#include "PMReal.h"

class IStrokePref : public IPMUnknown
{
public:
	// for when the line weight is set to "None", a hairline 
	// line has a zero lineweight
	enum {kNoStroke = -1};
	
	virtual const UID& GetColorUID() = 0;
	virtual void SetColorUID(const UID &newColor) = 0;
		
	virtual PMReal GetWeight() = 0;
	virtual void SetWeight(PMReal lineWeight) = 0;
};

#endif // __ISTROKE__

