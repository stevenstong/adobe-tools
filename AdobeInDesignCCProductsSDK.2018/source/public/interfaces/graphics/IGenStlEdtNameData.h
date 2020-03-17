//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/IGenStlEdtNameData.h $
//  
//  Owner: Heath Lynn
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
#ifndef __IGenStlEdtNameData__
#define __IGenStlEdtNameData__

#include "IPMUnknown.h"

class IGenStlEdtNameData : public IPMUnknown
{

public:

	virtual PMIID GetStyleListIID() const = 0;
	virtual void SetStyleListIID( PMIID iid ) = 0;

	virtual int32 GetStyleListInex() const = 0;
	virtual void SetStyleListIndex( int32 index ) = 0;
		
	virtual const PMString & GetStyleName() const = 0;
	virtual void SetStyleName( const PMString & name ) = 0;

	virtual bool16 GetOKSelected() const = 0;
	virtual void SetOKSelected( bool16 selected ) = 0;

	virtual ClassID GetValidateNameBoss() const = 0;
	virtual void SetValidateNameBoss(ClassID validateNameBoss) = 0;
};

#endif
