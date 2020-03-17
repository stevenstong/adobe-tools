//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/includes/widgets/DVTriStateControlEH.h $
//  
//  Owner: Sanyam Jain
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
//  Copyright 1997-2008 Adobe Systems Incorporated. All rights reserved.
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
//========================================================================================

#pragma once
#ifndef __DVTriStateControlEH__
#define __DVTriStateControlEH__

#ifdef DV_WIDGET_BUILD
#pragma export on
#endif

/*
	Drover world's version of TriStateControlEH
*/

#include "DVControlEventHandler.h"

class DV_WIDGET_DECL DVTriStateControlEH : public DVControlEventHandler
{
	typedef DVControlEventHandler inherited;
public:
	DVTriStateControlEH(IPMUnknown *boss);
	~DVTriStateControlEH();
	virtual bool16 CanHaveKeyFocus()const;
};

#endif