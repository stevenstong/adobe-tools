//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/buttonui/appearancepanel/StateEyeDEHandler.cpp $
//  
//  Owner: Tim Wright
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
//  
//  Implementation for a simple layer eye exchange handler
//  
//  Based on LayerEyeDEHandler.cpp in Layer Panel Project
//  
//========================================================================================

#include "VCPlugInHeaders.h"

#include "FormFieldUIID.h"
#include "PMFlavorTypes.h"

#include "CDataExchangeHandlerFor.h"

//========================================================================
// Class StateEyeDEHandler
//========================================================================

class StateEyeDEHandler : public CDataExchangeHandlerFor
{
	public:
		StateEyeDEHandler(IPMUnknown *boss) : CDataExchangeHandlerFor(boss) {}
		virtual	~StateEyeDEHandler() {}

		virtual	PMFlavor 	GetFlavor() const { return kPMStateEyeFlavor; }
};

CREATE_PMINTERFACE(StateEyeDEHandler, kStateEyeDEHandlerImpl)
