//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/LibraryFlavor.h $
//  
//  Owner: Mark VerMurlen
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
#ifndef __LibraryFlavor__
#define __LibraryFlavor__

#include "PMFlavorTypes.h"


// Flavors of data used for external data exchange (clipboard and drag/drop)
#ifdef MACINTOSH
	#define kLibraryFlavor					PMFlavor('pmlb')
	#define kLibraryExternalFlavor			ExternalPMFlavor('pmlb')
	#define kOldLibraryFlavor				PMFlavor('pmla')
#endif
#ifdef WINDOWS
	#define PMCF_LIBASSET					0x1006
	#define kLibraryFlavor					PMFlavor(PMCF_LIBASSET)
	#define kLibraryExternalFlavor			ExternalPMFlavor(PMCF_LIBASSET)
	#define kOldLibraryFlavor				PMFlavor(0x1005)
#endif


#endif // __LibraryFlavor__
