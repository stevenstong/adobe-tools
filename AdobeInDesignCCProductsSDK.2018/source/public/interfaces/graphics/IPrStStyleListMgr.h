//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/IPrStStyleListMgr.h $
//  
//  Owner: Matt Phillips
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

#ifndef __IPrStStyleListMgr__
#define __IPrStStyleListMgr__

#include "IGenStlEdtListMgr.h"
#include "PrStID.h"

/**
 Subclass of IGenStlEdtListMgr. This interface adds nothing to its base class and 
 is preserved for historical reasons and to avoid changing client code that was 
 written against this interface.
 
 @see IGenStlEdtListMgr
 */
class IPrStStyleListMgr : public IGenStlEdtListMgr

{
	public:
	enum { kDefaultIID = IID_IPRSTSTYLELISTMGR };
};

#endif