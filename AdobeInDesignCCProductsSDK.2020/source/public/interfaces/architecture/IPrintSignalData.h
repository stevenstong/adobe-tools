//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/public/interfaces/architecture/IPrintSignalData.h $
//  
//  Owner: Ankur Mathur
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
#ifndef __IPrintSignalData_h__
#define __IPrintSignalData_h__

#include "IPMUnknown.h"
#include "PrintID.h"
#include "IPrintCmdData.h"

class IDocument ;

class IPrintSignalData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IPRINTSIGNALDATA };

	/** Set the document */
	virtual void			SetDocument(IDocument* document) = 0;
	/** Get the document */
	virtual IDocument*		GetDocument() const = 0;
	
	/** Set the UI flags */
	virtual void							SetPrintUIOptions(IPrintCmdData::PrintUIOptions uiOptions) = 0;
	/** Get the UI flags */
	virtual IPrintCmdData::PrintUIOptions	GetPrintUIOptions() const = 0;
};

#endif // __IPrintSignalData_h__
