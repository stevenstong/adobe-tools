//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/buttonui/hacks/FormFieldUIPlugin.h $
//  
//  Owner: Tim Wright
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
//  
//  Adapted from GroupPlugin.h
//  
//========================================================================================

#pragma once
#ifndef __FORMFIELDUIPLUGIN__
#define __FORMFIELDUIPLUGIN__

#include "PlugIn.h"

class FormFieldUIPlugin : public PlugIn {
public:
	virtual bool16 Load(ISession* theSession);
};


#endif
