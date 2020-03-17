//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/hidpi/HiDPINoStrip.cpp $
//  
//  Owner: Neelabh Sunny
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

#include "VCPlugInHeaders.h"
#include "InterfaceFactory.h"

extern bool16 gFalse;

/** DontDeadStrip references all implementations to stop the compiler dead stripping them from the executable image. */
void DontDeadStrip();

void DontDeadStrip()
{
	if (gFalse)
	{
#include "HiDPIFactoryList.h"		
	}
}