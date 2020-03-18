//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/public/interfaces/ui/IEncodingConverter.h $
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
#ifndef __IEncodingConverter_h__
#define __IEncodingConverter_h__

#include "IPMUnknown.h"

class IEncodingConverter : public IPMUnknown
{
public:
	virtual void	Convert(void* fromBuffer, const int32& length, void* toBuffer) = 0;
};

#endif
