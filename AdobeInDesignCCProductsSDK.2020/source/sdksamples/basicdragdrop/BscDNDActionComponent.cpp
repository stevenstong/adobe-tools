//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/sdksamples/basicdragdrop/BscDNDActionComponent.cpp $
//  
//  Owner: Adobe Developer Technologies
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

// Interface includes:

// General includes:
#include "CActionComponent.h"
#include "CAlert.h"

// Project includes:
#include "BscDNDID.h"

/** Implements IActionComponent; performs the actions that are executed when the plug-in's
	menu items are selected.

*/
class BscDNDActionComponent : public CActionComponent
{
public:
		/**
		 Constructor.
		 @param boss interface ptr from boss object on which this interface is aggregated.
		 */
		BscDNDActionComponent(IPMUnknown* boss);

		/** The action component should do the requested action. Note this will never be called 
			except when the action is enabled. This method should be overridden by subclasses.

			@param actionID identifies which action this action component should perform
			@param mousePoint contains the global mouse location at time of event causing action (e.g. context menus). kInvalidMousePoint if not relevant.
			@param widget contains the widget that invoked this action. May be nil. 
		*/
		virtual void	DoAction(IActiveContext* ac, ActionID actionID, GSysPoint mousePoint, IPMUnknown* widget);

	private:
		/** Encapsulates functionality for the about menu item. */
		void DoAbout();
};

/* CREATE_PMINTERFACE
 Binds the C++ implementation class onto its
 ImplementationID making the C++ code callable by the
 application.
*/
CREATE_PMINTERFACE(BscDNDActionComponent, kBscDNDActionComponentImpl)

/* BscDNDActionComponent Constructor
*/
BscDNDActionComponent::BscDNDActionComponent(IPMUnknown* boss)
: CActionComponent(boss)
{
}

/* DoAction
*/
void BscDNDActionComponent::DoAction(IActiveContext* ac, ActionID actionID, GSysPoint mousePoint, IPMUnknown* widget)
{
	switch (actionID.Get())
	{

		case kBscDNDAboutActionID:
		{
			this->DoAbout();
			break;
		}
					
		default:
		{
			break;
		}
	}
}

/* DoAbout
*/
void BscDNDActionComponent::DoAbout()
{
	CAlert::ModalAlert
	(
		kBscDNDAboutBoxStringKey,				// Alert string
		kOKString, 						// OK button
		kNullString, 						// No second button
		kNullString, 						// No third button
		1,							// Set OK button to default
		CAlert::eInformationIcon				// Information icon.
	);
}


//  Code generated by DollyXS code generator