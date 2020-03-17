//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/ui/IControlViewDefs.h $
//  
//  Owner:
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
//  ADOBE CONFIDENTIAL
//  
//========================================================================================

#pragma once
#ifndef __IControlViewDefs_h__

// ----- Frame binding options

#define kBindNone					0x0000
#define kBindLeft						0x0001
#define kBindTop						0x0002
#define kBindRight					0x0004
#define kBindBottom					0x0008

#define kBindNotSymetrize			0x1000

#define kBindAll					(kBindLeft | kBindTop | kBindRight | kBindBottom)

#define kBindParentToChild			0x0010

// Use following constants for defining icon container sizes in panels, esp at the bottom of panels.
#define kPanelIconWidth				26	// Changed from 30 as all icons will sufficiently fit in this width.
#define kPanelIconHeight			18
#define kControlStripIconWidth				24
#define kControlStripIconHeight			22

#endif // __IControlViewDefs_h__
