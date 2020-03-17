//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/includes/widgets/CListBoxDragDropSource.h $
//  
//  Owner: Tom Taylor
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2018/03/06 12:15:34 $
//  
//  $Revision: #10 $
//  
//  $Change: 1009641 $
//  
//  ADOBE CONFIDENTIAL
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  All information contained herein is, and remains
//  the property of Adobe Systems Incorporated and its suppliers,
//  if any.  The intellectual and technical concepts contained
//  herein are proprietary to Adobe Systems Incorporated and its
//  suppliers and may be covered by U.S. and Foreign Patents,
//  patents in process, and are protected by trade secret or copyright law.
//  Dissemination of this information or reproduction of this material
//  is strictly forbidden unless prior written permission is obtained
//  from Adobe Systems Incorporated.
//  
//  
//  Interface for a ListBox Drag and Drop source
//  
//========================================================================================

#include "CDragDropSource.h"
#include "IDragDropController.h"

class IEvent;
class IDragDropTarget;

#pragma once
#ifdef WIDGET_BUILD
#pragma export on
#endif

class WIDGET_DECL CListBoxDragDropSource : public CDragDropSource
{
	public:
									CListBoxDragDropSource(IPMUnknown *boss);
		virtual						~CListBoxDragDropSource();

		virtual SysWireframe 				DoMakeDragOutlineRegion() const;

	private:
};

#pragma export off
