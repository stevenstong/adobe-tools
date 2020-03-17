//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/ui/IWidgetParent.h $
//  
//  Owner: Frits Habermann
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
#ifndef __IWidgetParent__
#define __IWidgetParent__

#include "IPMUnknown.h"
#include "widgetid.h"

/** Interface to allow traversing widget hierarchy.
*/
class IWidgetParent : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_IWIDGETPARENT };

	/** Do QueryInterface up the hierarchy until the interfaceID is found, or 
		until the root node is reached.
		@return reference-incremented ptr to interface with given identifier, or nil if it can't be found
	*/
	virtual IPMUnknown *QueryParentFor(const PMIID& interfaceID) const = 0;
	 

	/** Accessor for parent of widget
		@return interface ptr of parent 
	*/
	virtual IPMUnknown *GetParent() const = 0;

	/** Query for parent of given widget.
		@return reference-incremented interface ptr of parent 
	*/
	virtual IPMUnknown *QueryParent() const = 0;

	/**	Specify a new parent for given widget.
		@param parent new parent
	*/
	virtual void SetParent(IPMUnknown *parent) = 0;
};

#endif