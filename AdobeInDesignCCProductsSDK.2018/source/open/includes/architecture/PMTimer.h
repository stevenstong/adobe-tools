//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/includes/architecture/PMTimer.h $
//  
//  Owner: Frits Habermann
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
#ifndef __PMTimer__
#define __PMTimer__

#ifdef DEBUG

#pragma export on

class PUBLIC_DECL Timer
{
public:
	Timer(char *startString = nil, char *endString = nil);
		//Start timing an operation
	~Timer();
		//Stop timing an operation. Reports elapsed tick count to the debug window using Trace
private:
	int32	fElapsedTime;
	std::string	*fStartString, *fEndString;
};

#pragma export off

#endif		// DEBUG

#endif
