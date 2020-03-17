//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/interactive/IGotoAnchorBehaviorData.h $
//  
//  Owner: Mark VerMurlen
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
#ifndef __IGoToAnchorBehaviorData_h__
#define __IGoToAnchorBehaviorData_h__

#include "IGoToZoomBehaviorData.h"
#include "BehaviorID.h"
#include "PMString.h"

class IDocument;

//========================================================================================
// CLASS IGoToAnchorBehaviorData
//========================================================================================

/** Data interface for Go To Anchor Behavior */
class IGoToAnchorBehaviorData : public IGoToZoomBehaviorData
{
public:
	/** Set the destination file to go to. This is normally an InDesign document name.
		The PDF generated for the action uses this name with a ".pdf" extension for
		the anchor file*/
	virtual void		SetAnchorFile(const PMString& fileName) = 0;

	/** Get the destination file to go to. This is normally an InDesign document name
		The PDF generated for the action uses this name with a ".pdf" extension for
		the anchor file*/
	virtual PMString	GetAnchorFile() const = 0;

	/** Get the name of the destination hyperlink in the InDesign Document specified by GetAnchorFile() */
	virtual PMString	GetAnchorName() const = 0;

	/** Get the PDF Reference String of the destination hyperlink in the InDesign Document specified by GetAnchorFile() */
	virtual PMString	GetAnchorPDFRefStr() const = 0;

	/** Set the UID of the destination hyperlink in the InDesign Document specified by GetAnchorFile() */
	virtual void		SetAnchorUID(const UID& destUID) = 0;

	/** Get the UID of the destination hyperlink in the InDesign Document specified by GetAnchorFile() */
	virtual UID			GetAnchorUID() const = 0;

	/** Checks if the anchor file exists in the behavior directory, if yes, sets the path to the new file on return */
	virtual bool16		IsAnchorFileInBehaviorDir(IDFile& file) const = 0;
};

#endif // __IGoToAnchorBehaviorData_h__
