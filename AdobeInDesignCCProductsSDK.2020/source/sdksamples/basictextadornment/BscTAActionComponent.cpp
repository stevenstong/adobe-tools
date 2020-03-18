//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/sdksamples/basictextadornment/BscTAActionComponent.cpp $
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
#include "IActiveContext.h"
#include "ITextAttributeSuite.h"
#include "ISelectionManager.h"

// General includes:
#include "CActionComponent.h"
#include "CAlert.h"
#include "Utils.h"

// Project includes:
#include "BscTAID.h"

/** Implements the actions that are executed when the plug-in's
	menu items are selected. These actions allows this plug-in's
	custom text attribute, kBscTAAttrBoss, to be applied or removed
	from text. This attribute controls the adornment, BscTAAdornment. 

	The implemention uses the API's ITextAttributeSuite interface
	to manipulate the text attribute. 

	@ingroup basictextadornment
	
*/
class BscTAActionComponent : public CActionComponent
{
	public:
		/** Constructor.
			@param boss interface ptr from boss object on which this interface is aggregated.
		*/
		BscTAActionComponent(IPMUnknown* boss)
			: CActionComponent(boss)
			{}

		/** The action component should do the requested action.
			This is where the menu item's action is taken.
			When a menu item is selected, the Menu Manager determines
			which plug-in is responsible for it, and calls its DoAction
			with the ID for the menu item chosen.

				@see CActionComponent::DoAction
			*/
		virtual void DoAction(IActiveContext* ac, ActionID actionID, GSysPoint mousePoint = kInvalidMousePoint, IPMUnknown* widget = nil);

	private:
		/** Encapsulates functionality for the about menu item. 
		*/
		void DoAbout();
		
		/** Encapsulates functionality for setting the text attribute. 
			Uses ITextAttributeSuite, so there must be a current
			text selection for this to work.  
			
			@param ac IN The active context.
			@param value IN The boolean value of the attribute.  
				kTrue turns it on, kFalse turns it off.
		*/
        ErrorCode DoSetBooleanAttribute(IActiveContext* ac, bool16 value);

};

/* CREATE_PMINTERFACE
 Binds the C++ implementation class onto its
 ImplementationID making the C++ code callable by the
 application.
*/
CREATE_PMINTERFACE(BscTAActionComponent, kBscTAActionComponentImpl)


/* DoAction
*/
void BscTAActionComponent::DoAction(IActiveContext* ac, ActionID actionID, GSysPoint mousePoint, IPMUnknown* widget)
{
	switch (actionID.Get())
	{
		case kBscTAAboutActionID:
		{
			this->DoAbout();
			break;
		}

		case kBscTAAddTextAdornmentActionID:
		{
			// set the text attribute ON
			if (this->DoSetBooleanAttribute(ac, kTrue) != kSuccess) {
				ASSERT_FAIL("BscTAActionComponent::DoSetBooleanAttribute(kTrue) failed! Do you have a text selection?");
			}
			break;
		}

		case kBscTARemoveTextAdornmentActionID:
		{
			// set the text attribute OFF
			if (this->DoSetBooleanAttribute(ac, kFalse) != kSuccess) {
				ASSERT_FAIL("BscTAActionComponent::DoSetBooleanAttribute(kFalse) failed! Do you have a text selection?");
			}
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
void BscTAActionComponent::DoAbout()
{
	CAlert::ModalAlert
	(
	   kBscTAAboutBoxStringKey,						// Alert string
	   kOKString, 							// OK button
	   kNullString, 						// No second button
	   kNullString, 						// No third button
	   1,									// Set OK button to default
	   CAlert::eInformationIcon				// Information icon.
	);
}


/* DoSetBooleanAttribute
*/
ErrorCode BscTAActionComponent::DoSetBooleanAttribute(IActiveContext* ac, bool16 value)
{
	ErrorCode status = kFailure;
	do {
		// this is the attribute we want to set/unset
		ClassID attrClassID(kBscTAAttrBoss);

		if (ac == nil) {
			ASSERT(ac);
			break;
		}
		// get the ITextAttributeSuite on the current text selection, if available.
		InterfacePtr<ITextAttributeSuite> textAttributeSuite(ac->GetContextSelection(), UseDefaultIID());
		if (textAttributeSuite == nil) {
			break;
		}
		// Change the given text attribute's value, using the text attribute suite.
		if (textAttributeSuite->CanApplyAttributes()) {
			status = textAttributeSuite->SetBooleanAttribute(attrClassID, value);
		}
	} while (false);

	return status; 
}

//  Generated by Dolly build 17: template "IfPanelMenu".
// End, BscTAActionComponent.cpp.

