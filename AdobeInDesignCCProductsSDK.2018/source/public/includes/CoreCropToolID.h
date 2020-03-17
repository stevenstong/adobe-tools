//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/CoreCropToolID.h $
//  
//  Owner: vineet batra
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
//  
//  ADOBE CONFIDENTIAL
//  
//========================================================================================

#ifndef __CoreCropToolID_h__
#define __CoreCropToolID_h__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"


#define kCropToolPrefix		RezLong(0x19B00)
// PluginID:
DECLARE_PMID(kPlugInIDSpace, kCropToolPluginID, kCropToolPrefix + 0)

DECLARE_PMID(kClassIDSpace, kCropToolBoss,kCropToolPrefix + 4)

#endif //__CoreCropToolID_h__
