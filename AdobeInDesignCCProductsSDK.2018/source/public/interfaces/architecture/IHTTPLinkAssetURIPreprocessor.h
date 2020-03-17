//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IHTTPLinkAssetURIPreprocessor.h $
//  
//  Owner: Nitin Kumar
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
//  Copyright 2017 Adobe 
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
#ifndef __IHTTPLinkAssetURIPreprocessor__
#define __IHTTPLinkAssetURIPreprocessor__

#include "IPMUnknown.h"
#include "LinksID.h"

#include "URI.h"

/*
 AdobePatentID="P7225-US"
 */

/**
Experimental interface - will be modified/documented in future.
*/
class IHTTPLinkAssetURIPreprocessor : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IHTTPLINKASSETURIPREPROCESSOR };
	/*
	 *Create a URI which have Tagname combined to it.
	*/
	virtual bool16 GetTextFragmentLinkCreationURI(const URI& inURI, const WideString* tagName, URI& outURI) = 0;

	/*
	* It de-couple the tagName from the URI if present. Gives a URI without a tagname as output
	*/
	virtual bool16 GetXMLHrefAttributeURI(const URI& inURI, URI& outURI) = 0;
	
};

#endif	// __IHTTPLinkAssetURIPreprocessor__
