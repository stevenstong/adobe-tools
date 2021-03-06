//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/open/includes/widgets/DVStdButtonEH.h $
//  
//  Owner: Michael Burbidge
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2019/10/11 10:48:01 $
//  
//  $Revision: #2 $
//  
//  $Change: 1061132 $
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
//========================================================================================

#pragma once
#ifndef __DVStdButtonEH__
#define __DVStdButtonEH__

#include "DVHostedWidgetEH.h"

#ifdef DV_WIDGET_BUILD
#pragma export on
#endif

class DV_WIDGET_DECL DVStdButtonEH : public DVHostedWidgetEH
{
	typedef DVHostedWidgetEH inherited;
public:
	// ----- Initialization -----
	
	DVStdButtonEH(IPMUnknown *boss);
	virtual ~DVStdButtonEH();
	
	virtual bool16	CanHaveKeyFocus() const;
};

#pragma export off

#endif
