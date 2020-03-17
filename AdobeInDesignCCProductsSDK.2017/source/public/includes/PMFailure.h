//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/PMFailure.h $
//  
//  Owner: Mat Marcus
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
//  ADOBE CONFIDENTIAL
//  
//========================================================================================

#pragma once
#ifndef __PMFailure__
#define __PMFailure__

#include "ErrorUtils.h"

#pragma exceptions on
namespace PM {
	inline void FailErrorCode(ErrorCode err);
	inline void FailErrorCode();
	template <class T>
	inline void FailNil(T& val);
	
	inline void FailErrorCode(ErrorCode err) { if(kSuccess != err) throw err; }
	inline void FailErrorCode() { FailErrorCode( ErrorUtils::PMGetGlobalErrorCode()); }
	template <class T>
	inline void FailNil(T& val) { if(!val) { ErrorUtils::PMSetGlobalErrorCode(kFailure); FailErrorCode(kFailure);} }

}
#pragma exceptions reset


#endif //__PMFailure__

