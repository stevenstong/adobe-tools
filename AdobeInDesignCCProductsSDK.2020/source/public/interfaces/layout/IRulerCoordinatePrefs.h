//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/public/interfaces/layout/IRulerCoordinatePrefs.h $
//  
//  Owner: Yeming Liu
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
//  
//  Comment:  Ruler per page or Ruler per spread 
//  
//========================================================================================

#pragma once
#ifndef __IRulerCoordinatePrefs__
#define __IRulerCoordinatePrefs__

#include "IPMUnknown.h"
#include "LayoutID.h"

class IRulerCoordinatePrefs : public IPMUnknown
{
	public:	
		enum { kDefaultIID = IID_IRULERCOORDINATEPREFERENCES };
		typedef enum 
		{ 
			kRulerPerSpread = 0, 
			kRulerPerPage, 
			kRulerOnBinding 
		} RulerCoordinateType;

		virtual void SetRulerPerPage(const RulerCoordinateType rulerType) = 0;
		virtual const RulerCoordinateType GetRulerPerPage( ) = 0;
};

#endif
