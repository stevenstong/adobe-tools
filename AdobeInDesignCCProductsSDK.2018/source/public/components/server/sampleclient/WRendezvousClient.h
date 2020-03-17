//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/components/server/sampleclient/WRendezvousClient.h $
//  
//  Owner: Peter Boctor
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

class RendezvousClient
{
	public:
	virtual void ListClients() {std::cerr << "Finding clients using Rendevous not supported on Windows yet!"; exit(1);}
	virtual char* FindClient(const char* clientName) {std::cerr << "Finding clients using Rendevous not supported on Windows yet!"; exit(1);}
};
