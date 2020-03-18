//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/public/interfaces/ui/IStylePanelUIDData.h $
//  
//  Owner: Wai Cheuk
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
#ifndef __IStylePanelUIDData__
#define __IStylePanelUIDData__

#include "IPMUnknown.h"
#include "UIDList.h"

class IStylePanelUIDData : public IPMUnknown {
public:
	virtual void SetItemList(const UIDList& theList) = 0;
	virtual const UIDList& GetItemList() const = 0;

};


#endif // __IStylePanelUIDData__