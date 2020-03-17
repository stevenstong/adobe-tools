//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IHTTPLinkResourceStateBatchUpdater.h $
//  
//  Owner: Ramnik Singh
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
//========================================================================================

#pragma once
#ifndef __IHTTPLinkResourceStateBatchUpdater__
#define __IHTTPLinkResourceStateBatchUpdater__

#include "IPMUnknown.h"
#include "LinksID.h"
#include "IHTTPLinkResourceServerAPIWrapper.h"
#include "UIDList.h"

/*
 AdobePatentID="P7137-US"
 AdobePatentID="P7225-US"
 */

/**
Experimental interface - will be modified/documented in future.
*/
class IHTTPLinkResourceStateBatchUpdater : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IHTTPLINKRESOURCESTATEBATCHUPDATER };

	/*
	*Queue the batch update request for the given Resource UID.
	*/
	virtual ErrorCode QueueLinkResourceUpdateRequestForBatch(const UID& resourceUID,  const HTTPLinkSubsystemTypes::UpdateLinkResourceStateClientData& updateLinkResourceStateData) = 0;
	
	// Do sync/blocking batch update for the UIDs in resourceUIDs list.
	virtual ErrorCode DoSynchrononousBatchUpdate(const UIDList& resourceUIDs, const HTTPLinkSubsystemTypes::UpdateLinkResourceStateClientData& updateLinkResourceStateData) = 0;
};

#endif	// __IHTTPLinkResourceStateBatchUpdater__
