//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/PublicVersion.h $
//  
//  Owner: lance bushore
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
#ifndef __PublicVersion__
#define __PublicVersion__

#pragma export on

PUBLIC_DECL int32 GetPublicLibMajorVersion();
PUBLIC_DECL int32 GetPublicLibMinorVersion();
PUBLIC_DECL int32 GetPublicLibDotVersion();

#pragma export off

#endif
