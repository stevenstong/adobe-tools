//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/ILinkResourceHelperHandler.h $
//  
//  Owner: Manohar Gour
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2018/03/06 12:15:34 $
//  
//  $Revision: #5 $
//  
//  $Change: 1009641 $
//  
//  ADOBE CONFIDENTIAL
//  
//  Copyright 2016 Adobe 
//  All Rights Reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in 
//  accordance with the terms of the Adobe license agreement accompanying 
//  it. If you have received this file from a source other than Adobe, 
//  then your use, modification, or distribution of it requires the prior 
//  written permission of Adobe.
//  
//  Description:
//  This class defines an interface that implements behavior for an ILinkResource that
//  is specific to the type of the resource as identified by the scheme of the link
//  resource's URI.
//  
//========================================================================================

#pragma once
#ifndef __ILinkResourceHelperHandler__
#define __ILinkResourceHelperHandler__

// ----- Includes -----
#include "IPMUnknown.h"
#include "LinksUIID.h"

#include "ILinkResourceHelper.h"


/**
Experimental interface - will be modified/documented in future.
*/
class ILinkResourceHelperHandler : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ILINKRESOURCEHELPERHANDLER };

	virtual	ILinkResourceHelper::IconStatus GetIcon(const UIDRef& ref, const URI& uri, const ILink* link) const = 0;
	virtual	ILinkResourceHelper::IconStatus GetPageItemAdornmentIcon(const UIDRef& ref, const URI& uri, const ILink* link) const = 0;
	virtual bool CanDoDoubleClickInaccessibleAction() const = 0;
	virtual void DoubleClickInaccessibleAction() const = 0;
	virtual void ReplaceWithOriginalAsset() const = 0;
	virtual bool IsInaccessibleActionSupportedURIScheme() const = 0;
	virtual void InaccessibleActionOnOpenDoc() const = 0;
	virtual PMString InaccessibleLinksWarningMessage(int32 count) const = 0;
};

#endif // __ILinkResourceHandler__
