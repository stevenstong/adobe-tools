//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/public/interfaces/text/ITextSelectionData.h $
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
#ifndef __ITEXTSELECTIONDATA__
#define __ITEXTSELECTIONDATA__

#include "IPMUnknown.h"
#include "TextEditorID.h"

/** 
	@ingroup text_select
*/
class ITextSelectionData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ITEXTSELECTIONDATA };
	virtual void 			TempSetFrameList(const UIDRef& frameList) = 0; //EditorToFrame only caller
	virtual const UIDRef& 	GetFrameList() const = 0;
};

#endif