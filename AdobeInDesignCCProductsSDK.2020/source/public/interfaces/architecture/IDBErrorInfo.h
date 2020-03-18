//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/public/interfaces/architecture/IDBErrorInfo.h $
//  
//  Owner: Roey Horns
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
//========================================================================================

#pragma once
#ifndef __IDBERRORINFO__
#define __IDBERRORINFO__

#include "IPMUnknown.h"
#include "IDataBase.h"

class IDocument;

/** Stores error information relating to a database (IDataBase).
	@ingroup arch_db
	@see kDBErrorInfoBoss
	@see IDataBase
*/
class IDBErrorInfo : public IPMUnknown
{
public:
	virtual void					SetInfo(IDataBase::DBResultCode err) = 0;
	virtual void					SetInfo(IDataBase* db) = 0;
	virtual void					SetInfo(IDocument* doc) = 0;
	virtual void					SetInfo(const IDFile &file) = 0;
			
    virtual IDataBase::DBError GetInfo() = 0;
    
	virtual PMString 				GetDocName() = 0;
    virtual PMString 				GetShortDescription(ErrorCode userErrorCode, const std::string* logString = nullptr) = 0;
    virtual void                    LogDetailedDBError(ErrorCode userErrorCode, const std::string* logString = nullptr) = 0;

};



#endif // __IDBERRORINFO__
