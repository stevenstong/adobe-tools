//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/open/includes/widgets/InLineEditView.h $
//  
//  Owner: lance bushore
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2019/10/11 10:48:01 $
//  
//  $Revision: #2 $
//  
//  $Change: 1061132 $
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
#ifndef __InLineEditView__ 
#define __InLineEditView__

// ----- Includes -----

#include "DVPanelView.h"

class WIDGET_DECL InLineEditView : public DVPanelView
{
	typedef DVPanelView inherited;
public:
	InLineEditView(IPMUnknown *boss);
 	virtual ~InLineEditView();
	virtual void ReadWrite(IPMStream *s, ImplementationID prop);
	virtual void WindowHidden();
	virtual void WindowChanged();
	virtual void ParentPurged();

protected:
	void CommonInit();
};

#endif // __InLineEditView__


