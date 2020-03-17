//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/colormgmt/ICMSPolicyData.h $
//  
//  Owner: James Jardee-Borquist
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

#ifndef __ICMSPolicyData__

#define __ICMSPolicyData__



#if PRAGMA_ONCE

#pragma once

#endif



#include "ICMSManager.h"

#include "IPMUnknown.h"



#include "ACEColorMgmtID.h"



//========================================================================================

// CLASS ICMSPolicyData

//========================================================================================



class ICMSPolicyData : public IPMUnknown

{

public:

	enum { kDefaultIID = IID_ICMSPOLICYDATA };

	

	virtual void Set(ICMSManager::CMSPolicy policy) = 0;

	virtual ICMSManager::CMSPolicy GetPolicy() const = 0;

};



#endif // __ICMSPolicyData__



// End, ICMSPolicyData.h.

