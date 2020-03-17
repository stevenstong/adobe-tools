//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/ICallback.h $
//  
//  Owner: Brendan O'Shea
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
//  
//  page item iterator callback interface
//  
//========================================================================================

#pragma once
#ifndef __ICallback__
#define __ICallback__

#include "IPMUnknown.h"
#include "IDrawMgr.h"

class PMMatrix;

class ICallback
{
	public:
		virtual void		ExecuteCallback (const PMMatrix *xform, IPMUnknown *thing, int32 flags) = 0;

/*
	Concrete classes should take a pointer to a DrawMgr object as an argument to the constructor
	and save the pointer as a data member. The GetDrawManager method returns the pointer to clients.
*/
		virtual IDrawMgr*	GetCallbackDrawManager() = 0;
};


#endif // __ICallback__
