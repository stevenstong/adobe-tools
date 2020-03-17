//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/cjk/INamedGridUID.h $
//  
//  Owner: Heath Lynn
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2017/03/10 00:54:55 $
//  
//  $Revision: #8 $
//  
//  $Change: 979292 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#ifndef __INamedGridUID__
#define __INamedGridUID__

#include "IPMUnknown.h"
#include "CJKGridID.h"

class INamedGridUID : public IPMUnknown
{	
public:
	enum { kDefaultIID = IID_INAMEDGRIDUID };

	/**  Sets the UID saved in this object.
		@param uid IN UID of applied named grid.
	*/
	virtual void Set(UID uid) = 0;
	
	/**  Returns the UID saved in this object.
		@return UID of applied named grid
	*/
	virtual UID Get() const = 0;
};

#endif