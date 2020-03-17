//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/CCursorRegion.h $
//  
//  Owner: Dave Burnard
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

#pragma once
#ifndef __CCursorRegion__
#define __CCursorRegion__

#include "ICursorRegion.h"
#include "HelperInterface.h"

#pragma export on

/** Basic implementation of the ICursorRegion interface used for simple widgets.
		Implementors of ICursorRegion should either derive from either this or PanelCursorRegion.

		@see ICursorRegion, PanelCursorRegion
 */
class WIDGET_DECL CCursorRegion : public ICursorRegion
{
	public:
		CCursorRegion(IPMUnknown *boss);
		virtual ~CCursorRegion();

		/** Default implementation to remember the provider passed in. */
		virtual void SetCursorProvider(ICursorProvider* p);

		/** Default implementation to get the remembered provider passed in. */
		virtual ICursorProvider* GetCursorProvider() const;

	protected:
		ICursorProvider*	fCursorProvider;

	DECLARE_HELPER_METHODS()
};

#pragma export off

#endif
