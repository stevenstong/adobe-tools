//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/IXFLExportCommandData.h $
//  
//  Owner: Greg St. Pierre
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2018/03/06 12:15:34 $
//  
//  $Revision: #10 $
//  
//  $Change: 1009641 $
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

#include "DynamicDocumentsID.h"

/**
 Data interface for XFL (Flash interchange) export command
 */
class IXFLExportCommandData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IXFLEXPORTCOMMANDDATA };
	
	/** 
	 Sets whether to use the packaged variant of XFL for the export.
	 
	 @param	usePackage		Boolean. kTrue if should use packaged variant of XFL
	 */
	virtual void SetExportAsPackage(bool16 usePackage) = 0;
	
	/**
	 Gets whether to use the packaged variant of XFL for the export.
	 
	 @return kTrue if should use packaged variant of XFL
	 */
	virtual bool16 GetExportAsPackage() const = 0;
};
