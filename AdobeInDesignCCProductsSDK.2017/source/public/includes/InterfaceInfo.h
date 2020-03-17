//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/InterfaceInfo.h $
//  
//  Owner: Robin_Briggs
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
//  
//  Wraps interface information for a class.
//  
//========================================================================================

#pragma once
#ifndef __InterfaceInfo__
#define __InterfaceInfo__

#include "OMTypes.h"
#include "IPMStream.h"
#include "PersistBaseTypes.h"
#include "IPlugIn.h"

extern IPlugIn::ThreadingPolicy GetPluginThreadingPolicy(PluginID pluginID);

/** Wraps interface information for a class.
*/
class InterfaceInfo {
public: 
	typedef base_type data_type;
	
	InterfaceInfo() :
		fFaceID(IID_IUNKNOWN), fImplID(kInvalidImpl), fOwner(kInvalidPlugin), fIsAddin(kFalse), fOffset(0), fThreadingPolicy(IPlugIn::kUnknownThreadingPolicy)
	{
	}
	
	InterfaceInfo(PMIID faceID, ImplementationID implID, PluginID owner, bool isAddin, int32 offset) :
		fFaceID(faceID), fImplID(implID), fOwner(owner), fIsAddin(isAddin), fOffset(offset)
	{
		ASSERT_MSG(implID != kInvalidImpl,"Creating interfaceInfo with kInvalidImpl");
		fThreadingPolicy = ::GetPluginThreadingPolicy(fOwner);
	}
	
	PMIID GetInterface() const { return fFaceID; }
	ImplementationID GetImplementation() const { return fImplID; }
	PluginID GetOwnerComponent() const { return fOwner; }
	int32 GetOffset() const { return fOffset; }
	void SetOffset(int32 newOffset) { fOffset = newOffset; }
	bool IsAddin() const { return fIsAddin; }
	IPlugIn::ThreadingPolicy GetThreadingPolicy() const { return fThreadingPolicy; }
	void ReadWrite(IPMStream *s)
	{
		s->XferID(fFaceID);
		s->XferID(fImplID);
		s->XferID(fOwner);
		s->XferInt32(fOffset);
		s->XferEnum(fThreadingPolicy);
	}
	
private:
	PMIID fFaceID;
	ImplementationID fImplID;
	PluginID fOwner;			// ID of the plugin who added this interface to the boss.
	bool fIsAddin;
	int32 fOffset;
	IPlugIn::ThreadingPolicy fThreadingPolicy; // specifies if threading policy for this interface
};

// Persistence
namespace Persist
{
	template<>
	inline void Read<InterfaceInfo>(IPMStream* stream, InterfaceInfo& entry)
	{
		ASSERT (stream && stream->IsReading());
		entry.ReadWrite(stream);
	}
	
	template<>
	inline void Write<InterfaceInfo>(IPMStream* stream, const InterfaceInfo& entry)
	{
		ASSERT (stream && stream->IsWriting());
		const_cast<InterfaceInfo&>(entry).ReadWrite(stream);
	}
}


#endif // __InterfaceInfo__



