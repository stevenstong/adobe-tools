//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IPMUnknownRefListData.h $
//  
//  Owner: SusanCL,lance bushore
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
#ifndef _IPMUnknownRefListData_
#define _IPMUnknownRefListData_

#include "IPMUnknown.h"

//___________________________________________________________________________________
//	CLASS DECLARATIONS
//___________________________________________________________________________________
class PMUnknownRefList;

/** Data interface for storing a list of boss object references
	(PMUnknownRefList).
	@see PMUnknownRefList

	@ingroup arch_coredata 
*/
class IPMUnknownRefListData : public IPMUnknown
{
	public:
		/** Return the list
			@return	return the list
		*/
		virtual PMUnknownRefList*	GetPMUnknownRefList	(void) const = 0;

		/** Set the list to the new value. 
			@param array	pointer to the new list. IPMUnknownRefListData owns the 
							pointer after the call to Set, and will be responsible 
							for deleting it.
		*/
		virtual void				SetPMUnknownRefList	(PMUnknownRefList* array) = 0;
};
		
#endif // _IPMUnknownRefListData_
