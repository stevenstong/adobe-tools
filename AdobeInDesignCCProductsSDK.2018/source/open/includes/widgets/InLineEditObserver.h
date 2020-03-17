//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/includes/widgets/InLineEditObserver.h $
//  
//  Owner: Tom Taylor
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2018/03/06 12:15:34 $
//  
//  $Revision: #11 $
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
#ifndef __InLineEditObserver__
#define __InLineEditObserver__

#include "CObserver.h"

#ifdef WIDGET_BUILD
#pragma export on
#endif

class WIDGET_DECL InLineEditObserver : public CObserver
{
    typedef CObserver inherited;
public:
	// ----- Constructor/destructor
	
	InLineEditObserver(IPMUnknown *boss);
	~InLineEditObserver();
    
    virtual void AutoAttach();
    virtual void AutoDetach();
	
	void Update(const ClassID& theChange, ISubject* theSubject, const PMIID& protocol, void* changedBy);
};

#pragma export off

#endif

