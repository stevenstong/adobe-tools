//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/open/components/buttonui/actiondatapanels/gotopos/GoToLastPageDataPanel.cpp $
//  
//  Owner: Michael Burbidge
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2019/10/11 10:48:01 $
//  
//  $Revision: #2 $
//  
//  $Change: 1061132 $
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

// ----- Interface Includes -----

#include "IBehaviorDataPanel.h"
#include "ISession.h"
#include "IControlView.h"

// ----- Implementation Includes -----

#include "BehaviorUIID.h"
#include "FormFieldUIID.h"
#include "BehaviorUIDefs.h"
#include "CPMUnknown.h"
#include "CreateObject.h"
#include "CoreResTypes.h"
#include "DVUtilities.h"
#include "RsrcSpec.h"

//========================================================================================
// CLASS GoToLastPageDataPanel
//========================================================================================

class GoToLastPageDataPanel : public CPMUnknown<IBehaviorDataPanel>
{
public:
	GoToLastPageDataPanel(IPMUnknown *boss);
	virtual ~GoToLastPageDataPanel();

	virtual IPMUnknown* CreatePanel(const PMLocaleId& localeId, const PMIID& iid) const;
};	

//========================================================================================
// METHODS GoToLastPageDataPanel
//========================================================================================

CREATE_PMINTERFACE(GoToLastPageDataPanel, kGoToLastPageDataPanelImpl)

//----------------------------------------------------------------------------------------
// GoToLastPageDataPanel::GoToLastPageDataPanel
//----------------------------------------------------------------------------------------

GoToLastPageDataPanel::GoToLastPageDataPanel(IPMUnknown *boss) :
	CPMUnknown<IBehaviorDataPanel>(boss)
{
}

//----------------------------------------------------------------------------------------
// GoToLastPageDataPanel::~GoToLastPageDataPanel
//----------------------------------------------------------------------------------------

GoToLastPageDataPanel::~GoToLastPageDataPanel()
{
}

//----------------------------------------------------------------------------------------
// GoToLastPageDataPanel::CreatePanel
//----------------------------------------------------------------------------------------

IPMUnknown* GoToLastPageDataPanel::CreatePanel(const PMLocaleId& localeId, const PMIID& iid) const
{
	/* degupta - CreateObject is creating the controlview and also calling the DoPostCreate(), breaking this into 
	 * CreateObjectNoInit() and DoPostCreate() so that theme can be set on the view before DoPostCreate() is called.
	 */
	IPMUnknown *returnVal = ::CreateObjectNoInit (::GetDataBase(GetExecutionContextSession()),
		RsrcSpec(localeId, kFormFieldUIPluginID, kViewRsrcType, kGoToLastPagePanelRsrcID),
		IID_ICONTROLVIEW,
		GetObjectModelInstance());
	ASSERT_MSG(returnVal, "Cannot create the appropriate control view.");
	IControlView* panel = InterfacePtr<IControlView>(returnVal, UseDefaultIID());
	ASSERT_MSG(panel, "Cannot create the appropriate control view.");
	// Set the drover theme on the Panel View and call the DoPostCreate()
	if(panel)
	{
		dv_utils::SetThemeForView(panel, dv_utils::kIDPanelTheme);
		panel->DoPostCreate();
	}
	return panel;
}