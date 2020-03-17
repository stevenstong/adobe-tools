//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/libs/widgetbin/dialogs/CPreviewDialogErrorHandler.cpp $
//  
//  $Owner: Michael Burbidge $
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

#include "VCWidgetHeaders.h"

#include "CPreviewDialogErrorHandler.h"

// ----- Interface Includes -----

#include "IDialog.h"
#include "IWidgetParent.h"

// ----- Implementation Includes -----

//========================================================================================
// METHODS CPreviewDialogErrorHandler
//========================================================================================

// in .../source/components/WidgetBin/WidgetBinImpl.cpp
//CREATE_PMINTERFACE(CPreviewDialogErrorHandler, kCPreviewDialogErrorHandlerImpl)

//----------------------------------------------------------------------------------------
// CPreviewDialogErrorHandler::CPreviewDialogErrorHandler
//----------------------------------------------------------------------------------------

CPreviewDialogErrorHandler::CPreviewDialogErrorHandler(IPMUnknown *boss) :
	CPMUnknown<IPreviewDialogErrorHandler>(boss)
{
}

//----------------------------------------------------------------------------------------
// CPreviewDialogErrorHandler::~CPreviewDialogErrorHandler
//----------------------------------------------------------------------------------------

CPreviewDialogErrorHandler::~CPreviewDialogErrorHandler()
{
}

//----------------------------------------------------------------------------------------
// CPreviewDialogErrorHandler::ReportError
//----------------------------------------------------------------------------------------

void CPreviewDialogErrorHandler::ReportError(const ErrorCode& error)
{
}

//----------------------------------------------------------------------------------------
// CPreviewDialogErrorHandler::CleanupDialog
//----------------------------------------------------------------------------------------

void CPreviewDialogErrorHandler::CleanupDialog(IDialog * iDialog)
{
	ASSERT(iDialog != nil);
	iDialog->DialogCancelled();
	iDialog->Close();
}
