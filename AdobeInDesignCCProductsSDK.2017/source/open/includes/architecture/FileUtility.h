//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/includes/architecture/FileUtility.h $
//  
//  Owner: Robin_Briggs
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
//========================================================================================

#pragma once
#ifndef __FILEUTILITY__
#define __FILEUTILITY__

#ifdef MACINTOSH
#include "MFileUtility.h"
typedef MFileUtility FileUtility;
#endif

#ifdef WINDOWS
#include "WFileUtility.h"
typedef WFileUtility FileUtility;
#endif

#ifdef UNIX
#include "UFileUtility.h"
typedef UFileUtility FileUtility;
#endif

#endif 

