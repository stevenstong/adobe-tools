//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/ResourceEnabler.h $
//  
//  Owner: Dave Burnard
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
#ifndef __RESOURCEENABLER__
#define __RESOURCEENABLER__

/** @name ResourceEnabler

		ResourceEnabler is a #define to the platform appropriate version MResourceAccess or WResourceAccess.

		@see MResourceAccess, WResourceAccess
*/
#ifdef MACINTOSH
	#include "MResourceAccess.h"
	#define ResourceEnabler MResourceAccess
#else
	#include "WResourceAccess.h"
	#define ResourceEnabler WResourceAccess
#endif

#endif
