//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/StaticReference.h $
//  
//  Owner: ?
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
#ifndef __ModuleExpose__
#define __ModuleExpose__

class ClassFactory;

#define DECLARE_PMCLASSFACTORY(className)	\
ClassFactory *Get##className##Factory();	

#define DEFINE_PMCLASSFACTORY(className)	\
ClassFactory *Get##className##Factory();	\
ClassFactory *Get##className##Factory()		{	return &kFactory;	}

#define DEFINE_PMCLASSFACTORYS(className, varName)	\
ClassFactory *Get##className##Factory();	\
ClassFactory *Get##className##Factory()		{	return &varName;	}

#define BUILD_PMCLASSFACTORY(className)	\
 Get##className##Factory();

#endif