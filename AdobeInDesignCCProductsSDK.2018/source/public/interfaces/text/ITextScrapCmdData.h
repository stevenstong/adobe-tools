//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/ITextScrapCmdData.h $
//  
//  Owner: Michael Burbidge
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
#ifndef __ITEXTSCRAPCMDDATA__
#define __ITEXTSCRAPCMDDATA__

#include "IPMUnknown.h"
#include "CommandID.h"

class ITextFocus;
class IDataExchangeHandler;

//========================================================================================
// CLASS ITextScrapCmdData
//========================================================================================

/** 
	@ingroup text_other
*/
class ITextScrapCmdData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ITEXTSCRAPCMDDATA };
	
	virtual void			Set(ITextFocus* focus, IDataExchangeHandler* destinationHandler) = 0;
	virtual ITextFocus*		GetTextFocus() const = 0;
	
	// Commands often need access to the dataHandler that will be the target of a copy-to-scrap command.
	// but the lifetime data handlers is very short because we revert scrap databases frequently.
	// ReleaseDestinationHandler should be called soon after the command has completed,
	// and definitely before the affected scrap gets reverted.
	virtual void ReleaseDestinationHandler() = 0;
	virtual IDataExchangeHandler*	GetDestinationHandler() const = 0;	
};


#endif

