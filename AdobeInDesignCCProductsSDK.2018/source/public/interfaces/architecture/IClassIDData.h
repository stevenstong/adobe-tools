//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IClassIDData.h $
//  
//  Owner: Roey Horns
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
#ifndef __ICLASSIDDATA__
#define __ICLASSIDDATA__

#include "ShuksanID.h"
#include "IPMUnknown.h"

/** Data interface for storing a ClassID
	@ingroup arch_db
*/
class IClassIDData : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ICLASSIDDATA };
		
		/** Set the value of the ClassID.
			@param id	the ClassID
		*/
		virtual void Set(ClassID id) = 0;

		/** Return the ClassID
			@return value of the ClassID.
		*/
		virtual ClassID GetClassID() const = 0;
};

#endif //__ICLASSIDDATA__