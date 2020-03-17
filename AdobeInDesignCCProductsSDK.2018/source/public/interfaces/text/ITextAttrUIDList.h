//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/ITextAttrUIDList.h $
//  
//  Owner: Michele Stutzman
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

#ifndef __ITextAttrUIDList__
#define __ITextAttrUIDList__

#include "IPMUnknown.h"
#include "TextAttrID.h"
#include "UIDList.h"

/** Simple data interface for holding the uid list text attribute.
	@ingroup text_attr
*/
class ITextAttrUIDList : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITEXTATTRUIDLIST };
		
		/** Standardized alis that refers to the UIDList in this interface */
		typedef K2Vector<UID>		ValueType;

		/** Set the UIDList in this text attribute
			@param list The uid list to set
		*/
		void Set(ValueType list) { SetUIDList(list); }

		/** Get the uid list from this text attribute.
			@return ValueType which represents the uid list
		*/
		ValueType Get() { return GetUIDList(); }

		/** Set the UIDList in this text attribute
			@param list The uid list to set
		*/
		virtual void SetUIDList(const K2Vector<UID>& list) = 0;

		/** Get the uid list from this text attribute.
			@return ValueType which represents the uid list
		*/
		virtual const K2Vector<UID>& GetUIDList() const = 0;
};

#endif
