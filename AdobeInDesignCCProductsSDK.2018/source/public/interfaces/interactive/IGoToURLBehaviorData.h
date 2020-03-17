//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/interactive/IGoToURLBehaviorData.h $
//  
//  Owner: Michael Brubidge
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
#ifndef __IGoToURLBehaviorData_h__
#define __IGoToURLBehaviorData_h__

#include "IBehaviorData.h"
#include "BehaviorID.h"

//========================================================================================
// CLASS IGoToURLBehaviorData
//========================================================================================

/** Data interface for Go To URL Behavior */
class IGoToURLBehaviorData : public IBehaviorData
{
public:	
	/** Set destination URL */
	virtual void			SetURL(const PMString& page) = 0;

	/** Get destination URL */
	virtual PMString		GetURL() const = 0;

};

#endif // __IGoToURLBehaviorData_h__