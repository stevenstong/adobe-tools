//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/IGIFImageWriteOptions.h $
//  
//  Owner: Lori Slater
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
#ifndef __IGIFImageWriteOptions__
#define __IGIFImageWriteOptions__

#include "IPMUnknown.h"

/**
 Simple data interface for storing options related to GIF export.
 
 @see kGIFImageWriteFormatBoss
 */
class IGIFImageWriteOptions : public IPMUnknown
{
	public:
		/**
		 Sets the interlaced option for GIF export.
		 
		 @param interlaced		IN kTrue if GIF should be exported as interlaced, else kFalse
		 */
		virtual void SetInterlaced(bool16 interlaced) = 0;

		/**
		 @return kTrue if GIF should be exported as interlaced, else kFalse
		 */
		virtual bool16 GetInterlaced() const = 0;
};


#endif

