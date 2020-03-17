//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IDuplicatePageCmdData.h $
//  
//  Owner: Brendan O'Shea
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
//  Data interface for new/delete pages.
//  
//========================================================================================

#pragma once
#ifndef __IDuplicatePageCmdData__
#define __IDuplicatePageCmdData__

#include "IPMUnknown.h"
#include "UIDRef.h"

class IDuplicatePageCmdData : public IPMUnknown
{
public:
	virtual void Set(const UIDRef& sourcePage, const UIDRef& destinationSpread) = 0;
	virtual const UIDRef& GetSourcePage() const = 0;
	virtual const UIDRef& GetDestinationSpread() const = 0;
};

#endif // __IDuplicatePageCmdData__
