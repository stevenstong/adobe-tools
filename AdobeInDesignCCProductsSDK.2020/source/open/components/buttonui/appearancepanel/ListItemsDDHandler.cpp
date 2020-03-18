 //========================================================================================
 //  
 //  $File: //depot/devtech/15.0/plugin/source/open/components/buttonui/appearancepanel/ListItemsDDHandler.cpp $
 //  
 //  Owner: Reena Agrawal
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
 
 #include "VCPlugInHeaders.h"

 // ----- Includes -----
 
 #include "CDataExchangeHandlerFor.h"
 #include "PMFlavorTypes.h"
 
 // ----- ID.h files -----
 
 #include "FormFieldUIID.h"
 
 
 class ListItemsDDHandler : public CDataExchangeHandlerFor
 {
 public:
         ListItemsDDHandler(IPMUnknown *boss) : CDataExchangeHandlerFor(boss) {}
         virtual        ~ListItemsDDHandler() {}
 
         virtual        PMFlavor         GetFlavor() const { return kListItemsDragDropFlavor; }
 };

// =============================================================================
// *** ListItemsDDHandler impl ***
// -----------------------------------------------------------------------------

CREATE_PMINTERFACE(ListItemsDDHandler, kListItemsDDHandlerImpl)