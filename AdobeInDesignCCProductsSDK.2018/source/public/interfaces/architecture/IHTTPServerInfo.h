//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IHTTPServerInfo.h $
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
#ifndef __IHTTPServerInfo__
#define __IHTTPServerInfo__

#include "IPMUnknown.h"

#include "LinksID.h"
#include "URI.h"

/*
 AdobePatentID="P7137-US"
 AdobePatentID="P7225-US"
 */

/**
Experimental interface - will be modified/documented in future.
*/
class IHTTPServerInfo : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IHTTPSERVERINFO };
	
	/**
	**
	*/
	virtual bool16 Init(const URI& inAssetUri) = 0;

	/**
	**
	*/
	virtual URI GetServerURI() const = 0;

	/**
	**
	*/
	virtual WideString GetAuthority() const = 0;

	/**
	**
	*/
	virtual WideString GetProtocol() const = 0;

	/*
	@param inRelativeAssetPath [IN] asset path to get the complete uri.
	@return complete uri from the asset path.
	*/
	virtual URI GetCompleteAssetURI(const WideString& inRelativeAssetPath) const = 0;

};

#endif	// __IHTTPServerInfo__
