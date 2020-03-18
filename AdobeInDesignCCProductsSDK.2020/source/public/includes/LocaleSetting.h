//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/public/includes/LocaleSetting.h $
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

#pragma once
#ifndef __LocaleSetting_h__
#define __LocaleSetting_h__

#ifdef MACINTOSH
#include "MLocaleSetting.h"
typedef MLocaleSetting LocaleSetting;
#endif

#ifdef WINDOWS
#include "WLocaleSetting.h"
typedef WLocaleSetting LocaleSetting;
#endif

#ifdef UNIX
#include "ULocaleSetting.h"
typedef ULocaleSetting LocaleSetting;
#endif

#endif //__LocaleSetting_h__
