//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/public/interfaces/architecture/INewWorkspaceSignalData.h $
//  
//  Owner: Roey Horns
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
//  
//  Purpose:	Data send with the newdoc signal
//  
//========================================================================================

#pragma once
#ifndef __INEWWORKSPACESIGNALDATA__
#define __INEWWORKSPACESIGNALDATA__

#include "IPMUnknown.h"
#include "WorkspaceID.h"

class ICommand;

class INewWorkspaceSignalData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_INEWWORKSPACESIGNALDATA };
	
	virtual void Set(ICommand *newWorkspaceCmd, const UIDRef &workspace) = 0;
	
	virtual ICommand *GetNewWorkspaceCmd() = 0;
	virtual const UIDRef &GetWorkspace() const = 0;
};

#endif // __INEWWORKSPACESIGNALDATA__

