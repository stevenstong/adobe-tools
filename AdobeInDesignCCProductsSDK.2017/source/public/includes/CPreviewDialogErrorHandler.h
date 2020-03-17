//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/CPreviewDialogErrorHandler.h $
//  
//  Owner: GAng Xiao
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
//========================================================================================

#pragma once
#ifndef __CPreviewDialogErrorHandler_h__
#define __CPreviewDialogErrorHandler_h__

#include "IPreviewDialogErrorHandler.h"

#include "CPMUnknown.h"

#ifdef WIDGET_BUILD
#pragma export on
#endif

//========================================================================================
// CLASS CPreviewDialogErrorHandler
//========================================================================================
/** Default implementation of the error handler interface used for dialogs with preview capability.
		Subclasses should derive from CPreviewDialogErrorHandler.
		
		@see IPreviewDialogErrorHandler
*/
class WIDGET_DECL CPreviewDialogErrorHandler : public CPMUnknown<IPreviewDialogErrorHandler>
{
public:
	CPreviewDialogErrorHandler(IPMUnknown *boss);
	virtual ~CPreviewDialogErrorHandler();

	/** Override to report that an error has occurred.
			Default implementation does nothing.
	*/
	virtual void	ReportError(const ErrorCode& error);
	
	/** Override to clean up the dialog after an error has occurred.
			Default implementation cancels and closes the dialog.
	*/
	virtual void	CleanupDialog(IDialog *);
};	

#pragma export off

#endif // __CPreviewDialogErrorHandler_h__
