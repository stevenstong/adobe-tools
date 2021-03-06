//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/candlechart/CdlChartErrorStringService.cpp $
//  
//  Owner: Adobe Developer Technologies
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2017/03/10 00:54:55 $
//  
//  $Revision: #8 $
//  
//  $Change: 979292 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#include "VCPlugInHeaders.h"

// Interface includes:
// none.

// General includes:
#include "CErrorStringService.h"

// Project includes:
#include "CdlChartID.h"

/** From SDK sample; Provides error string service for CandleChart that 
	maps this plug-in's ErrorCode's to error strings defined in the 
	UserErrorTable ODFRez statement in CdlChart.fr.

	@ingroup candlechart
*/
class CdlChartErrorStringService : public CErrorStringService
{
public:
	/** Constructor; this is where we specify the pluginID and the resourceID for the 
		UserErrorTable resource that is associated with this implementation.
		@param boss interface pointer from boss object on which this interface is aggregated.
	 */
	CdlChartErrorStringService(IPMUnknown* boss):
		CErrorStringService(boss, kCdlChartPluginID, kSDKDefErrorStringResourceID) {}

	/** Destructor 
	 */
	virtual ~CdlChartErrorStringService(void) {}
};

/* Make the implementation available to the application.
*/
CREATE_PMINTERFACE(CdlChartErrorStringService, kCdlChartErrorStringServiceImpl)

// End, CdlChartErrorStringService.cpp.
