//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/basicpersistinterface/BPIFactoryList.h $
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
//  
//  Each C++ implementation class in the plug-in and its corresponding ImplementationID
//  should be registered in this file.
//  
//========================================================================================

REGISTER_PMINTERFACE(BPISetDataCmd, kBPISetDataCmdImpl)
REGISTER_PMINTERFACE(BPIData, kBPIDataPersistImpl)
REGISTER_PMINTERFACE(BPIData, kBPIDataImpl)
REGISTER_PMINTERFACE(BPISuiteASB, kBPISuiteASBImpl)
REGISTER_PMINTERFACE(BPISuiteLayoutCSB, kBPISuiteLayoutCSBImpl)
REGISTER_PMINTERFACE(BPIDefaultResponder, kBPIDefaultResponderImpl)
REGISTER_PMINTERFACE(SelectionExt<BPISuiteLayoutCSB>, kBPISuiteLayoutSelectionExtImpl)
REGISTER_PMINTERFACE(SelectionExt<BPISuiteTextCSB>, kBPISuiteTextSelectionExtImpl)
REGISTER_PMINTERFACE(SelectionExt<BPISuiteDefaultCSB>, kBPISuiteDefaultSelectionExtImpl)

REGISTER_PMINTERFACE(BPISuiteDefaultCSB, kBPISuiteDefaultCSBImpl)
REGISTER_PMINTERFACE(BPISuiteTextCSB, kBPISuiteTextCSBImpl)
REGISTER_PMINTERFACE(BPIErrorStringService, kBPIErrorStringServiceImpl)
REGISTER_PMINTERFACE(BPIScriptProvider, kBPIScriptProviderImpl)
REGISTER_PMINTERFACE(BPIPrefsScriptProvider, kBPIPrefsScriptProviderImpl)

//  Generated by Dolly build 11: template "IfPanelMenu".
// End, BPIFactoryList.h.



