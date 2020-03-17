//========================================================================================
//  
//  $File: //depot/devtech/14.0/plugin/source/open/components/layerpanel/LayerPencilDEHandler.cpp $
//  
//  Owner: Paul Sorrick
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2018/09/10 00:46:19 $
//  
//  $Revision: #2 $
//  
//  $Change: 1031899 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//  
//  Implementation for a simple layer pencil exchange handler
//  
//========================================================================================

#include "VCPlugInHeaders.h"

#include "LayerPanelID.h"

#include "CDataExchangeHandlerFor.h"

//========================================================================
// Class LayerPencilDEHandler
//========================================================================

class LayerPencilDEHandler : public CDataExchangeHandlerFor
{
	public:
		LayerPencilDEHandler(IPMUnknown *boss) : CDataExchangeHandlerFor(boss) {}
		virtual	~LayerPencilDEHandler() {}

		virtual	PMFlavor 	GetFlavor() const { return kPMLayerPencilFlavor; }
};

CREATE_PMINTERFACE(LayerPencilDEHandler, kLayerPencilDEHandlerImpl)