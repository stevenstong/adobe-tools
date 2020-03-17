//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/ITextAttrWideString.h $
//  
//  Owner: Michiko Jessett
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
#ifndef __ITextAttrWideString__
#define __ITextAttrWideString__

#include "IPMUnknown.h"
#include "TextAttrID.h"

class WideString;

/** Wide string attribute. Used in kTARubyStringBoss.
	@ingroup text_attr
*/
class ITextAttrWideString : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITEXTATTRWIDESTRING };
		
		typedef const WideString&		ValueType;

		/**	Set wide string
			@param flag		wide string to set to
		 */
		void Set(ValueType flag)
			{ SetString(flag); }

		/**	Get wide string
			@return ValueType	wide string
		 */
		ValueType Get() const
			{ return GetString(); }

		/**	Get wide string
			@return WideString&	wide string
		 */
		virtual const WideString& GetString() const = 0;

		/**	Set wide string
			@param ws		wide string to set to
		 */
		virtual void SetString(const WideString& ws) = 0;
};

#endif
