//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/public/includes/BuildNumber.h $
//  
//  Owner: Peter Boctor
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2019/10/21 00:39:17 $
//  
//  $Revision: #8 $
//  
//  $Change: 1061866 $
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
#define kBuildNumber 155
#define kBuildNumberStr "155"
#define kChangeNumberStr "1061802"


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
#include "CC14BuildNumber.h"
#include "CC15BuildNumber.h"

//----------------------------------------------------------------------------------------
// Now, build the overall definitions from the most recently included file.
//----------------------------------------------------------------------------------------

#define kVersionNumber					kCC15VersionNumber
#define kVersionNumberStr				kCC15VersionNumberStr
#define kVersionNumberForResourceStr	kCC15VersionNumberForResourceStr
#define kUIVersionStr					kCC15UIVersionStr
#define kCCVersionYearBasedHandleStr	kCC15CCVersionYearBasedHandleStr
#define kCCVersionYearBasedFullHandleStr	kCC15CCVersionYearBasedFullHandleStr
#define kMajorVersionNumber				kCC15MajorVersionNumber
#define kMinorVersionNumber				kCC15MinorVersionNumber
#define kDotVersionNumber				kCC15DotVersionNumber
#define kMajorVersionNumberForResource	kCC15MajorVersionNumberForResource
#define kMinorVersionNumberForResource	kCC15MinorVersionNumberForResource
#define kDotVersionNumberForResource	kCC15DotVersionNumberForResource
#define kVersionCopyRightStr			kCC15VersionCopyRightStr
#ifdef WINDOWS
#define kShortCopyRightStr				kCC15ShortCopyRightStr
#endif
#ifdef DEBUG
#define kAUMComponentVersionStr			kCC15AUMComponentVersionStr kBuildNumberStr "D"
#else
#define kAUMComponentVersionStr			kCC15AUMComponentVersionStr kBuildNumberStr
#endif
#ifdef DEBUG
#define kVersionNumberForAboutStr		kCC15VersionNumberForResourceStr "D"
#else
#define kVersionNumberForAboutStr		kCC15VersionNumberForResourceStr
#endif
#ifdef MACINTOSH
#define kApplicationCFBundleVersionStr	kCC15CFBundleVersionStr
#endif

//used for reporting version to crash reporter
#define kCRAdobeProductBuild            "Adobe Product Build"
#define kCRAdobeProductVersion          "Adobe Product Version"
#define kCRAdobeProductVersionStr       kCC15CRAdobeProductVersionStr

// Update this if scripting DOM changes in feature bearing updates as well.
#define kMajorScriptVersionNumber		kCC15MajorScriptVersionNumber
#define kMinorScriptVersionNumber		kCC15MinorScriptVersionNumber

// Used for the application registry key (version number sub-key) on windows.
// HKLM\Software\Adobe\<Application>\<version number>
//
// NOTE: This should not be changed for dot releases, but should be revisited at the time of next major release.
//
#define kAppVersionNumberKeyStr			kCC15VersionNumberStr

// Used in ESInit::GetXPEPSpecifier, it specifies the indesign version number used to
// (i)  Read Bridge CC startup scripts 
// (ii) For incoming bridge talk messages.
// 
// NOTE: This should not be changed for dot releases, but should be revisited at the time of next major release.
// 
#define kXPEPSpecifierVersionNumberStr	kCC15VersionNumberStr

// Used in IDDroverApp::GetAppInternalVersion, it specifies the folder name for drover app preferences
// NOTE: This should not be changed for dot releases, but should be revisited at the time of next major release.
#define kDroverAppInternalVersionNumberStr			kCC15VersionNumberStr

// Used in SettingsMigrationManager::DoesUserWantAutoMigration, to check if user has specified to auto-migrate settings post-install
// NOTE: This should not be changed for dot releases, but should be revisited at the time of next major release.
#define kAutoMigratePrefsVersionNumberStr			kCC15VersionNumberStr

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
