//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/customdatalink/CusDtLnkRespServiceProvider.cpp $
//  
//  Owner: Adobe Developer Technologies
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2018/03/06 12:15:34 $
//  
//  $Revision: #5 $
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

#include "VCPlugInHeaders.h"


// Interface includes:

// Implementation includes:
#include "CServiceProvider.h"
#include "LinksID.h"
#include "CusDtLnkID.h"


/** Implements IK2ServiceProvider based on
	the partial implementation CServiceProvider.


	@ingroup customdatalink
	
*/
class CusDtLnkRespServiceProvider : public CServiceProvider
{
	public:

		/** Constructor 
			@param boss interface ptr from boss object on which interface is aggregated.
		*/
		CusDtLnkRespServiceProvider(IPMUnknown* boss);
		
		/**
			Destructor.  
		*/
		virtual	~CusDtLnkRespServiceProvider();

		/** See IK2ServiceProvider::GetName
		*/
		virtual void GetName(PMString* pName);

		/** See IK2ServiceProvider::GetServiceID
		*/
		virtual ServiceID GetServiceID();

		/** See IK2ServiceProvider::IsDefaultServiceProvider
		*/
		virtual bool16 IsDefaultServiceProvider();
		
		/** See IK2ServiceProvider::GetInstantiationPolicy
		*/
		virtual InstancePerX GetInstantiationPolicy();

		/** See IK2ServiceProvider::HasMultipleIDs
		*/
		virtual bool16 HasMultipleIDs() const;

		/** See IK2ServiceProvider::GetServiceIDs
		*/
		virtual void GetServiceIDs(K2Vector<ServiceID>& serviceIDs);

	private:

		K2Vector<ServiceID> fServices;
};


/* CREATE_PMINTERFACE
 Binds the C++ implementation class onto its ImplementationID 
 making the C++ code callable by the application.
*/
CREATE_PMINTERFACE(CusDtLnkRespServiceProvider, kCusDtLnkRespServiceProviderImpl)


/* CusDtLnkActionComponent Constructor
*/
CusDtLnkRespServiceProvider::CusDtLnkRespServiceProvider(IPMUnknown* boss)
	: CServiceProvider(boss)
{
	//	kAddLinkCmdBoss
	fServices.push_back(kBeforeAddLinkSignalResponderService);
	fServices.push_back(kAfterAddLinkSignalResponderService);
	//	kAddExtraLinkCmdBoss
	fServices.push_back(kBeforeAddExtraLinkSignalResponderService);
	fServices.push_back(kAfterAddExtraLinkSignalResponderService);
	// kAttachDataLinkCmdBoss
	fServices.push_back(kBeforeAttachDataLinkSignalResponderService);
	fServices.push_back(kAfterAttachDataLinkSignalResponderService);
	//	kRemoveLinksCmdBoss
	fServices.push_back(kBeforeRemoveLinksSignalResponderService);
	fServices.push_back(kAfterRemoveLinksSignalResponderService);
	//	kRestoreLinkCmdBoss
	fServices.push_back(kBeforeRestoreLinkSignalResponderService);
	fServices.push_back(kAfterRestoreLinkSignalResponderService);
	//	kUpdateLinkCmdBoss
	fServices.push_back(kBeforeUpdateLinkSignalResponderService);
	fServices.push_back(kAfterUpdateLinkSignalResponderService);
	//	kAddEmbedCmdBoss
	fServices.push_back(kBeforeAddEmbedSignalResponderService);
	fServices.push_back(kAfterAddEmbedSignalResponderService);
	//	kRemoveEmbedCmdBoss
	fServices.push_back(kBeforeRemoveEmbedSignalResponderService);
	fServices.push_back(kAfterRemoveEmbedSignalResponderService);
}

/* CusDtLnkActionComponent Dtor
*/
CusDtLnkRespServiceProvider::~CusDtLnkRespServiceProvider()
{
}

/* GetName
*/
void CusDtLnkRespServiceProvider::GetName(PMString* pName)
{
	ASSERT_UNIMPLEMENTED();
}

/* GetServiceID
*/
ServiceID CusDtLnkRespServiceProvider::GetServiceID() 
{
	return fServices.size() > 0 ? fServices[0] : kInvalidService;
}

/* IsDefaultServiceProvider
*/
bool16 CusDtLnkRespServiceProvider::IsDefaultServiceProvider()
{
	return kFalse;
}

/* GetInstantiationPolicy
*/
IK2ServiceProvider::InstancePerX CusDtLnkRespServiceProvider::GetInstantiationPolicy()
{
	return IK2ServiceProvider::kInstancePerSession;
}

/* HasMultipleIDs
*/
bool16 CusDtLnkRespServiceProvider::HasMultipleIDs() const
{
	return kTrue;
}

/* GetServiceIDs
*/
void CusDtLnkRespServiceProvider::GetServiceIDs(K2Vector<ServiceID>& serviceIDs)
{
	std::copy(this->fServices.begin(), this->fServices.end(), std::back_inserter(serviceIDs));
}


//  Code generated by DollyXS code generator