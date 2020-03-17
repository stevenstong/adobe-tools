//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/BuildNumber.h $
//  
//  Owner: Peter Boctor
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2018/03/06 12:15:34 $
//  
//  $Revision: #345 $
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

#ifndef __BUILDNUMBER__ 
#define __BUILDNUMBER__

#include "CrossPlatformTypes.h"

//----------------------------------------------------------------------------------------
// Only use spaces as separators (no tabs) in these defines to make automated parsing
// and extraction of the build and change numbers easier.
//----------------------------------------------------------------------------------------
#define kBuildNumber 76
#define kBuildNumberStr "76"
#define kChangeNumberStr "1009049"


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
#include "R12BuildNumber.h"
#include "R13BuildNumber.h"

//----------------------------------------------------------------------------------------
// Now, build the overall definitions from the most recently included file.
//----------------------------------------------------------------------------------------

#define kVersionNumber					kR13VersionNumber
#define kVersionNumberStr				kR13VersionNumberStr
#define kVersionNumberForResourceStr	kR13VersionNumberForResourceStr
#define kUIVersionStr					kR13UIVersionStr
#define kCCVersionYearBasedHandleStr	kR13CCVersionYearBasedHandleStr
#define kCCVersionYearBasedFullHandleStr	kR13CCVersionYearBasedFullHandleStr
#define kMajorVersionNumber				kR13MajorVersionNumber
#define kMinorVersionNumber				kR13MinorVersionNumber
#define kDotVersionNumber				kR13DotVersionNumber
#define kMajorVersionNumberForResource	kR13MajorVersionNumberForResource
#define kMinorVersionNumberForResource	kR13MinorVersionNumberForResource
#define kDotVersionNumberForResource	kR13DotVersionNumberForResource
#define kVersionCopyRightStr			kR13VersionCopyRightStr
#ifdef WINDOWS
#define kShortCopyRightStr				kR13ShortCopyRightStr
#endif
#ifdef DEBUG
#define kAUMComponentVersionStr			kR13AUMComponentVersionStr kBuildNumberStr "D"
#else
#define kAUMComponentVersionStr			kR13AUMComponentVersionStr kBuildNumberStr
#endif
#ifdef DEBUG
#define kVersionNumberForAboutStr		kR13VersionNumberForResourceStr "D"
#else
#define kVersionNumberForAboutStr		kR13VersionNumberForResourceStr
#endif
#ifdef MACINTOSH
#define kApplicationCFBundleVersionStr	kR13CFBundleVersionStr
#endif

//used for reporting version to crash reporter
#define kCRAdobeProductBuild            "Adobe Product Build"
#define kCRAdobeProductVersion          "Adobe Product Version"
#define kCRAdobeProductVersionStr       kR13CRAdobeProductVersionStr

// Update this if scripting DOM changes in feature bearing updates as well.
#define kMajorScriptVersionNumber		kR13MajorScriptVersionNumber
#define kMinorScriptVersionNumber		kR13MinorScriptVersionNumber

// Used for the application registry key (version number sub-key) on windows.
// HKLM\Software\Adobe\<Application>\<version number>
//
// NOTE: This should be revisited at the time of next major release.
//
#define kAppVersionNumberKeyStr			kR12VersionNumberStr

// Used in ESInit::GetXPEPSpecifier, it specifies the indesign version number used to
// (i)  Read Bridge CC startup scripts 
// (ii) For incoming bridge talk messages.
// 
// NOTE: This should be revisited at the time of next major release.
// 
#define kXPEPSpecifierVersionNumberStr	kR12VersionNumberStr

// Used in IDDroverApp::GetAppInternalVersion, it specifies the folder name for drover app preferences
// NOTE: This should be revisited at the time of next major release.
#define kDroverAppInternalVersionNumberStr			kR12VersionNumberStr

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
