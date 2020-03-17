//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IDocProtectionPrefsCmdData.h $
//  
//  Owner: Roey Horns
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
#ifndef __IDocProtectionPrefsCmdData__
#define __IDocProtectionPrefsCmdData__

#include "IPMUnknown.h"

#ifndef __IDATABASE__
#include "IDataBase.h"
#endif

class IDocProtectionPrefsCmdData : public IPMUnknown
{
public:
	virtual void SetLevel(IDataBase::ProtectionLevel newLevel) = 0;
	virtual IDataBase::ProtectionLevel GetLevel() const = 0;
};


#endif // __IDocProtectionPrefsCmdData__