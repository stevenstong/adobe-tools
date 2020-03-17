//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/customactionfilter/ActionMapper.h $
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

#ifndef __ActionMapper_H__
#define __ActionMapper_H__
#include "K2Vector.tpp"
#include "K2Pair.h"

class ActionMapper{
protected:
	ActionMapper(){};

public:
	static ActionMapper* ActionMapperFactory();
	static void ActionMapperDestroy();
	~ActionMapper(){actionMapperPtr = nil;};
	void AddAction(ActionID actionID, ClassID classID);
	ClassID LookUpAction(ActionID actionID);
	int32 GetNumMaps() {return action2ClassMapping.Length();}
	K2Pair<ActionID, ClassID> GetNthActionClassPair(int32 location){return action2ClassMapping[location];};
	void ClearMap() {action2ClassMapping.clear();};
private:
	K2Vector<K2Pair<ActionID, ClassID> > action2ClassMapping;
	static ActionMapper* actionMapperPtr;
};




#endif // __ActionMapper_H__