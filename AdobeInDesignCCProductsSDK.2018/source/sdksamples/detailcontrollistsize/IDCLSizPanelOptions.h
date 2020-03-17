//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/detailcontrollistsize/IDCLSizPanelOptions.h $
//  
//  Owner: Adobe Developer Technologies
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

#ifndef __IDCLSizPanelOptions_h__
#define __IDCLSizPanelOptions_h__

#include "DCLSizID.h"
class PMString;
class IPMUnknown;

/**	From SDK sample; data interface that stores a bool16 value. True means to use large lisr size.

	@ingroup detailcontrollistsize
	
*/
class IDCLSizPanelOptions : public IPMUnknown
{
public:
	enum	{kDefaultIID = IID_IDCLSizPanelOptions};

	/** Set the bool value. 
	 */
	virtual void	Set(const bool16 value) = 0;

	/** Get the bool value.
	 */
	virtual const bool16	Get() = 0;
};

#endif // __IDCLSizPanelOptions_h__

// End, IDCLSizPanelOptions.h.


