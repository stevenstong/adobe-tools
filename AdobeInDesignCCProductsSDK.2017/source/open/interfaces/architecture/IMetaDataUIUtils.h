//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/interfaces/architecture/IMetaDataUIUtils.h $
//  
//  Owner: Lin Xia
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2017/03/10 00:54:55 $
//  
//  $Revision: #10 $
//  
//  $Change: 979292 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#pragma once
#ifndef __IMetaDataUIUtils__
#define __IMetaDataUIUtils__

// ----- Interfaces -----
#include "IPMUnknown.h"

// ----- ID.h files -----
#include "MetaDataUIID.h"

// ----- Includes -----
#include "URI.h"

/** A utility interface for accessing metadata UI */

class IMetaDataAccess;

class IMetaDataUIUtils : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IMETADATAUIUTILS };

	/**
		Initializes metadata component before using it.
		@param	None
		@return None
	*/
	virtual void Initialize() = 0;

	/**
		Displays the metadata in a dialog and accepts user input if allowed.
		@param	metaData	IN	Specifies the metadata to be displayed.
		@param	dialogTitle	IN	Title of the dialog.
		@param	redOnly		IN	Specifies if users are allowed to edit the metadata.
		@return	kTrue if succeeded, kFalse otherwise.
	*/
	virtual bool16	DisplayMetaData(IMetaDataAccess* metaData, const PMString& dialogTitle, bool16 readOnly = kFalse, URI* resourceURI = nil) = 0;

	/**
		Terminate/cleanup metadata component.
		@param	None
		@return None
	*/
	virtual void Terminate() = 0;

	/**
		INTERNAL USE ONLY.
		Determine whether we should be using drover translation dictionaries for string lookup.
		@param	None
		@return bool16
	*/
	virtual bool16 UseDroverTranslationDicts() = 0;
};

#endif	// __IMetaDataUIUtils__
