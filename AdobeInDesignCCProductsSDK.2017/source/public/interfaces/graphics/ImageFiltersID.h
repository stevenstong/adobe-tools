//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/ImageFiltersID.h $
//  
//  Owner: Dave Stephens
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2017/03/10 00:54:55 $
//  
//  $Revision: #8 $
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
//  
//  Contains IDs used by the TIFF format filter
//  
//========================================================================================

#ifndef __ImageFiltersID__
#define __ImageFiltersID__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"
#include "FormatNumber.h"

#define kImageFiltersPrefix	RezLong(0x2a00)

// PluginID
#define kImageFiltersPluginName 			"Image Filters"
DECLARE_PMID(kPlugInIDSpace, kImageFiltersPluginID, kImageFiltersPrefix + 1)


#endif // __ImageFiltersID__




