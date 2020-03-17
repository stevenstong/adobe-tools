//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/onboarding/OnBoardingID.h $
//  
//  Owner: murastog
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2018/03/06 12:15:34 $
//  
//  $Revision: #17 $
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
//  Defines IDs used by the BscDlg plug-in.
//  
//========================================================================================

#ifndef __OnBoardingID_h__
#define __OnBoardingID_h__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"
#include "FormatNumber.h"

#define kOnBoardingPrefix	 RezLong(0x23000)

// <Start IDC>
// PluginID
#define kOnBoardingPluginName 				"OnBoarding"
DECLARE_PMID(kPlugInIDSpace, kOnBoardingPluginID, kOnBoardingPrefix + 1)

// <Class ID>
DECLARE_PMID(kClassIDSpace, kContextManagerBoss, kOnBoardingPrefix + 1)
DECLARE_PMID(kClassIDSpace, kContextMangerResponderBoss, kOnBoardingPrefix + 2)
DECLARE_PMID(kClassIDSpace, kSetNewDocCountCmdBoss, kOnBoardingPrefix + 3)
DECLARE_PMID(kClassIDSpace, kSetOpenDocCountCmdBoss, kOnBoardingPrefix + 4)
DECLARE_PMID(kClassIDSpace, kStockIAMResponderBoss, kOnBoardingPrefix + 5)
DECLARE_PMID(kClassIDSpace, kSetFootnoteIAMShownCmdBoss, kOnBoardingPrefix + 6)
DECLARE_PMID(kClassIDSpace, kFootnoteIAMObserverBoss, kOnBoardingPrefix + 7)
DECLARE_PMID(kClassIDSpace, kFootNoteIAMResponderBoss, kOnBoardingPrefix + 8)
DECLARE_PMID(kClassIDSpace, kCopyPasteIAMObserverBoss, kOnBoardingPrefix + 9)
DECLARE_PMID(kClassIDSpace, kSetCopyPasteIAMShownCmdBoss, kOnBoardingPrefix + 10)
DECLARE_PMID(kClassIDSpace, kSetEndNoteIAMShownCmdBoss, kOnBoardingPrefix + 11)
DECLARE_PMID(kClassIDSpace, kEndNoteIAMResponderBoss, kOnBoardingPrefix + 12)
DECLARE_PMID(kClassIDSpace, kSetParaBorderIAMShownCmdBoss, kOnBoardingPrefix + 13)
DECLARE_PMID(kClassIDSpace, kParaBorderIAMObserverBoss, kOnBoardingPrefix + 14)
DECLARE_PMID(kClassIDSpace, kParaBorderIAMResponderBoss, kOnBoardingPrefix + 15)
DECLARE_PMID(kClassIDSpace, kDudenIAMResponderBoss, kOnBoardingPrefix + 16)
DECLARE_PMID(kClassIDSpace, kSetDudenIAMShownCmdBoss, kOnBoardingPrefix + 17)
DECLARE_PMID(kClassIDSpace, kSetParaBorderIAMforIconShownCmdBoss, kOnBoardingPrefix + 18)
DECLARE_PMID(kClassIDSpace, kSetConsistentShortcutsIAMShownCmdBoss, kOnBoardingPrefix + 19)
DECLARE_PMID(kClassIDSpace, kConsistentShortcutsIAMResponderBoss, kOnBoardingPrefix + 20)
DECLARE_PMID(kClassIDSpace, kOnBoardingObserverBoss, kOnBoardingPrefix + 21)

// <Implementation ID>
DECLARE_PMID(kImplementationIDSpace, kOnBoardingManagerImpl, kOnBoardingPrefix + 1)
DECLARE_PMID(kImplementationIDSpace, kContextManagerStartupShutdownImpl, kOnBoardingPrefix + 2)
DECLARE_PMID(kImplementationIDSpace, kContextManagerObserverImpl, kOnBoardingPrefix + 3)
DECLARE_PMID(kImplementationIDSpace, kContextManagerSignalRespServiceImpl, kOnBoardingPrefix + 4)
DECLARE_PMID(kImplementationIDSpace, kContextManagerResponderImpl, kOnBoardingPrefix + 5)
DECLARE_PMID(kImplementationIDSpace, kNewDocCountIntDataImpl, kOnBoardingPrefix + 6)
DECLARE_PMID(kImplementationIDSpace, kNewDocCountCmdImpl, kOnBoardingPrefix + 7)
DECLARE_PMID(kImplementationIDSpace, kOnBoardingExtensionEventsWrapperImpl, kOnBoardingPrefix + 12)

DECLARE_PMID(kImplementationIDSpace, kActiveIAMUniqueIDDataImpl, kOnBoardingPrefix + 19)
DECLARE_PMID(kImplementationIDSpace, kCopyPasteIAMObserverImpl, kOnBoardingPrefix + 20)
DECLARE_PMID(kImplementationIDSpace, kCopyPasteIAMStartupShutdownImpl, kOnBoardingPrefix + 21)
DECLARE_PMID(kImplementationIDSpace, kCopyPasteIAMShownCmdImpl, kOnBoardingPrefix + 22)
DECLARE_PMID(kImplementationIDSpace, kCopyPasteIAMShownBoolDataImpl, kOnBoardingPrefix + 23)
DECLARE_PMID(kImplementationIDSpace, kEndNoteIAMShownBoolDataImpl, kOnBoardingPrefix + 24)
DECLARE_PMID(kImplementationIDSpace, kEndNoteIAMShownCmdImpl, kOnBoardingPrefix + 25)
DECLARE_PMID(kImplementationIDSpace, kEndNoteIAMObserverImpl, kOnBoardingPrefix + 26)
DECLARE_PMID(kImplementationIDSpace, kEndNoteIAMResponderImpl, kOnBoardingPrefix + 27)
DECLARE_PMID(kImplementationIDSpace, kEndNoteIAMSignalRespServiceImpl, kOnBoardingPrefix + 28)
DECLARE_PMID(kImplementationIDSpace, kEndnoteIAMCountIntDataImpl, kOnBoardingPrefix + 29)
DECLARE_PMID(kImplementationIDSpace, kEndnoteIAMUtilsImpl, kOnBoardingPrefix + 31)
DECLARE_PMID(kImplementationIDSpace, kIsFinalIAMImpl, kOnBoardingPrefix + 32)
DECLARE_PMID(kImplementationIDSpace, kIsEventFromPageOrSpreadCreateImpl, kOnBoardingPrefix + 33)
DECLARE_PMID(kImplementationIDSpace, kParaBorderIAMShownBoolDataImpl, kOnBoardingPrefix + 34)
DECLARE_PMID(kImplementationIDSpace, kParaBorderIAMShownCmdImpl, kOnBoardingPrefix + 35)
DECLARE_PMID(kImplementationIDSpace, kParaBorderIAMObserverImpl, kOnBoardingPrefix + 36)
DECLARE_PMID(kImplementationIDSpace, kParaBorderIAMStartupShutdownImpl, kOnBoardingPrefix + 37)
DECLARE_PMID(kImplementationIDSpace, kParaBorderIAMResponderImpl, kOnBoardingPrefix + 38)
DECLARE_PMID(kImplementationIDSpace, kParaBorderIAMSignalRespServiceImpl, kOnBoardingPrefix + 39)
DECLARE_PMID(kImplementationIDSpace, kDisableEndnoteIAMForDataMergeImpl, kOnBoardingPrefix + 40)
DECLARE_PMID(kImplementationIDSpace, kDudenIAMSignalRespServiceImpl, kOnBoardingPrefix + 41)
DECLARE_PMID(kImplementationIDSpace, kDudenIAMResponderImpl, kOnBoardingPrefix + 42)
DECLARE_PMID(kImplementationIDSpace, kDudenIAMShownBoolDataImpl, kOnBoardingPrefix + 43)
DECLARE_PMID(kImplementationIDSpace, kDudenIAMShownCmdImpl, kOnBoardingPrefix + 44)
DECLARE_PMID(kImplementationIDSpace, kParaBorderIAMforIconShownBoolDataImpl, kOnBoardingPrefix + 45)
DECLARE_PMID(kImplementationIDSpace, kParaBorderIAMforIconShownCmdImpl, kOnBoardingPrefix + 46)

DECLARE_PMID(kImplementationIDSpace, kConsistentShortcutsIAMResponderImpl, kOnBoardingPrefix + 47)
DECLARE_PMID(kImplementationIDSpace, kConsistentShortcutsIAMSignalRespServiceImpl, kOnBoardingPrefix + 48)
DECLARE_PMID(kImplementationIDSpace, kConsistentShortcutsIAMShownBoolDataImpl, kOnBoardingPrefix + 49)
DECLARE_PMID(kImplementationIDSpace, kConsistentShortcutsIAMShownCmdImpl, kOnBoardingPrefix + 50)
DECLARE_PMID(kImplementationIDSpace, kConsistentShortcutsIAMObserverImpl, kOnBoardingPrefix + 51)
DECLARE_PMID(kImplementationIDSpace, kConsistentShortcutsIAMUtilsImpl, kOnBoardingPrefix + 52)
DECLARE_PMID(kImplementationIDSpace, kOnBoardingStartupShutdownImpl, kOnBoardingPrefix + 53)
DECLARE_PMID(kImplementationIDSpace, kOnBoardingObserverImpl, kOnBoardingPrefix + 54)

//<Interface ID>

DECLARE_PMID(kInterfaceIDSpace, IID_IONBOARDINGMANAGER, kOnBoardingPrefix + 1)
DECLARE_PMID(kInterfaceIDSpace, IID_INEWDOCCMDCOUNT, kOnBoardingPrefix + 2)
DECLARE_PMID(kInterfaceIDSpace, IID_IDOCOPENCMDCOUNT, kOnBoardingPrefix + 3)
DECLARE_PMID(kInterfaceIDSpace, IID_IONBOARDINGEXTENSIONEVENTWRAPPER, kOnBoardingPrefix + 4)
//DECLARE_PMID(kInterfaceIDSpace, IID_ICONTEXTMANAGEROBSERVER, kOnBoardingPrefix + 5)
DECLARE_PMID(kInterfaceIDSpace, IID_IFOOTNOTEIAMSHOWN, kOnBoardingPrefix + 6)
DECLARE_PMID(kInterfaceIDSpace, IID_IACTIVEIAM, kOnBoardingPrefix + 7)
DECLARE_PMID(kInterfaceIDSpace, IID_ICOPYPASTEIAMOBSERVER, kOnBoardingPrefix + 8)
DECLARE_PMID(kInterfaceIDSpace, IID_ICOPYPASTEIAMSHOWN, kOnBoardingPrefix + 9)
DECLARE_PMID(kInterfaceIDSpace, IID_IENDNOTEIAMSHOWN, kOnBoardingPrefix + 10)
DECLARE_PMID(kInterfaceIDSpace, IID_IENDNOTEIAMCOUNT, kOnBoardingPrefix + 11)
DECLARE_PMID(kInterfaceIDSpace, IID_IENDNOTEIAMUTILS, kOnBoardingPrefix + 12)
DECLARE_PMID(kInterfaceIDSpace, IID_IENDNOTEIAMOBSERVER, kOnBoardingPrefix + 13)
DECLARE_PMID(kInterfaceIDSpace, IID_IFINALIAM, kOnBoardingPrefix + 14)
DECLARE_PMID(kInterfaceIDSpace, IID_IEVENTFROMPAGEORSPREADCREATE, kOnBoardingPrefix + 15)
DECLARE_PMID(kInterfaceIDSpace, IID_IPARABORDERIAMSHOWN, kOnBoardingPrefix + 16)
DECLARE_PMID(kInterfaceIDSpace, IID_IDISABLEENDNOTEIAMFORDATAMERGE, kOnBoardingPrefix + 17)
DECLARE_PMID(kInterfaceIDSpace, IID_IDUDENIAMSHOWN, kOnBoardingPrefix + 18)
DECLARE_PMID(kInterfaceIDSpace, IID_IPARABORDERIAMFORICONSHOWN, kOnBoardingPrefix + 19)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONSISTENTSHORTCUTSIAMOBSERVER, kOnBoardingPrefix + 20)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONSISTENTSHORTCUTSIAMSHOWN, kOnBoardingPrefix + 21)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONSISTENTSHORTCUTSIAMUTILS, kOnBoardingPrefix + 22)
DECLARE_PMID(kInterfaceIDSpace, IID_IONBOARDINGOBSERVER, kOnBoardingPrefix + 23)
DECLARE_PMID(kInterfaceIDSpace, IID_IFILENEWCOMPLETENOTIFIER, kOnBoardingPrefix + 24)
DECLARE_PMID(kInterfaceIDSpace, IID_ILEARNPANELCLOSENOTIFIER, kOnBoardingPrefix + 25)

// <Error ID>
// Error Codes
DECLARE_PMID(kErrorIDSpace, kBadParamterError, kOnBoardingPrefix + 1)


// <Widget ID>
// Character attribute widgets <1-50>

// <Message ID>
// <Message ID> 
DECLARE_PMID(kMessageIDSpace, kFileNewComplete, kOnBoardingPrefix + 1)
DECLARE_PMID(kMessageIDSpace, kLearnPanelClose, kOnBoardingPrefix + 2)  
//DECLARE_PMID(kMessageIDSpace, kItemPickedMessage, kContentDropperPrefix + 1)

// <Service ID>
// Service IDs
//DECLARE_PMID(kServiceIDSpace, kContentDropperPrefsPanelServiceImpl, kContentDropperPrefix + 1)

// <Action ID>
// Action IDs
//DECLARE_PMID(kActionIDSpace, kContentDropperToolActionID, kContentDropperPrefix + 1)

//<Icon IDs>


// Initial data format version numbers
//#define kOnBoardingFirstMajorFormatNumber  RezLong(1)
//#define kOnBoardingFirstMinorFormatNumber  RezLong(0)

// Data format version numbers for the PluginVersion resource 
#define kOnBoardingLastMajorFormatNumber kR10MajorFormatNumber
#define kOnBoardingLastMinorFormatNumber kR10InitialMinorFormatNumber

#endif
