//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/onboarding/OnBoardingID.h $
//  
//  Owner: murastog
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2017/03/10 00:54:55 $
//  
//  $Revision: #5 $
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

// <Implementation ID>
DECLARE_PMID(kImplementationIDSpace, kOnBoardingManagerImpl, kOnBoardingPrefix + 1)
DECLARE_PMID(kImplementationIDSpace, kContextManagerStartupShutdownImpl, kOnBoardingPrefix + 2)
DECLARE_PMID(kImplementationIDSpace, kContextManagerObserverImpl, kOnBoardingPrefix + 3)
DECLARE_PMID(kImplementationIDSpace, kContextManagerSignalRespServiceImpl, kOnBoardingPrefix + 4)
DECLARE_PMID(kImplementationIDSpace, kContextManagerResponderImpl, kOnBoardingPrefix + 5)
DECLARE_PMID(kImplementationIDSpace, kNewDocCountIntDataImpl, kOnBoardingPrefix + 6)
DECLARE_PMID(kImplementationIDSpace, kDocOpenCountIntDataImpl, kOnBoardingPrefix + 7)
DECLARE_PMID(kImplementationIDSpace, kNewDocCountCmdImpl, kOnBoardingPrefix + 8)
DECLARE_PMID(kImplementationIDSpace, kOpenDocCountCmdImpl, kOnBoardingPrefix + 9)
DECLARE_PMID(kImplementationIDSpace, kStockIAMSignalRespServiceImpl, kOnBoardingPrefix + 10)
DECLARE_PMID(kImplementationIDSpace, kStockIAMResponderImpl, kOnBoardingPrefix + 11)
DECLARE_PMID(kImplementationIDSpace, kOnBoardingExtensionEventsWrapperImpl, kOnBoardingPrefix + 12)
DECLARE_PMID(kImplementationIDSpace, kFootnoteIAMShownBoolDataImpl, kOnBoardingPrefix + 13)
DECLARE_PMID(kImplementationIDSpace, kFootnoteIAMShownCmdImpl, kOnBoardingPrefix + 14)
DECLARE_PMID(kImplementationIDSpace, kFootNoteIAMObserverImpl, kOnBoardingPrefix + 15)
DECLARE_PMID(kImplementationIDSpace, kFootNoteIAMStartupShutdownImpl, kOnBoardingPrefix + 16)
DECLARE_PMID(kImplementationIDSpace, kFootNoteIAMResponderImpl, kOnBoardingPrefix + 17)
DECLARE_PMID(kImplementationIDSpace, kFootNoteIAMSignalRespServiceImpl, kOnBoardingPrefix + 18)
DECLARE_PMID(kImplementationIDSpace, kActiveIAMUniqueIDDataImpl, kOnBoardingPrefix + 19)
//<Interface ID>

DECLARE_PMID(kInterfaceIDSpace, IID_IONBOARDINGMANAGER, kOnBoardingPrefix + 1)
DECLARE_PMID(kInterfaceIDSpace, IID_INEWDOCCMDCOUNT, kOnBoardingPrefix + 2)
DECLARE_PMID(kInterfaceIDSpace, IID_IDOCOPENCMDCOUNT, kOnBoardingPrefix + 3)
DECLARE_PMID(kInterfaceIDSpace, IID_IONBOARDINGEXTENSIONEVENTWRAPPER, kOnBoardingPrefix + 4)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONTEXTMANAGEROBSERVER, kOnBoardingPrefix + 5)
DECLARE_PMID(kInterfaceIDSpace, IID_IFOOTNOTEIAMSHOWN, kOnBoardingPrefix + 6)
DECLARE_PMID(kInterfaceIDSpace, IID_IACTIVEIAM, kOnBoardingPrefix + 7)

// <Error ID>
// Error Codes
DECLARE_PMID(kErrorIDSpace, kBadParamterError, kOnBoardingPrefix + 1)


// <Widget ID>
// Character attribute widgets <1-50>

// <Message ID>
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
