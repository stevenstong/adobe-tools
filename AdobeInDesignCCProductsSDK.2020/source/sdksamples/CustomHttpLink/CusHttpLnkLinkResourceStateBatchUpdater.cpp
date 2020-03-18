//========================================================================================
//
//  $File: //depot/devtech/15.0/plugin/source/sdksamples/CustomHttpLink/CusHttpLnkLinkResourceStateBatchUpdater.cpp $
//
//  Owner: Adobe Developer Technologies
//
//  $Author: pmbuilder $
//
//  $DateTime: 2019/10/11 10:48:01 $
//
//  $Revision: #2 $
//
//  $Change: 1061132 $
//
//  ADOBE CONFIDENTIAL
//  
//  Copyright 2019 Adobe
//  All Rights Reserved.
//
//  NOTICE: Adobe permits you to use, modify, and distribute this file in
//  accordance with the terms of the Adobe license agreement accompanying
//  it. If you have received this file from a source other than Adobe,
//  then your use, modification, or distribution of it requires the prior
//  written permission of Adobe. 
//
//========================================================================================

#include "VCPlugInHeaders.h"
#include "CPMUnknown.h"

#include "CustomHttpLinkID.h"
#include "HTTPAssetLinkResourceStateBatchUpdater.h"

class CusHttpLnkLinkResourceStateBatchUpdater : HTTPAssetLinkResourceStateBatchUpdater
{
public:
	typedef HTTPAssetLinkResourceStateBatchUpdater inherited;
	CusHttpLnkLinkResourceStateBatchUpdater(IPMUnknown* boss);
	~CusHttpLnkLinkResourceStateBatchUpdater();
	
};

CREATE_PMINTERFACE(CusHttpLnkLinkResourceStateBatchUpdater, kCusHttpLnkLinkResourceStateBatchUpdaterImpl)

CusHttpLnkLinkResourceStateBatchUpdater::CusHttpLnkLinkResourceStateBatchUpdater(IPMUnknown* boss)
: inherited(boss)
{
}

CusHttpLnkLinkResourceStateBatchUpdater::~CusHttpLnkLinkResourceStateBatchUpdater()
{
}

