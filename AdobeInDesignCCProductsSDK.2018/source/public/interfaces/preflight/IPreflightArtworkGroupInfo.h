//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/preflight/IPreflightArtworkGroupInfo.h $
//  
//  Owner: Matt Phillips
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

#include "IPMUnknown.h"
#include "PackageAndPreflightID.h"

/**	This interface provides information about a group node in a preflight artwork tree.
	Note that this isn't the same thing as an ID group object; it includes stuff like
	transparency groups, logical groups, content markup groups, etc.
*/
class IPreflightArtworkGroupInfo : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IPREFLIGHTARTWORKGROUPINFO };

public:
};

