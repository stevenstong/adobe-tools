//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IHTTPLinkResourceConnection.h $
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
#ifndef __IHTTPLinkResourceConnection__
#define __IHTTPLinkResourceConnection__

#include "IPMUnknown.h"
#include "IPMStream.h"

#include "LinksID.h"
#include "PMString.h"

/*
 AdobePatentID="P7137-US"
 AdobePatentID="P7225-US"
*/

/**
Experimental interface - will be modified/documented in future.
*/
class IHTTPLinkResourceConnection : public IPMUnknown
{
public:

	//[TODO] decide on type
	typedef PMString ConnectionId;

	enum { kDefaultIID = IID_IHTTPLINKRESOURCECONNECTION };

	/**
	**
	*/
	virtual bool16 Shutdown() = 0;

	/**
	**kTrue if the Http Link Resource Connection is connected else kFalse. 
	*/
	virtual bool16 IsConnected() const = 0;

	/**
	**kTrue if the Http Link Resource Connection is authorized else kFalse. 
	*/
	virtual bool16 IsAuthorized() const = 0;

	/**
	**kTrue if connection is created/logged-in succesfully else kFalse.
	*/
	virtual bool16 Connect() = 0;

	/**
	**kTrue if re-connection is succesful else kFalse.
	*/
	virtual bool16 Reconnect() = 0;

	/**
	** kTrue if Http Link Resource Connection is shutdown/logged out succesfully else kFalse.
	*/
	virtual bool16 Disconnect() = 0;

	/**
	** get the connection Id for the given Http Link Resource Connection.
	*/
	virtual ConnectionId GetConnectionId() = 0;

    /**
    @brief: Sets the connection to logout
            Empties token.
    @inParam:
    @outParam:
    @return:
    */
    virtual void SetLogout() = 0;

    /**
    @brief: Gets the login credentials
    @inParam:
    @outParam: loginInformation stringstream: Returns the stored login credentials
    @return: kFalse if credentials could not be encoded, else kTrue
    */
    virtual bool16 GetLoginCredentials(std::stringstream& loginInformation) const = 0;

    /**
    @brief: Sets the login credentials for AEM Panel
    @inParam: loginInformation stringstream: Returns the stored login credentials
    @outParam:
    @return:  kFalse if credentials could not be decoded, else kTrue
    */
    virtual bool16 SetLoginCredentials(const std::stringstream& loginInformation) = 0;

	/**
	** For internal purpose only
	*/
	virtual void ReadWriteSnapshotForBackgroundThread(IPMStream* s) = 0;
};

#endif  // __IHTTPLinkResourceConnection__
