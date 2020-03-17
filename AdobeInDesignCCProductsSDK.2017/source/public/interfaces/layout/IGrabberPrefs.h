//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IGrabberPrefs.h $
//  
//  Owner: Paul Sorrick
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
//  Description:
//  Interface that provides setting for Grabber Tool Prefs (IID_IGRABBERPREFS).
//  There are currently three values: kFullDrawPanning, kQuickDrawPanning, and kNoDrawPanning
//  
//========================================================================================

#pragma once
#ifndef __IGrabberPrefs__
#define __IGrabberPrefs__

#include "IPMUnknown.h"

/**
	An interface used for tool preferences for the grabber hand tool stored on the kWorkspaceBoss 
	(IID_IGRABBERPREFS as a kPersistIntDataImpl).
	This interface is also used for the kSetGrabberPrefsCmdBoss as a command data interface.
*/

class IGrabberPrefs : public IPMUnknown
{
public:	
	/**
		Legitimate grabber tool preferences values. The value for grabber tool preferences
		is stored as a IntData value on the session workspace (kWorkspaceBoss) as IID_IGRABBERPREFS.
	*/
	enum PanningType {
		kFullDrawPanning = -1, 
		kFastDrawPanning, 
		kNoDrawPanning 
	};
};

#endif
