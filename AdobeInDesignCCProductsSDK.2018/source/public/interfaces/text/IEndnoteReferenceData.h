//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/IEndnoteReferenceData.h $
//  
//  Owner: shagupta
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2018/03/06 12:15:34 $
//  
//  $Revision: #3 $
//  
//  $Change: 1009641 $
//  
//  ADOBE CONFIDENTIAL
//  
//  Copyright 2017 Adobe 
//  All Rights Reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in 
//  accordance with the terms of the Adobe license agreement accompanying 
//  it. If you have received this file from a source other than Adobe, 
//  then your use, modification, or distribution of it requires the prior 
//  written permission of Adobe.
//  
//========================================================================================

#pragma once

#include "IPMUnknown.h"
#include "IEndnoteTextRangeData.h"
#include "TextID.h"

/** This interface is used to access the endnote text details from an endnote reference.
@ingroup text_layout
*/
class IEndnoteReferenceData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IENDNOTEREFERENCEDATA};

	/**	INTERNAL USE: Set the UIDRef of the kEndnoteTextRangeBoss associated with the endnote.
	 */
	virtual void	SetEndnoteReferenceData(UIDRef endnoteRef) = 0;

	/** Get the reference counted IEndnoteTextRangeData pointer associated with the endnote text.
	 */
	virtual IEndnoteTextRangeData*		QueryEndnoteReference() const = 0;

	/** Get the UIDRef of the kEndnoteTextRangeBoss associated with the endnote
	*/
	virtual UIDRef	GetEndnoteRef() const = 0;
};

