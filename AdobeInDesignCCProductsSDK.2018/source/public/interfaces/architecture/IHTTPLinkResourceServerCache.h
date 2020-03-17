//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IHTTPLinkResourceServerCache.h $
//  
//  Owner: Sanyam Jain
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
#ifndef __IHTTPLinkResourceServerCache__
#define __IHTTPLinkResourceServerCache__

#include "IPMUnknown.h"
#include "IHTTPLinkCachedAssetEntry.h"
#include "LinksID.h"
#include "HTTPLinkSubsystemTypes.h"
#include "URI.h"

/*
 AdobePatentID="P7137-US"
 AdobePatentID="P7225-US"
 */

/**
Experimental interface - will be modified/documented in future.
*/
class IHTTPLinkResourceServerCache : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IHTTPLINKRESOURCESERVERCACHE };

	typedef boost::function<void(
		const URI& inUri, 
		const HTTPLinkSubsystemTypes::HTTPAssetDownloadState& inState,
		const float inProgress)> AssetDownloadProgressCallback;

	typedef boost::function<void(
		const URI& inUri,
		const HTTPLinkSubsystemTypes::HTTPAssetDownloadState& inState,
		IHTTPLinkCachedAssetEntry* cachedAssetEntry)> AssetDownloadCompletionCallback;

	/**
	**
	*/
	virtual bool16 Initialize() = 0;

	/**
	**
	*/
	virtual bool16 Shutdown() = 0;

	/**
	**
	[TODO] - add callback for completion, error etc
	*/
	virtual IHTTPLinkCachedAssetEntry* GetCachedAssetEntry(const URI& inUri,
									  bool16 inDownloadIfMissing = kTrue,
									  HTTPLinkSubsystemTypes::AssetDownloadMode inDownloadMode = HTTPLinkSubsystemTypes::kAssetDownloadMode_Sync,
									  IHTTPLinkResourceServerCache::AssetDownloadProgressCallback downloadProgressCallback = NULL,
									  IHTTPLinkResourceServerCache::AssetDownloadCompletionCallback downloadCompletionCallback = NULL) = 0;

	/*
	*Invalidate the cache entry of the file downloaded for the inURI.
	@return kTrue on success else kFalse.
	*/
	virtual bool16 InvalidateCacheForURI(const URI& inUri) = 0;

	/*
	@param forcePurgeAll [IN] true if we want forceful purging.
	@return kTrue on success else kFalse.
	*/
	virtual bool16 PurgeCache(bool16 forcePurgeAll = kFalse) = 0;

	/**
	** returns true if the download for input uri has been started
	*/
	virtual HTTPLinkSubsystemTypes::HTTPAssetDownloadState GetDownloadState(const URI& inUri) = 0;

	/**
	** For internal purpose only
	*/
	virtual void ReadWriteSnapshotForBackgroundThread(IPMStream* s) = 0;
};

#endif	// __IHTTPLinkResourceServerCache__
