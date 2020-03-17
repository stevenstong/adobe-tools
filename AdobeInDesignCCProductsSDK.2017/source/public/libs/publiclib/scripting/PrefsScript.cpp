//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/libs/publiclib/scripting/PrefsScript.cpp $
//  
//  Owner: Jonathan W. Brown
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

#include "VCPublicHeaders.h"
#include "PrefsScript.h"

#include "IIntData.h"

// Moved to PublicImpl.cpp
// CREATE_PMINTERFACE( PrefsScript, kPrefsScriptImpl )

PrefsScript::PrefsScript( IPMUnknown* boss ) :
	CProxyScript( boss )
{
}

PrefsScript::~PrefsScript()
{
}

ScriptObject PrefsScript::GetScriptObject( const RequestContext& context ) const
{
	//Return by property
	InterfacePtr<const IIntData> propData( this, IID_IINTDATA ) ;
	return ScriptObject( ScriptData( propData->GetInt() ), GetObjectType( context ), kFormPropertyID ) ;
}