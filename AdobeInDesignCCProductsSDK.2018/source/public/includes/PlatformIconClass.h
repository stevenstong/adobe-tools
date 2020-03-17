//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/PlatformIconClass.h $
//  
//  Owner: lance bushore
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
//  An icon class that draws itself without a widget
//  
//  This is a class that will draw an icon family with the specified resource id. 
//  
//========================================================================================

#pragma once
#ifndef __PlatformIconClass__
#define __PlatformIconClass__

#ifdef WIDGET_BUILD
#pragma export on
#endif

#include "PNGIcon.h"

typedef PNGIcon PlatformIconClass; //No longer supports platform-resources

#pragma export off

#endif // __PlatformIconClass__




