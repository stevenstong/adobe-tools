//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IHTTPLinkConnectionManager.h $
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
#ifndef __IHTTPLinkConnectionManager__
#define __IHTTPLinkConnectionManager__

#include "IPMUnknown.h"
#include "LinksID.h"
#include "URI.h"

#include "IHTTPLinkResourceConnection.h"
#include "IHTTPLinkResourceStateBatchUpdater.h"

/*
 AdobePatentID="P7137-US"
 AdobePatentID="P7225-US"
*/

/**
Experimental interface - will be modified/documented in future.
*/
class IHTTPLinkConnectionManager : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IHTTPLINKCONNECTIONMANGER };

	enum HTTPConnectionResult
	{
		kHTTPConnectionResult_Success,
		kHTTPConnectionResult_Error,
		kHTTPConnectionResult_Unknown
	};

	/**
	**
	*/
	virtual bool16 Initialize() = 0;

	/**
	**
	*/
	virtual bool16 Shutdown() = 0;

	/**
	** Get the HTTP connection for the given URI.
	*/
	virtual IHTTPLinkResourceConnection* GetHTTPConnection(const URI& inAssetURI) = 0;

	/**
	**return kHTTPConnectionResult_Success on succesful release of the connection given by inConnection.
	*/
	virtual HTTPConnectionResult ReleaseHTTPConnection(IHTTPLinkResourceConnection* inConnection) = 0;

	/**
	**return kHTTPConnectionResult_Success on succesful release of the conn
	*/
	virtual IHTTPLinkResourceStateBatchUpdater* GetHTTPResourceStateBatchUpdater(IHTTPLinkResourceConnection* inConnection) = 0;

	/**
	** For internal purpose only
	*/
	virtual void ReadWriteSnapshotForBackgroundThread(IPMStream* s) = 0;
};

#endif	// __IHTTPLinkConnectionManager__
