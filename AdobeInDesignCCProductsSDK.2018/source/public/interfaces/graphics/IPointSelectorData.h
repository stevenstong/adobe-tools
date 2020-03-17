//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/IPointSelectorData.h $
//  
//  Owner: Paul Sorrick
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
#ifndef __IPointSelectorData__
#define __IPointSelectorData__

#include "IPMUnknown.h"
#include "GraphicsID.h"
#include "PathTypes.h"

/** A data interface for storing a path point selection */
class IPointSelectorData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IPOINTSELECTORDATA };

	/** Set the selection */
	virtual void Set( const PointSelector& thePoint ) = 0 ;
	/** Get the selection */
	virtual const PointSelector& GetPointSelector() const = 0 ;
} ;

#endif
