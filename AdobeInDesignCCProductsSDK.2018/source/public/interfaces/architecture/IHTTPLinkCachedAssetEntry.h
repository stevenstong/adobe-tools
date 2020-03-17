//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IHTTPLinkCachedAssetEntry.h $
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
#ifndef __IHTTPLinkCachedAssetEntry__
#define __IHTTPLinkCachedAssetEntry__

#include "IPMUnknown.h"
#include "LinksID.h"

#include "ILinkResource.h"

/*
 AdobePatentID="P7137-US"
 AdobePatentID="P7225-US"
*/

/**
Experimental interface - will be modified/documented in future.
*/
class IHTTPLinkCachedAssetEntry
{
public:
	/**
	* kTrue if file exits in cache else kFalse.
	**/
	virtual bool16 Exists() = 0;

	/**
	*kTrue if file in cache is readable else kFalse.
	**/
	virtual bool16 CanRead() = 0;

	/**
	*kTrue if file in cache can be open else kFalse.
	**/
	virtual bool16 CanCreateReadStream() = 0;

	/**
	* kTrue if can create a Stream for the file in cache.
	**/
	virtual IPMStream* CreateReadStream() = 0;

	/**
	* kTrue if can copy to file.
	**/
	virtual bool16 CanCopyToFile() = 0;

	/**
	* copy to file outFile.
	**/
	virtual ErrorCode CopyToFile(IDFile& outFile) = 0;

	/**
	*return File type info for the specified file.
	**/
	virtual FileTypeInfo GetFileTypeInfo() = 0;

	/*
	* It fills the packet with XMPInfo of the cached file.
	*/
	virtual bool GetXMPPacketInfo(std::string& packet) const = 0;

	/*
	* Ktrue if we can get the file in cache.
	*/
	virtual bool CanGetFile() const = 0;

	/*
	* Fills the file and return true on success.
	*/
	virtual bool GetFile(IDFile& file) const = 0;

	/**
	*
	**/
	virtual bool16 IsValid()  { return fIsValid;  }

	/**
	*
	**/
	virtual void SetValid(bool16 valid)  { fIsValid = valid; }



	IHTTPLinkCachedAssetEntry() : fIsValid(kTrue) {}

	virtual ~IHTTPLinkCachedAssetEntry() {}

	virtual void ReadWrite(IPMStream *s) = 0;
	
private:
	bool16	fIsValid;
};

#endif	// __IHTTPLinkCachedAssetEntry__
