//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/TreeViewDefs.h $
//  
//  Owner: Matt Joss
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2018/03/06 12:15:34 $
//  
//  $Revision: #11 $
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

#pragma once
#ifndef __TreeViewDefs__
#define __TreeViewDefs__

// ----- ITreeAttributes

#define kHideRootNode					0x0000
#define kDisplayRootNode				0x0001
#define kDrawEndLine					0x0002
#define kDrawBorder						0x0004


// ----- PreDefined TreeView styles used in ITreeViewWidgetMgr
#define kInvalidTreeStyle				-1
#define kNoTreeStyle					0
#define kSmallPaletteRowsTreeStyle		1
#define kLargePaletteRowsTreeStyle		2
#define kTouchPaletteRowsTreeStyle		3

//----------------------------------------------------------------------------------------
// Resource ID of Tree View widgets
//----------------------------------------------------------------------------------------
#define kStandardLargeTreeNodeRsrcID			1000
#define kStandardSmallTreeNodeRsrcID			2000
#define kStandardStringListBoxTreeNodeRsrcID	3000
#define kStandardSmallStringListBoxTreeNodeRsrcID	3010
#define kStandardViewListBoxTreeNodeRsrcID	4000

//----------------------------------------------------------------------------------------
//	Column header attributes
//----------------------------------------------------------------------------------------
#define	kDontAutoResize				10
#define	kAutoResizeFirstColumn		11
#define	kAutoResizeProportional		12
#define	kColumnsNotUserResizable	13


#endif // __TreeViewDefs__
