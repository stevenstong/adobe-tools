//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IHTTPLinkManager.h $
//  
//  Owner: Sanyam Jain
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2018/03/06 12:15:34 $
//  
//  $Revision: #6 $
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
#ifndef __IHTTPLinkManager__
#define __IHTTPLinkManager__

#include "IPMUnknown.h"
#include "LinksID.h"
#include "URI.h"

#include "IHTTPLinkResourceServerAPIWrapper.h"
#include "ILinkResourceHandler.h"
#include "ILinkResourceStateUpdater.h"
#include "IHTTPLinkResourceServerCache.h"
#include "IHTTPLinkAssetURIPreprocessor.h"

/*
 AdobePatentID="P7137-US"
 AdobePatentID="P7225-US"
*/

/**
Experimental interface - will be modified/documented in future.
*/
class IHTTPLinkManager : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IHTTPLINKMANGER };

	/**
	**
	*/
	virtual bool16 Initialize() = 0;

	/**
	**
	*/
	virtual bool16 Shutdown() = 0;

	/**
	** get the vector of uri schemes into @param schemes for the given Link Manager.
	*/
	virtual void GetSchemes(K2Vector<WideString>& schemes) const = 0;

	/*
	@param inAssetURI [IN] uri of the Link Resource.
	@param db [IN] database corresponding to the link resource.
	@return resource handler for the specified Link Resource.
	*/
	virtual ILinkResourceHandler* QueryHandler(const URI& inAssetURI, IDataBase* db) = 0;

	/*
	@param inAssetURI [IN] uri of the Link Resource.
	@param db [IN] database corresponding to the link resource.
	@return resource state updater for the specified Link Resource.
	*/
	virtual ILinkResourceStateUpdater* QueryStateUpdater(const URI& inAssetURI, IDataBase* db) = 0;

	/*
	@param inAssetURI [IN] uri scheme e.g aem/file/cclibrary schemes of the Link Resource.
	@param db [IN] database corresponding to the link resource.
	@return resource server api wrapper for the specified Link Resource.
	*/
	virtual IHTTPLinkResourceServerAPIWrapper* GetHTTPLinkResourceServerAPIWrapper(const URI& inAssetURI) = 0;

	/*
	@param inAssetURI [IN] uri scheme e.g aem/file/cclibrary schemes of the Link Resource.
	@return resource server cache the specified Link Resource.
	*/
	virtual IHTTPLinkResourceServerCache* QueryHTTPLinkResourceServerCache(const URI& inAssetURI) = 0;

	/*
	@param inAssetURI [IN] uri scheme e.g aem/file/cclibrary schemes of the Link Resource.
	@return resource connection for the specified Link Resource.
	*/
	virtual IHTTPLinkResourceConnection* QueryHTTPLinkResourceConnection(const URI& inAssetURI) = 0;

	/*
	@param inAssetURI [IN] uri scheme e.g aem/file/cclibrary schemes of the Link Resource.
	@return URI Preprocessor for the specified Link Resource.
	*/
	virtual IHTTPLinkAssetURIPreprocessor* GetHTTPLinkAssetURIPreprocessor(const URI& inAssetURI) = 0;

	/**
	** For internal purpose only
	*/
	virtual void ReadWriteSnapshotForBackgroundThread(IPMStream* s) = 0;
};

#endif	// __IHTTPLinkManager__
