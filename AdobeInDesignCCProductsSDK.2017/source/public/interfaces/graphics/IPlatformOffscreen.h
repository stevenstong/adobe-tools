//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/IPlatformOffscreen.h $
//  
//  Owner: Jack Kirstein
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
//  Core interface around Platform offscreen drawing environments
//  
//========================================================================================

#pragma once
#ifndef __IPlatformOffscreen__
#define __IPlatformOffscreen__

#include "IDVPlatformOffscreen.h"

/** IPlatformOffscreen is a wrapper around a Windows bitmap or Macintosh CGBitmapContext.
	
	@see IOffscreenViewPortCache, IOffscreenPortData
*/

typedef IDVPlatformOffscreen IPlatformOffscreen;

#endif
