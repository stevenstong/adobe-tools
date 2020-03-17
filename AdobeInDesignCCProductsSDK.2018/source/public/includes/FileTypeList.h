//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/FileTypeList.h $
//  
//  Owner: jargast
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
#ifndef __FileTypeList__
#define __FileTypeList__

#include "PMTypes.h"
#include "K2Vector.h"
#include "K2Vector.h"

class PMString;

typedef K2Vector<PMString> ExtensionList;
typedef K2Vector<OSType> OSTypeList;

#endif // __FileTypeList__
