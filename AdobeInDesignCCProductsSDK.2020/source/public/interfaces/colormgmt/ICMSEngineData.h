//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/public/interfaces/colormgmt/ICMSEngineData.h $
//  
//  Owner: James Jardee-Borquist
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

#ifndef __ICMSEngineData__

#define __ICMSEngineData__



#if PRAGMA_ONCE

#pragma once

#endif



#include "IPMUnknown.h"



#include "ACEColorMgmtID.h"



//========================================================================================

// CLASS ICMSEngineData

//========================================================================================



class ICMSEngineData : public IPMUnknown

{

public:

	enum { kDefaultIID = IID_ICMSENGINEDATA };

	

	virtual void Set(uint32 engineCMS, uint32 engineCMM) = 0;

	virtual uint32 GetEngineCMS() const = 0;

	virtual uint32 GetEngineCMM() const = 0;

};



#endif // __ICMSEngineData__



// End, ICMSEngineData.h.

