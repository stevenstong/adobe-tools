//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IInfoPanelAttributes.h $
//  
//  Owner: Yeming Liu
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
//  
//  Used to specify how info panel should be created.
//  
//========================================================================================

#pragma once
#ifndef __IInfoPanelAttributes__
#define __IInfoPanelAttributes__

/**
   Provides a mechanism to let InfoPalette know which panels should be loaded.
   With this interface, we provides a more generic way to build other palettes 
   similar to InfoPalette. Client can define its service id that its palette 
   are interested to load. This interface resides on kInfoPanelWidgetBoss.

*/
class IInfoPanelAttributes : public IPMUnknown
{
	public:

		/**
		   Get the service id that the InfoPalette is interested in.

		   @return ServiceID.
		*/
		virtual ServiceID	GetServiceID() const = 0;
};

#endif
