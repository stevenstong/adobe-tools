//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/interactive/IOpenFileBehaviorData.h $
//  
//  Owner: Michael Brubidge
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
#ifndef __IOpenFileBehaviorData_h__
#define __IOpenFileBehaviorData_h__

#include "IBehaviorData.h"
#include "BehaviorID.h"

//========================================================================================
// CLASS IOpenFileBehaviorData
//========================================================================================

/** Data interface for Open File Behavior */
class IOpenFileBehaviorData : public IBehaviorData
{
public:	

	/** Set file to open 
		@param fileName path to file */
	virtual void			SetFileName(const PMString& fileName) = 0;

	/** Get file to open 
		@return path to file */
	virtual PMString		GetFileName() const = 0;
};

#endif // __IOpenFileBehaviorData_h__
