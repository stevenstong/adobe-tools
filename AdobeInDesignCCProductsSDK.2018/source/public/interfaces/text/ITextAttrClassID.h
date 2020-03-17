//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/ITextAttrClassID.h $
//  
//  Owner: eric_kenninga
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

#ifndef __ITextAttrClassID__
#define __ITextAttrClassID__

#include "IPMUnknown.h"
#include "TextAttrID.h"


/** 
	@ingroup text_attr
*/
class ITextAttrClassID : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITEXTATTRCLASSID };
		
		typedef ClassID		ValueType;

		void Set(ValueType flag)
			{ SetClassData(flag); }
		ValueType Get() const
			{ return GetClassData(); }

		virtual void SetClassData(ClassID c) = 0;
		virtual ClassID GetClassData() const = 0;
};

#endif		// __ITextAttrBoolean__
