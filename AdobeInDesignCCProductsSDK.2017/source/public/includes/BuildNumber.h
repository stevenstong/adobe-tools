//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/BuildNumber.h $
//  
//  Owner: Peter Boctor
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2017/03/16 03:27:23 $
//  
//  $Revision: #238 $
//  
//  $Change: 979444 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#ifndef __BUILDNUMBER__ 
#define __BUILDNUMBER__

#include "CrossPlatformTypes.h"

//----------------------------------------------------------------------------------------
// Only use spaces as separators (no tabs) in these defines to make automated parsing
// and extraction of the build and change numbers easier.
//----------------------------------------------------------------------------------------
#define kBuildNumber 56
#define kBuildNumberStr "56"
#define kChangeNumberStr "979359"


//----------------------------------------------------------------------------------------
// Create a new file and add it to the end of the list for each new InDesign product version.
//----------------------------------------------------------------------------------------
#include "K2BuildNumber.h"
#include "SherpaBuildNumber.h"
#include "HotakaBuildNumber.h"
#include "AnnaBuildNumber.h"
#include "DragontailBuildNumber.h"
#include "FiredrakeBuildNumber.h"
#include "CobaltBuildNumber.h"
#include "BasilBuildNumber.h"
#include "RocketBuildNumber.h"
#include "OdinBuildNumber.h"
#include "AthosBuildNumber.h"
#include "CitiusBuildNumber.h"
//#include "CitiusR0BuildNumber.h"
//#include "CitiusR1BuildNumber.h"
#include "SiriusBuildNumber.h"
#include "SiriusR3BuildNumber.h"
#include "SiriusR4BuildNumber.h"
#include "R5BuildNumber.h"
#include "R7BuildNumber.h"
#include "R8BuildNumber.h"
#include "R9BuildNumber.h"
#include "R10BuildNumber.h"
#include "R11BuildNumber.h"

//----------------------------------------------------------------------------------------
// Now, build the overall definitions from the most recently included file.
//----------------------------------------------------------------------------------------

#define kVersionNumber					kR11VersionNumber
#define kVersionNumberStr				kR11VersionNumberStr
#define kVersionNumberForResourceStr	kR11VersionNumberForResourceStr
#define kUIVersionStr					kR11UIVersionStr
#define kCCVersionYearBasedHandleStr	kR11CCVersionYearBasedHandleStr
#define kCCVersionYearBasedFullHandleStr	kR11CCVersionYearBasedFullHandleStr
#define kMajorVersionNumber				kR11MajorVersionNumber
#define kMinorVersionNumber				kR11MinorVersionNumber
#define kDotVersionNumber				kR11DotVersionNumber
#define kMajorVersionNumberForResource	kR11MajorVersionNumberForResource
#define kMinorVersionNumberForResource	kR11MinorVersionNumberForResource
#define kDotVersionNumberForResource	kR11DotVersionNumberForResource
#define kVersionCopyRightStr			kR11VersionCopyRightStr
#ifdef WINDOWS
#define kShortCopyRightStr				kR11ShortCopyRightStr
#endif
#ifdef DEBUG
#define kAUMComponentVersionStr			kR11AUMComponentVersionStr kBuildNumberStr "D"
#else
#define kAUMComponentVersionStr			kR11AUMComponentVersionStr kBuildNumberStr
#endif
#ifdef MACINTOSH
#define kApplicationCFBundleVersionStr	kR11CFBundleVersionStr
#endif

//used for reporting version to crash reporter
#define kCRAdobeProductBuild            "Adobe Product Build"
#define kCRAdobeProductVersion          "Adobe Product Version"
#define kCRAdobeProductVersionStr       kR11CRAdobeProductVersionStr

// Update this if scripting DOM changes in feature bearing updates as well.
#define kMajorScriptVersionNumber		kR11MajorScriptVersionNumber
#define kMinorScriptVersionNumber		kR11MinorScriptVersionNumber

// Used for the application registry key (version number sub-key) on windows.
// HKLM\Software\Adobe\<Application>\<version number>
//
// NOTE: This should be revisited at the time of next major release.
//
#define kAppVersionNumberKeyStr			kR10VersionNumberStr

// Used in ESInit::GetXPEPSpecifier, it specifies the indesign version number used to
// (i)  Read Bridge CC startup scripts 
// (ii) For incoming bridge talk messages.
// 
// NOTE: This should be revisited at the time of next major release.
// 
#define kXPEPSpecifierVersionNumberStr	kR10VersionNumberStr

// Used in IDDroverApp::GetAppInternalVersion, it specifies the folder name for drover app preferences
// NOTE: This should be revisited at the time of next major release.
#define kDroverAppInternalVersionNumberStr			kR10VersionNumberStr

// Specifies the feature branch name for prerelease builds
#define kFeatureBranchStr			"Mainline"

// Strings for FeatureSet preferences
#define kFeatureSetStr "Feature Set Locale Setting"

#ifdef MACINTOSH
	#ifdef PRERELEASE
			#define kDevelopmentStage development
	#else		
			#define kDevelopmentStage release
	#endif
#endif

#endif
