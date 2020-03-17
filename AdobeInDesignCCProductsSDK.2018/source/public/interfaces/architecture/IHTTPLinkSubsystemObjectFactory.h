//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IHTTPLinkSubsystemObjectFactory.h $
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
//  Description:
//  Factory class interface used to provide a list of schemes supported by a http link
//  resource connection, and to create instances of resource connection.
//  
//========================================================================================

#pragma once
#ifndef __IHTTPLinkSubsystemObjectFactory__
#define __IHTTPLinkSubsystemObjectFactory__

// ----- Includes -----
#include "IPMUnknown.h"
#include "LinksID.h"

class IHTTPLinkResourceConnection;
class URI;
class IHTTPLinkResourceServerAPIWrapper;
class IDataBase;
class ILinkResourceHandler;
class ILinkResourceStateUpdater;

/*
 AdobePatentID="P7137-US"
 AdobePatentID="P7225-US"
 */

/**
 Experimental interface - will be modified/documented in future.
 This factory class is used to provide a list of schemes supported
 by a http link resource connection, and to create instances of a http link resource connection.
 Include this interface on the http link resource connection provider boss that is
 registered with the service registry as a kHTTPLinkResourceConnectionProvider.
 @see IHTTPLinkResourceConnection
 @see IK2ServiceProvider
 */
class IHTTPLinkSubsystemObjectFactory : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IHTTPLINKSUBSYSTEMOBJECTFACTORY };

	/**
	 Gets the URI scheme supported by the resource connection.
	 @return Supported scheme.
	 */ 
	virtual void GetSchemes(K2Vector<WideString>& schemes) const = 0;

	/**
	Returns the link resource handler that will be used by a link resource
	object to act on an resource whose URI scheme matches one of the
	supported schemes.
	@param uri    [IN] URI of the link resource the handler will be used for.
	@param db    [IN] Database that contains the link resource.
	@return Link resource handler. \\
	Caller assumes responsibility for releasing the returned object.
	*/
	virtual ILinkResourceHandler* QueryHandler(const URI& uri, IDataBase* db) const = 0;

	/**
	Returns the link resource state updater that will be used to obtain and
	update the state of a link resource whose URI scheme matches one of the
	supported schemes.
	@param uri    [IN] URI of the link resource whose state will be updated.
	@param db    [IN] Database that contains the link resource.
	@return Link resource state updater. \\
	Caller assumes responsibility for releasing the returned object.
	*/
	virtual ILinkResourceStateUpdater* QueryStateUpdater(const URI& uri, IDataBase* db) const = 0;

	/**
	 Returns the http link resource connection that will be used by a http links subsystem to 
	 interact with the http resource connection whose URI scheme matches one of the
	 supported scheme.
	 @param uri	[IN] URI of the link resource the handler will be used for.
	 @return Http Link resource connection. \\
			 Caller assumes responsibility for releasing the returned object.
	 */
	virtual IHTTPLinkResourceConnection* QueryHTTPLinkResourceConnection(const URI& uri, IDataBase* db) const = 0;

	/**
	Returns the http link resource server API wrapper that will be used by a http links subsystem to
	interact with the http resource server whose URI scheme matches one of the
	supported scheme.
	@param uri	[IN] URI of the link resource the handler will be used for.
	@return Http Link resource connection. \\
	Caller assumes responsibility for releasing the returned object.
	*/
	virtual IHTTPLinkResourceServerAPIWrapper* QueryHTTPLinkResourceServerAPIWrapper(const URI& uriScheme, IDataBase* db) const = 0;
};

#endif // __IHTTPLinkSubsystemObjectFactory__
