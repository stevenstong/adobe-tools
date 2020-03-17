//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/interfaces/architecture/IFileDialogPaths.h $
//  
//  Owner: Michael Easter
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
//  Purpose:
//  
//========================================================================================

#pragma once
#ifndef __IFileDialogPaths__
#define __IFileDialogPaths__

#include "IPMUnknown.h"

#include "DocFrameworkID.h"
class PMString;

class IFileDialogPaths : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IFILEDIALOGPATHS };

	virtual void SetOpenDialogPath(const ClassID& id, const PMString& path) = 0;
	virtual bool16 GetOpenDialogPath(const ClassID& id, PMString& path) const = 0;

	virtual void SetSaveDialogPath(const ClassID& id, const PMString& path) = 0;
	virtual bool16 GetSaveDialogPath(const ClassID& id, PMString& path) const = 0;
	
	virtual bool16 GetLastDialogPath(PMString& path) const = 0;
};

#endif	// __IFileDialogPaths__
