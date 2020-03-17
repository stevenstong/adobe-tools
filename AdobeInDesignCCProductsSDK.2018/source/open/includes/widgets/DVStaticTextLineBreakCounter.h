//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/includes/widgets/DVStaticTextLineBreakCounter.h $
//  
//  Owner: Rahul Jain
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2018/03/06 12:15:34 $
//  
//  $Revision: #10 $
//  
//  $Change: 1009641 $
//  
//  Copyright 1997-2002 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================


#pragma once
#ifndef __DVStaticTextLineBreakCounter__
#define __DVStaticTextLineBreakCounter__

#include "IStaticTextLineBreaker.h"
#include "HelperInterface.h"
#include "InterfaceFontInfo.h"
#include "PMReal.h"
#include "PMPoint.h"

#ifdef DV_WIDGET_BUILD
#pragma export on
#endif

class DV_WIDGET_DECL DVStaticTextLineBreakCounter : public IStaticTextLineBreaker
{
public:
	DVStaticTextLineBreakCounter(IPMUnknown *boss);
	virtual 			~DVStaticTextLineBreakCounter();

	virtual void CreateLineBreaks(const PMString& stringToBreak, const PMReal maxLineWidth, const InterfaceFontInfo& fontInfo);
	virtual PMString GetNthLine(int32 lineIndex) const;
	virtual PMPoint GetNthLineSize(int32 lineIndex) const;
	virtual int32 GetNumLines() const;
protected:
	int32				fLinesCount;
	DECLARE_HELPER_METHODS()
};

#pragma export off

#endif //__DVStaticTextLineBreakCounter__