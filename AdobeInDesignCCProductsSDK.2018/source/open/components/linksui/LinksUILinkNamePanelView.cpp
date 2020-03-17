//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/linksui/LinksUILinkNamePanelView.cpp $
//  
//  Owner: Deepak Gupta
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

#include "DVPanelView.h"
#include "LinksUIID.h"

class LinksUILinkNamePanelView : public DVPanelView
{
	typedef DVPanelView inherited;
public:
	LinksUILinkNamePanelView(IPMUnknown* boss);
	virtual ~LinksUILinkNamePanelView();
};

CREATE_PERSIST_PMINTERFACE(LinksUILinkNamePanelView, kLinksUILinkNamePanelViewImpl)


LinksUILinkNamePanelView::LinksUILinkNamePanelView(IPMUnknown *boss) :
	inherited(boss)
{
	SetClipToSelfEnabled(kTrue);
}

LinksUILinkNamePanelView::~LinksUILinkNamePanelView() 
{ 
}
