//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/Points.h $
//  
//  Owner: psorrick
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
#ifndef __Points__
#define __Points__

#include "CUnitOfMeasure.h"
#include "ScriptingDefs.h"

//========================================================================================
// CLASS Points
//========================================================================================
#pragma export on

class PUBLIC_DECL Points : public CUnitOfMeasure
{
public:
	Points(IPMUnknown *boss);
	virtual ~Points();

	// ----- Conversions
	virtual PMReal UnitsToPoints(const PMReal& units) const;
	virtual PMReal PointsToUnits(const PMReal& points) const;

	// ----- Formating and tokenization
	virtual void GetName(PMString * pName);
	virtual void Format(const PMReal& units, PMString& str, PMString *fractionalPortionString) const;
	virtual bool16 Parse(const PMString& str, PMReal& points, const bool16 alwaysUseEnglishAbbreviations);

	// ----- Rulers
	virtual RsrcSpec GetRulerSpecRsrcSpec() const;

	// ----- Flags
	virtual IUnitOfMeasure::UnitFlags GetUnitFlags() const;
	virtual ScriptID GetScriptID( const ScriptInfo::RequestContext& ) const { return en_MeasPoints ; }
};

#pragma export off


#endif
