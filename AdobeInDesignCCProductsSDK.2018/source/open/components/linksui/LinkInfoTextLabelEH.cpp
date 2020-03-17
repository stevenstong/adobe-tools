//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/linksui/LinkInfoTextLabelEH.cpp $
//  
//  Owner: lance bushore
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

#include "VCPlugInHeaders.h"

//includes
#include "DVControlEventHandler.h"
#include "LinksUIID.h"
#include "ILinksUIUtils.h"
#include "Utils.h"

class  LinkInfoTextLabelEH : public DVControlEventHandler
{
	typedef DVControlEventHandler inherited;
public:

	LinkInfoTextLabelEH(IPMUnknown* boss) : inherited(boss)
		{}
	virtual ~LinkInfoTextLabelEH()
		{}
	
	virtual bool16 ButtonDblClk( IEvent* e );
};


CREATE_PMINTERFACE(LinkInfoTextLabelEH, kLinkInfoTextLabelEHImpl)


bool16 LinkInfoTextLabelEH::ButtonDblClk( IEvent* e )
{
#pragma unused(e)
	Utils<ILinksUIUtils>()-> ToggleLinkInfoSectionVisibility(true,true);
	return true;
}

