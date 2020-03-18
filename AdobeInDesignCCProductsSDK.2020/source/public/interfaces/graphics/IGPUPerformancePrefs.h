//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/public/interfaces/graphics/IGPUPerformancePrefs.h $
//  
//  Owner: Manish Jangir
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2019/10/11 10:48:01 $
//  
//  $Revision: #2 $
//  
//  $Change: 1061132 $
//  
//  ADOBE CONFIDENTIAL
//  
//  Copyright 2019 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  All information contained herein is, and remains
//  the property of Adobe Systems Incorporated and its suppliers,
//  if any.  The intellectual and technical concepts contained
//  herein are proprietary to Adobe Systems Incorporated and its
//  suppliers and may be covered by U.S. and Foreign Patents,
//  patents in process, and are protected by trade secret or copyright law.
//  Dissemination of this information or reproduction of this material
//  is strictly forbidden unless prior written permission is obtained
//  from Adobe Systems Incorporated.
//  
//========================================================================================

#ifndef __IGPUPerformancePanelPreferences__
#define __IGPUPerformancePanelPreferences__


#include "IPMUnknown.h"
#include "PerformanceUIID.h"


/**
	Preferences for the GPU Performance Panel.
*/
class IGPUPerformancePrefs : public IPMUnknown 
{

public:
	enum { kDefaultIID = IID_IGPUPERFORMANCEPREFERENCES };

	/**
	Returns kTrue if GPU Performance is enabled. Returns kFalse otherwise.
	
	*/
	virtual bool16 GetEnableGPUPerformance() const = 0;

	/**
	Returns kTrue if Animated Zoom preference is enabled. Returns kFalse otherwise.

	Please use GetEnableGPUPerformance() && GetEnableAnimatedZoom() when you need to know if Animated zoom preference is set and will be effective as animated zoom works only when GPU performance is enabled.
	*/
	virtual bool16 GetEnableAnimatedZoom() const = 0;

	/**
	*/
	virtual bool16 GetEnhanceThinLines() const = 0;

	/**
	FOR INTERNAL USE ONLY. 
	*/
	virtual void SetEnableGPUPerformance( bool16 enable) = 0;

	/**
	FOR INTERNAL USE ONLY. 
	*/
	virtual void SetEnableAnimatedZoom( bool16 enable) = 0;

	/**
	FOR INTERNAL USE ONLY. 
	*/
	virtual void SetEnhanceThinLines( bool16 enable) = 0;

	/**
	FOR INTERNAL USE ONLY. 
	*/
	virtual void CopyFrom(IGPUPerformancePrefs* sourceGPUPrefs) = 0;
};


#endif	// __IGPUPerformancePanelPreferences__