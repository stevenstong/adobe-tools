//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/IGenStlEdtEditor.h $
//  
//  Owner: Matt Phillips
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

#pragma once
#ifndef __IGenStlEdtEditor__
#define __IGenStlEdtEditor__

class IGenStlEdtEditor : public IPMUnknown
{
public:
	// Invokes the edit-styles dialog.  The IID is a IGenericStyleListMgr-derived
	// interface sitting on the workspace.
	virtual bool32 EditStyles(PMIID listMgrIID) = 0;
};

#endif // __IGenStlEdtEditor__