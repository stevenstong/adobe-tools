//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/toolhintspanel/src/ToolHints.jsx $
//  
//  Owner: ???
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
//  ActionScript file
//  
//========================================================================================

function ExtendScript_init( initScript ) 
{
	try
	{
		return eval( unescape( initScript ) );
	} 
	catch( e )
	{
		alert( "Error (" + e.num + ") in file '" + e.fileName + "', line " +  e.line + ":\n" + e.message );
	}
}

function addListeners() 
{
	app.toolBoxTools.addEventListener( 'afterAttributeChanged', onAttrMsg );
}

function onAttrMsg(event)
{
	csxsapp.getToolInfo();   
}
	 
 
// called by the init() method in the SWF file
function registerAppObject(appObj) {
    csxsapp = appObj;
}

