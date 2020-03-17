//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/ui/IObjectRefData.h $
//  
//  Owner: Michael Burbidge
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
#ifndef __IObjectRefData_h__
#define __IObjectRefData_h__

#include "IPMUnknown.h"

class PMString;

class IObjectRefData : public IPMUnknown
{
public:
	// ----- Accessors -----

	virtual void			Set(PluginID plugIn,
								const RsrcType& rsrcType, const RsrcID& rsrdId) = 0;

	virtual PluginID	GetPlugInID() const = 0; 
	virtual RsrcType		GetRsrcType() const = 0;
	virtual RsrcID			GetRsrcId() const = 0;
	
	virtual IPMUnknown*		GetObject() = 0;
};

#endif // __IObjectRefData_h__

