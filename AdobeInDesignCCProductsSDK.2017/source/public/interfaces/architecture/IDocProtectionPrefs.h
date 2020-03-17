//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IDocProtectionPrefs.h $
//  
//  Owner: Roey Horns
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
#ifndef __IDocProtectionPrefs__
#define __IDocProtectionPrefs__

#ifndef __IDATABASE__
#include "IDataBase.h"
#endif

class IDocProtectionPrefs : public IPMUnknown
{
public:
	// Default protection level
	virtual void 	SetLevel(IDataBase::ProtectionLevel newLevel) = 0;
	virtual IDataBase::ProtectionLevel 	GetLevel() const = 0;
};

#endif // __IDocProtectionPrefs__
