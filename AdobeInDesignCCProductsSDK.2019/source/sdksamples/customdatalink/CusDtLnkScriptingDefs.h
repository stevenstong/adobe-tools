//========================================================================================
//  
//  $File: //depot/devtech/14.0/plugin/source/sdksamples/customdatalink/CusDtLnkScriptingDefs.h $
//  
//  Owner: Adobe Developer Technologies
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2018/09/10 00:46:19 $
//  
//  $Revision: #2 $
//  
//  $Change: 1031899 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#ifndef __CusDtLnkScriptingDefs_h__
#define __CusDtLnkScriptingDefs_h__

// Used guidgen.exe to get these
#define kCusDtLnkCustomDataLink_CLSID { 0x9b40e092, 0x2103, 0x4693, { 0xa9, 0x72, 0x3a, 0x60, 0x50, 0xb6, 0x1d, 0xcc } }
#define kCusDtLnkCustomDataLinks_CLSID { 0xf912bfe2, 0x130f, 0x49e5, { 0xbf, 0x8b, 0x57, 0x98, 0x58, 0x69, 0x19, 0x4e } }
#define kCusDtLnkOption_CLSID { 0x2f52e7f8, 0xbc48, 0x4693, { 0xa2, 0x38, 0x99, 0x41, 0x75, 0x11, 0xf0, 0x4b } }

/* ScriptIDs
*/
enum CusDtLnkScriptingDefs
{
	// Suite IDs
	s_CusDtLnkSuite = 'CDSu',		// The custom datalink suite
    // Class IDs 
	c_CusDtLnkCustomDataLink = 'CDLK',	// The custom datalink object
	c_CusDtLnkCustomDataLinks = 'CDLs',	// The custom datalink object collection,
	p_CusDtLnkLinkInfo = 'CDln',		// Custom datalink information
	p_CurDtLnkUniqueKey = 'CDuk',		// Custom datalink unique key

	c_CusDtLnkOption = 'CDLO', // custom data link option preference object
	p_CusDtLnkOption = 'PDLO', // custom data link option preference property
	p_CusDtLnkOptionDatabasePair = 'PODP', //custom data link option database key value pairs
	p_CusDtLnkOptionAssetPair = 'POAP' // custom data link option asset key value pairs 
};



#endif // __CusDtLnkScriptingDefs_h__

//  Code generated by DollyXs code generator