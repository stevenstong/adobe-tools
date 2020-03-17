//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/ICenterItemsInViewCmdData.h $
//  
//  Owner: Lonnie Millett
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
#ifndef __ICenterItemsInViewCmdData__
#define __ICenterItemsInViewCmdData__

#include "IPMUnknown.h"
#include "ITransform.h"
#include "CommandID.h"
#include "PMPoint.h"

class IControlView;

class ICenterItemsInViewCmdData : public IPMUnknown
{
	public:
		virtual void Set(IControlView* layoutControlView) = 0;
		virtual IControlView* GetLayoutControlView() const = 0;
};

#endif
