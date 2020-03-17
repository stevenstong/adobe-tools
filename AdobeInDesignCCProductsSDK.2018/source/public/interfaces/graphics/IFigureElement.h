//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/IFigureElement.h $
//  
//  Owner: Steve Flenniken
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
#ifndef __IFIGUREELEMENT__
#define __IFIGUREELEMENT__

#include "PDFID.h"

/**	The existence of this interface on a page item boss means the page item should be tagged as
	a PDF Figure when exporting to structured PDF.  This interface has no other purpose than
	to cause the PDF export code to "wrap" the page item in begin and end figure marks.
*/
class IFigureElement : public IPMUnknown
{
public:
	/** Default IID
	*/
	enum {kDefaultIID = IID_IFIGUREELEMENT};
};

#endif
