//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/ITextAttrString.h $
//  
//  Owner: Eric_Kenninga
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
#ifndef __ITextAttrString__
#define __ITextAttrString__

#include "IPMUnknown.h"
#include "TextAttrID.h"

class PMString;

/** Interface for a text attribute whose value is represented by a string.
	@see PMString
	@ingroup text_attr
*/
class ITextAttrString : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ITEXTATTRSTRING };

	typedef const PMString&		ValueType;

	/** */
	void Set(ValueType flag) { SetString(flag); }
	/** */
	ValueType Get() const { return GetString(); }

	/** */
	virtual const PMString& GetString() const = 0;
	/** */
	virtual void SetString(const PMString& ss) = 0;
};

#endif
