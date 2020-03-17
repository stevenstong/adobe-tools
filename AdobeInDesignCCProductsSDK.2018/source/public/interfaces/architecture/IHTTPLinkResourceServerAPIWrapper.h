//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IHTTPLinkResourceServerAPIWrapper.h $
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
#ifndef __IHTTPLinkResourceServerAPIWrapper__
#define __IHTTPLinkResourceServerAPIWrapper__

#include "IPMUnknown.h"
#include "LinksID.h"
#include "IHTTPLinkResourceConnection.h"


#include "HTTPLinkSubsystemTypes.h"
#include "IDTime.h"
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
class IHTTPLinkResourceServerAPIWrapper : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IHTTPLINKRESOURCESERVERAPIWRAPPER };

	struct AssetStatusWithMetadata
	{
		enum AssetStatus
		{
			kMissing,
			kInaccessible,
			kUnknown,
			kAvailable
		};

		struct AssetMetadata
		{
			std::string fMimeType;	// optional
			uint64		fSize;
			IDTime		fModifiedDate;
			std::string	fUniqueID;
			std::string	fVersionData;
			std::string fPath;
			std::string	fFullDataString;
		};
		typedef boost::shared_ptr<AssetMetadata> AssetMetadataPtr;
		AssetStatus		    fAssetStatus;
		AssetMetadataPtr	fAssetMetadataPtr;
		AssetStatusWithMetadata()
		{
			fAssetStatus = AssetStatus::kUnknown;
		}
	};

	typedef boost::shared_ptr<AssetStatusWithMetadata>          AssetStatusWithMetadataPtr;
	typedef std::vector<AssetStatusWithMetadataPtr>             AssetStatusWithMetadataPtrVector;
	typedef std::vector<URI>									URIVector;
	typedef boost::shared_ptr<std::string>                      AssetMetadataContentPtr;

	typedef boost::shared_ptr<AssetStatusWithMetadataPtrVector> AssetStatusWithMetadataPtrVectorPtr;
	typedef std::map<std::string, AssetStatusWithMetadataPtr>	AssetPathToMetadataMap;
	typedef AssetPathToMetadataMap::iterator					AssetPathToMetadataMap_iter;
	typedef std::vector<WideString>								AssetPathVector;
	
	/**
	** request the status of the Metadata asset specified by the assetURI on copnnection. e.g missing, modified etc 
	*/
	virtual AssetStatusWithMetadataPtr RequestAssetStatusWithMetadata(IHTTPLinkResourceConnection* connection, const URI& assetURI) = 0;

	typedef boost::function<void(AssetStatusWithMetadataPtr assetStatusWithMetadataPtr)> RequestAssetStatusCompletionFunction;

	typedef boost::function<void(AssetStatusWithMetadataPtrVectorPtr assetStatusWithMetadataPtrVectorPtr)> RequestBatchAssetStatusCompletionFunction;

	/**
	**Asyn mode of the resquest for the status of metadata asset for given assetURI. returns kTrue on success else kFalse.
	*/
	virtual bool16 AsyncRequestAssetStatusWithMetadata(IHTTPLinkResourceConnection* connection, 
														const URI& assetURI, 
														RequestAssetStatusCompletionFunction completionFunction) = 0;

	/**
	**Asyn mode of the batch Resquest for the status of metadata asset for given assetURIVector. returns kTrue on success else kFalse.
	*/
	virtual bool16 AsyncRequestBatchAssetStatusWithMetadata(IHTTPLinkResourceConnection* connection,
															const URIVector &assetURIVector,
															RequestBatchAssetStatusCompletionFunction completionFunction) = 0;
	/**
	** Request the metadata content for the metadata asset specified by the given inURI. returns a pointer to content.
	*/
	virtual AssetMetadataContentPtr RequestAssetMetadataContent(IHTTPLinkResourceConnection* connection, const URI& inURI, ErrorCode err = kCantPlaceTextFragmentLinkError) = 0;

	/*
	* generate the token for the given connection and fills in token.
	*/
	virtual bool16 GenerateToken(IHTTPLinkResourceConnection* connection, std::string& token) = 0;

	/*
	*Configure the batch size limit for the batch request for given connection.
	*/
	virtual bool16 GetConfiguredBatchLimit(IHTTPLinkResourceConnection* connection, int32& batchLimit) = 0;

	/*
	*kTrue if server specified by the connection is accessible and filled the serverAccessible flag.
	*/
	virtual bool16 IsServerAccessible(IHTTPLinkResourceConnection* connection, bool16& serverAccessible) = 0;

	/*
	* get the headers from the connection and resolves the uri to a correct server for the download to happen.
	*/
	virtual bool16 GetDetailsForDownloadingAsset(IHTTPLinkResourceConnection* connection, const URI& inURI, URI& assetURI, HTTPLinkSubsystemTypes::Headers& headers) const = 0;
	/**
	** @return URI for the rendition corresponding to passed asset URI
	*/
	virtual URI GetRenditionURI(const URI& inOrgAssetURI) const = 0;

	/*
	*kTrue if uri is supported for batch update else kFalse.
	*/
	virtual bool16 SupportsHTTPResourceStateBatchUpdater(const URI& uri) const = 0;

	/*
	*Fills onjType by the type of object for e.g asset or asset metadata for the given uri. and returns kTrue on Success else kFalse.
	*/
	virtual bool16 GetHTTPBatchRequestObjectType(const URI& uri, HTTPLinkSubsystemTypes::BatchRequestObjectType& objType) const = 0;
};

#endif	// __IHTTPLinkResourceServerAPIWrapper__
