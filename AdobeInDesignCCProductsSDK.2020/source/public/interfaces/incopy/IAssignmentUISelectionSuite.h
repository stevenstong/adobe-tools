//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/public/interfaces/incopy/IAssignmentUISelectionSuite.h $
//  
//  Owner: Jon Pugh
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
#ifndef __IASSIGNMENTUISELECTIONSUITE__
#define __IASSIGNMENTUISELECTIONSUITE__

#include "AssignmentUIID.h"

#include "IPMUnknown.h"
#include "ITreeViewController.h"

class IAssignmentUISelectionSuite : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IASSIGNMENTUISELECTIONSUITE };

	/**
		Updates the story list panel to the current user selection.
	*/
	virtual void Update(ITreeViewController* controller) = 0;
};


#endif	// __IASSIGNMENTUISELECTIONSUITE__


