//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/sharedcontent/IUpdateProvider.h $
//  
//  Owner: Paresh Goel
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
#ifndef __IUpdateProvider__
#define __IUpdateProvider__

#include "IPMUnknown.h"
#include "SharedContentID.h"

class IUpdateProvider : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IUPDATEPROVIDER };

	
	virtual PMIID      GetInterfaceID() const = 0;

	virtual bool16     GetNeedsUpdate(const UIDRef &source, const UIDRef &destination) const = 0;

	virtual void       Update(const UIDRef& source, UIDRef& destination, bool16 isTopMostLink = kFalse) = 0;

	virtual bool16		IsInterfaceOverridable() const = 0; 

};

#endif
