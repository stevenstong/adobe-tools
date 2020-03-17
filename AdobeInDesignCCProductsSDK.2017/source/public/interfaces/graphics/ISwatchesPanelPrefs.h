//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/ISwatchesPanelPrefs.h $
//  
//  Owner: SusanCL
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2017/03/10 00:54:55 $
//  
//  $Revision: #9 $
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

#pragma once
#ifndef __ISwatchesPanelPrefs__
#define __ISwatchesPanelPrefs__

#include "IPMUnknown.h"
#include "IControlView.h"
#include "SwatchesPanelID.h"

/**	A data interface on the main swatch list palette.
	This interface specifies how the swatches palette should be shown.
*/
class ISwatchesPanelPrefs : public IPMUnknown {
public:
	enum { kDefaultIID = IID_ISWATCHESPANELPREFS };

	/**	Sets the active view filter class.
		@param theState specifies the new active view filter classID.
		This should be kInvalidClass, kPMColorBoss, kGradientRenderingObjectBoss, or kColorGroupBoss.
	*/
	virtual void SetActiveOptionClassID(const ClassID& theState) = 0;
	/**	Returns the current active view filter class.
	*/
	virtual ClassID GetActiveOptionClassID() const = 0;
	
	/**	Sets the current view preference for the panel.
		@param the theRenderClass specifies the current view filter.
		@param theState specifies either list style widget ID or the grid style widget ID.
	*/
	virtual void SetPrefs(const ClassID& theRenderClass, const WidgetID& theState) = 0;

	/**	Returns the view preference for the specified view filter.
		@param the theRenderClass specifies the view filter.
		@return the widgetID associated with this view filter.
	*/
	virtual WidgetID GetPrefs( const ClassID& theRenderClass ) const = 0;
};


#endif // __ISwatchesPanelPrefs__
