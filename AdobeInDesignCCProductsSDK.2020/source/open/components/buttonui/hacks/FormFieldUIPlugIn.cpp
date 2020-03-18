//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/open/components/buttonui/hacks/FormFieldUIPlugIn.cpp $
//  
//  Owner: Tim Wright
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2019/10/11 10:48:01 $
//  
//  $Revision: #2 $
//  
//  $Change: 1061132 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//  
//  Adapted from GroupPlugin.cpp
//  
//========================================================================================

#include "VCPlugInHeaders.h"

#include "PlugIn.h"

static PlugIn gPlugIn;

// This is the main entry point from the application to the plug-in.
// The application calls this function when the plug-in is installed 
// or loaded. This function is called by name, so it must be called 
// GetPlugIn, and defined as C linkage.
IPlugIn *GetPlugIn()
{
	return &gPlugIn;
}

