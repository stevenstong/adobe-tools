//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/layerpanel/DebuggingLayers.h $
//  
//  Owner: ?
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

#pragma once
#ifndef __DEBUGGINGLAYERS__
#define __DEBUGGINGLAYERS__

void IteratePageItems();
void IterateSpread();
void CreateNonUILayer();
void CreateNonExpendableLayer();
void CreateNonUINonExpendableLayer();
void TraceLayerList();

#endif // __DEBUGGINGLAYERS__
