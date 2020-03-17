//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/tables/ITableDirectionAttr.h $
//  
//  Owner:
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
//  
//  ADOBE CONFIDENTIAL
//  
//  Usage rights licenced to Adobe Inc. 1993 - 2007.
//  
//========================================================================================

#ifndef __ITABLEDIRATTR__
#define __ITABLEDIRATTR__

#include "IPMUnknown.h"
#include "WorldReadyID.h"
#include "TableTypes.h"
#include "TablesID.h"


/** the right-to-left vs. left-to-right flag
	as a table attribute.
	@see ITableCommands::ChangeTableDirection(Tables::EDirection directionRTL).
*/
class ITableDirectionAttr : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITABLEDIRATTR };

		typedef Tables::EDirection		ValueType;

		/** Set the direction (column order) of the table.
		@param val is the direction.
		*/
		virtual void Set(ValueType val) = 0;

		/** Get the direction (column order) of the table.
		@return the table direction.
		*/
		virtual	ValueType Get() const = 0;
};

#endif

