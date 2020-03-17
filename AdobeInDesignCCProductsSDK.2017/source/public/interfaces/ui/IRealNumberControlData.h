//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/ui/IRealNumberControlData.h $
//  
//  Owner: Michael Burbidge
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
#ifndef __IRealNumberControlData__
#define __IRealNumberControlData__

#include "PMReal.h"

/** Data interface for holding PMReal values for widgets */
class IRealNumberControlData : public IPMUnknown
{
public:
	/** 	Set the value
		@param value The new value to store into the widget
		@param invalidate Whether or not to invalidate the widget to cause redraw
		@notifyOfChange Whether or not to notify observers of this change to value.
	*/
	virtual void		SetValue(const PMReal& value, bool16 invalidate = kTrue, bool16 notifyOfChange = kTrue) = 0;
	
	/** 	Get the value
		@return The value of the widget
	*/
	virtual PMReal		GetValue() const = 0;
};

#endif