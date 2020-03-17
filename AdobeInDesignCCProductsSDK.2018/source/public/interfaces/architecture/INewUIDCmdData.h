//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/INewUIDCmdData.h $
//  
//  Owner: jargast
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
#ifndef __INewUIDCmdData__
#define __INewUIDCmdData__

#include "IPMUnknown.h"
#include "ShuksanID.h"

class IDataBase;

/** Data interface for creating new UIDs. 
	@see kNewUIDCmdBoss 
	@ingroup arch_db
*/
class INewUIDCmdData : public IPMUnknown 
{
public:
	enum {kDefaultIID = IID_INEWUIDCMDDATA};

	/** Set the information required for creating the UID
		@param db	What database the UID should be created in
		@param classID	What ClassID the UID should have
	*/
	virtual void Set(IDataBase*db, ClassID classID) = 0;
	
	/** Return the database UID will be created in
		@return		The database UID will be created in
	*/
	virtual IDataBase* GetDataBase() const = 0;
	
	/** Return the ClassID the new UID will have
		@return	The ClassID of the new UID.
	*/
	virtual ClassID GetClassID() = 0;
};



#endif // __INewUIDCmdData__