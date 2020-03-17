//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IDocMiniSavePrefs.h $
//  
//  Owner: Roey Horns
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
#ifndef __IDocMiniSavePrefs__
#define __IDocMiniSavePrefs__

class IDocMiniSavePrefs : public IPMUnknown
{
public:	
	// Default mini save interval
	virtual void 		SetInterval(uint32 msecs) = 0;
	virtual uint32 	GetInterval(void) const = 0;
};

#endif // __IDocMiniSavePrefs__
