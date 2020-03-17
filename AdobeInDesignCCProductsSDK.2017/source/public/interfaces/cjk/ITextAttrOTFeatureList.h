//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/cjk/ITextAttrOTFeatureList.h $
//  
//  Owner: hlynn
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

#pragma once
#ifndef __ITextAttrOTFeatureList__
#define __ITextAttrOTFeatureList__

#include "IPMUnknown.h"
#include "K2Vector.h"
#include "OTFeature.h"
#include "CJKID.h"

class ITextAttrOTFeatureList : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITEXTATTROTFEATURELIST};
		
		virtual void SetFeatureList(const OpenTypeFeatureList& featureList) = 0;
		virtual const OpenTypeFeatureList& GetFeatureList() const = 0;
};

 #endif
		// __ITextAttrOTFeatureList__

