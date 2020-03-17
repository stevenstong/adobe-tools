//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/spellpanel/SpellPrefsPanelCreator.cpp $
//  
//  Owner: Heath Horton
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
//  Proj:	SpellingPanel
//  
//========================================================================================

#include "VCPlugInHeaders.h"

#include "IControlView.h"

#include "CmdUtils.h"
#include "CoreResTypes.h"
#include "cpanelcreator.h"

#include "SpellPanelID.h"

class SpellPrefsPanelCreator : public CPanelCreator
{
public:
	// ----- Initialization -----
	
						SpellPrefsPanelCreator(IPMUnknown *boss);
	virtual				~SpellPrefsPanelCreator();
	
	// ----- Dialog protocol -----

	virtual	RsrcID		GetPanelRsrcID() const;
};


CREATE_PMINTERFACE(SpellPrefsPanelCreator, kSpellPrefsPanelCreatorImpl)

SpellPrefsPanelCreator::SpellPrefsPanelCreator(IPMUnknown *boss) :
	CPanelCreator(boss)
{
}

SpellPrefsPanelCreator::~SpellPrefsPanelCreator()
{
}

RsrcID SpellPrefsPanelCreator::GetPanelRsrcID() const
{
	return kSpellPrefsDialogCreatorRsrcID;
}

