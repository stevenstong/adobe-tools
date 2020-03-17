//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/ITextSelectionTrackerData.h $
//  
//  Owner: Michael Burbidge
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
#ifndef __ITEXTSELECTIONTRACKERDATA__
#define __ITEXTSELECTIONTRACKERDATA__

#include "IPMUnknown.h"
#include "TextID.h"
#include "ParcelKey.h"

//========================================================================================
// Forward declarations
//========================================================================================

class ITextStoryThread;

//========================================================================================
// CLASS ITextSelectionTrackerData
//========================================================================================

/** 
	@ingroup text_select
*/
class ITextSelectionTrackerData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ITEXTSELECTIONTRACKERDATA };

//BaseWritingEventHandler.cpp
//EyeDropperSuiteText.cpp--sets "allow transitioning" bool to false
//IBeamTracker.cpp
//TOPHorzToolTracker.cpp
//TextCellTrackerFactory.cpp--sets "allow transitioning" bool to true
	virtual void 			SetTrackerData( ITextStoryThread* text, ParcelKey parcelKey) = 0;

// CTextSelectTracker.cpp
	virtual ITextStoryThread* GetTextStoryThread() const = 0;
	virtual ParcelKey		GetParcelKey() const = 0;
	
};

#endif
