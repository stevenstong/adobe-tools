//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/sdksamples/common/InDesignVersion.r $
//  
//  Owner: Michael Burbidge
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
//========================================================================================

#ifdef __MWERKS__
	#include "Types.r"
#endif
#include "GeneralBuildFlags.h"
#include "BuildNumber.h"


resource 'vers' (1, "", purgeable, preload)
{
	// shift the minor version number left 4 bits (by multiplying it by 16) so we end up with a 
	// version number like major.minor.0 instead of major.0.minor
	kMajorVersionNumberForResource, kMinorVersionNumberForResource * 16, kDevelopmentStage, 1, verUS, kVersionNumberStr, kVersionCopyRightStr
};
