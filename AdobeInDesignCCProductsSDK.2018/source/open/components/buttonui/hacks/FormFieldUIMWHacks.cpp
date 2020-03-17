//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/buttonui/hacks/FormFieldUIMWHacks.cpp $
//  
//  Owner: Tim Wright
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
//  Adapted from GroupMWHacks.cpp
//  
//========================================================================================

#include "VCPlugInHeaders.h"

#include "InterfaceFactory.h"

extern bool16 gFalse;

void DontDeadStrip();

void DontDeadStrip()
{
	if (gFalse)	{

#include "FormFieldUIFactoryList.h"
	}
}