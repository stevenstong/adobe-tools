//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/ITextAttrNumberingStyle.h $
//  
//  Owner: Amit Batra
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
#ifndef __ITextAttrNumberingStyle_h__
#define __ITextAttrNumberingStyle_h__


#include "IPMUnknown.h"
#include "BNTextAttrID.h"

/** Represents the numbering style text attribute.
	@ingroup text_attr
*/

class ITextAttrNumberingStyle : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITEXTATTRNUMBERINGSTYLE};

		/** Standardized alias that refers to ClassID in this interface */
		typedef const ClassID& ValueType;

		/** Standardized alias that refers to ClassID in this interface */
		typedef const ClassID& value_type;

		/** Set the class id representing a numbering style in this text attribute
			@param flag	The numbering style class id to set
		*/
		virtual void Set(value_type flag) = 0;

		/**
			Get the class id representing a numbering style from this text attribute. This is a 
			standardized method name across most text attribute interfaces.
			@return 		value_type, which represents a ClassID
		*/
		virtual value_type Get() const = 0;

		/** Set the class id representing a numbering style in this text attribute
			@param flag	The numbering style class id to set
		*/
		void SetNumberingStyle(value_type flag) { Set(flag); }

		/**
			Get the class id representing a numbering style from this text attribute
			@return 		ClassID
		*/
		value_type GetNumberingStyle() const { return Get(); }
};

#endif // __ITextAttrNumberingStyle_h__
