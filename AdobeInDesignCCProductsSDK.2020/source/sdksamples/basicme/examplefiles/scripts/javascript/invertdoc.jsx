//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/sdksamples/basicme/examplefiles/scripts/javascript/invertdoc.jsx $
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
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

main();

function main(){
	var myDocument = app.open(File("/c/ServerTestFiles/mesample.indd"));

	app.basicme.invertDocument(myDocument);
		
	myDocument.save(File("/c/ServerTestFiles/mesample.indd"));	
	myDocument.close();
}

 
