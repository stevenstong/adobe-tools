//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IHTTPAssetDownloadManager.h $
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
#ifndef __IHTTPAssetDownloadManager__
#define __IHTTPAssetDownloadManager__

#include "IPMUnknown.h"
#include "LinksID.h"
#include "HTTPLinkSubsystemTypes.h"
#include "URI.h"

#include "boost/config.hpp" 
#include "boost/shared_ptr.hpp" 
#include "boost/function.hpp" 

/*
 AdobePatentID="P7137-US"
 AdobePatentID="P7225-US"
*/

/**
Experimental interface - will be modified/documented in future.
*/
class IHTTPAssetDownloadManager : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IHTTPASSETDOWNLOADMANAGER };

	typedef boost::function<void (
		const URI& inURI,
		const IDFile& cachedFilePath,
		HTTPLinkSubsystemTypes::HTTPAssetDownloadState inState, 
		const float inProgress)> AssetDownloadProgressCallback;

	typedef boost::function<void (
		const URI& inURI,
		HTTPLinkSubsystemTypes::HTTPAssetDownloadState inState,
		const IDFile& cachedFilePath)> AssetDownloadCompletionCallback;

	/**
	**
	*/
	virtual bool16 Initialize() = 0;

	/**
	**
	*/
	virtual bool16 Shutdown() = 0;

	/**
	** Download start when download file path is not specified.
	*/
	virtual bool16 StartDownload(const URI& inUri,
		HTTPLinkSubsystemTypes::AssetDownloadMode inDownloadMode, 
		IHTTPAssetDownloadManager::AssetDownloadProgressCallback progressCallback = NULL,
		IHTTPAssetDownloadManager::AssetDownloadCompletionCallback completionCallback = NULL) = 0;

	/**
	** Download start when download file path is specified.
	*/
	virtual bool16 StartDownload(const URI& inUri,
		HTTPLinkSubsystemTypes::AssetDownloadMode inDownloadMode,
		const IDFile& downloadPath,
		IHTTPAssetDownloadManager::AssetDownloadProgressCallback progressCallback = NULL,
		IHTTPAssetDownloadManager::AssetDownloadCompletionCallback completionCallback = NULL) = 0;

	/**
	** Pause the download of the file for the given uri.
	*/
	virtual bool16 PauseDownload(const URI& inUri) = 0;

	/**
	** Resume the download of the file for the given uri.
	*/
	virtual bool16 ResumeDownload(const URI& inUri) = 0;

	/**
	**Cancel the download of the file for the given uri.
	*/
	virtual bool16 CancelDownload(const URI& inUri) = 0;

	/**
	** Pause all the download currently running.
	*/
	virtual bool16 PauseAllDownloads() = 0;

	/**
	**Resume all the download currently running.
	*/
	virtual bool16 ResumeAllDownloads() = 0;

	/**
	**Cancel all the download currently running.
	*/
	virtual bool16 CancelAllDownloads() = 0;

	/**
	** returns true if the download for input uri has been started
	*/
	virtual HTTPLinkSubsystemTypes::HTTPAssetDownloadState GetDownloadState(const URI& inUri) const = 0;

	/**
	** returns true if the download for input uri is in progress
	*/
	virtual bool16 GetProgress(const URI& inUri, float& outProgress) const = 0;

	/**
	** returns true if the download for input uri is in progress
	*/
	virtual bool16 InProgress(const URI& inUri) const = 0;
};

#endif	// __IHTTPAssetDownloadManager__
