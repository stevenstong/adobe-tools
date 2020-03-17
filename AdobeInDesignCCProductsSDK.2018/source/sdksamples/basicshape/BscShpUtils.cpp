//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/basicshape/BscShpUtils.cpp $
//  
//  Owner: Adobe Developer Technologies
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2018/03/06 12:15:34 $
//  
//  $Revision: #10 $
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

#include "VCPlugInHeaders.h"

// Interfaces:
#include "IPathUtils.h"
#include "INewPageItemCmdData.h"

// General:
#include "Utils.h"
#include "PMRect.h"

// Project:
#include "BscShpUtils.h"
#include "BscShpID.h"

/*
*/
UIDRef BscShpUtils::CreateBasicShape(const UIDRef& parent, PBPMRect bbox)
{
	return Utils<IPathUtils>()->CreateRectangleSpline(	parent, 
														bbox, 
														INewPageItemCmdData::kGraphicFrameAttributes,
														kBscShpPageItemBoss,
														kTrue);
}
			
// End BscShpUtils.cpp

