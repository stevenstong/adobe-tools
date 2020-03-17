//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/CCommandChecker.h $
//  
//  Owner: Richard Rodseth
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
#ifndef __CCOMMANDCHECKER__
#define __CCOMMANDCHECKER__

#include "ICommandChecker.h"
#include "HelperInterface.h"

#pragma export on

class PUBLIC_DECL CCommandChecker : public ICommandChecker
{
public:
		CCommandChecker(IPMUnknown *boss);
		virtual ~CCommandChecker();

		virtual ErrorCode CheckCommand(bool16 saveError); 

		virtual void ClearLastError(bool16 saveError);	
		virtual void SaveLastError();	
		virtual ErrorCode GetLastError();
		virtual void SetError(const ErrorCode& error); 

protected:

		virtual ErrorCode DoCheckCommand(); // Subclasses override this method

protected:
		ErrorCode fLastError;
		ErrorCode fSavedError;
		bool16    fUseSavedError;

DECLARE_HELPER_METHODS()
};

#pragma export off

#endif // CCOMMANDCHECKER