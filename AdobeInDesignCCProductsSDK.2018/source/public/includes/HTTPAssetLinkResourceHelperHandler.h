//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/HTTPAssetLinkResourceHelperHandler.h $
//  
//  Owner: Manohar Gour
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

#ifndef __HTTPAssetLinkResourceHelperHandler__ 
#define __HTTPAssetLinkResourceHelperHandler__ 

#include "CPMUnknown.h"

#include "ILink.h"
#include "ILinkResource.h"
#include "ILinkResourceHelperHandler.h"

#include "LinksID.h"


// =============================================================================
//		* HTTPAssetLinkResourceHelperHandler											
// =============================================================================

/**
Experimental header - will be modified/documented in future.
*/
class PUBLIC_DECL HTTPAssetLinkResourceHelperHandler : public CPMUnknown<ILinkResourceHelperHandler>
{
public:
	typedef CPMUnknown<ILinkResourceHelperHandler> inherited;

	HTTPAssetLinkResourceHelperHandler(IPMUnknown* boss);
	virtual ~HTTPAssetLinkResourceHelperHandler();

	/*
	@param ref [IN] UIDRef of the Link Resource.
	@param uri [IN] uri of the Link Resource.
	@param link [IN] link corresponding to the link resource.
	@return Icon for the link in link panel.
	*/
	virtual	ILinkResourceHelper::IconStatus GetIcon(const UIDRef& ref, const URI& uri, const ILink* link) const;

	/*
	@param ref [IN] UIDRef of the Link Resource.
	@param uri [IN] uri of the Link Resource.
	@param link [IN] link corresponding to the link resource.
	@return Icon for the pageitem corresponding to the link.
	*/
	virtual ILinkResourceHelper::IconStatus GetPageItemAdornmentIcon(const UIDRef& ref, const URI& uri, const ILink* link) const;

	/*
	 @return true if double click is allowed for inaccessible link else false.
	*/
	virtual bool CanDoDoubleClickInaccessibleAction() const; 

	// performs double click on inaccessible link.
	virtual void DoubleClickInaccessibleAction() const; 
	/*

	@replace FPO with original asset.
	*/
	virtual void ReplaceWithOriginalAsset() const;
	/*

	@return true if URI specific inaccessible links action have to be taken.
	*/
	virtual bool IsInaccessibleActionSupportedURIScheme() const;
	/*

	@take URI specific inaccessible links.
	*/
	virtual void InaccessibleActionOnOpenDoc() const;
	/*
	@param count [IN] no of links for which warning message have to be shown.
	@return warning message for all same http  type URI inaccessible links.
	*/
	virtual PMString  InaccessibleLinksWarningMessage(int32 count) const;

};

#endif