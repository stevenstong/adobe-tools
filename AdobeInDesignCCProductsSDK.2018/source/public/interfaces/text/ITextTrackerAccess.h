//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/ITextTrackerAccess.h $
//  
//  Owner: Paul Sorrick
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
#ifndef __TEXTTRACKERACCESS__
#define __TEXTTRACKERACCESS__

#include "TextID.h"

class ITextFocus;


class ITextTrackerAccess : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITEXTTRACKERACCESS };

	public:

		/**	Returns the ITextFocus from the Text CSB (ITextTarget) for use by text trackers.
			@return ITextFocus* 
		 */
		virtual ITextFocus* QueryTextFocus() const = 0;
		
};

#endif	//__TEXTTRACKERACCESS__
