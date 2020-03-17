//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/tables/ContentBossAccessor.h $
//  
//  Owner: ???
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
#ifndef __ContentBossAccessor__
#define __ContentBossAccessor__

#include "TablesID.h"
#include "ICellContent.h"

//----- Forward declrations
class VOSCursor;
class ICellContent;
class GridAddress;
class ITableModel;

//===================================================================================
// class ContentBossAccessor
//===================================================================================
class ContentBossAccessor
{
public:
	virtual ~ContentBossAccessor() {};
	virtual ICellContent*		QueryCellContentBoss(const GridAddress& anchor) const = 0;
	virtual const ITableModel*	QueryTableModel(void) const = 0;
};

#endif // __ContentBossAccessor__