//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IHTTPLinkUtils.h $
//  
//  Owner: Arvinder Singh
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
#ifndef __IHTTPLinkUtils__
#define __IHTTPLinkUtils__

#include "IPMUnknown.h"

#include "Utils.h"
#include "ILink.h"
#include "ILinkResource.h"
#include "IDataBase.h"
#include "IDatabaseSnapshot.h"

#include "string"
#include "WideString.h"


class IHTTPLinkResourceConnection;
class IHTTPLinkResourceServerCache;

/*
 AdobePatentID="P7137-US"
 AdobePatentID="P7225-US"
 */

/**
Experimental interface - will be modified/documented in future.
*/
class IHTTPLinkUtils : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IHTTPLINKUTILS };

	/**
	** Function to get the URI for original asset or FPO based on the information in the input UIDRef
	*/
	virtual bool16 GetOriginalURIForResource(const ILinkResource* iLinkResource, URI& uri) const = 0;

	/**
	** Function to get the URI for original asset or FPO based on the information in the input UIDRef
	*/
	virtual bool16 GetRenditionURIForResource(const ILinkResource* iLinkResource, URI& uri) const = 0;

	/**
	** GetShortResourceName
	*/
	virtual WideString GetShortName(const URI& uri) const = 0;
	
	virtual AString WideStringToAString(const WideString& wString) const = 0;
	/**
	** [TODO] - evaluate if this needs to be moved somewhere else.
	*/
	virtual URI GetServerURI(const URI& inAssetUri) const = 0;

	/**
	** return kTrue if the uri is  Http Link supported else return  kFalse.
	*/
	virtual bool16 IsHTTPLinksSupportedURI(const URI& uri) const = 0;

	/**
	** return kTrue if the db is valid else return  kFalse.
	*/
	virtual bool16 IsValidDataBaseForHttpLink(IDataBase *db) const = 0;


	/**
	@param uri [IN] uri of the asset.
	@return Http Link resource Connection on the given uri.
	*/
	virtual InterfacePtr<IHTTPLinkResourceConnection> GetHTTPLinkResourceConnection(const URI& uri) const = 0;

	/**
	@param uri [IN] uri of the asset.
	@return Http Link resource Server cache on the given uri.
	*/
	virtual InterfacePtr<IHTTPLinkResourceServerCache> GetHTTPLinkResourceServerCache(const URI& uri) const = 0;

	virtual void ReadWriteSnapshotForBackgroundThread(DatabaseSnapshotPtr db, bool16 isReadingMode) const = 0;

	// Do not call it from outside world, this is for our internal purpose only.
	virtual void ShutdownHTTPLinksSubsystem() const = 0;
};

#endif	// __IHTTPLinkUtils__
