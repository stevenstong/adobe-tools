//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/TextRange.h $
//  
//  Owner: zwilliam
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
//  
//  Purpose:
//  
//========================================================================================

#pragma once
#ifndef __TextRange__
#define __TextRange__


#include "ITextModel.h"
#include "ITextFocus.h"
#include "RangeData.h"
#include "UIDRef.h"

namespace InDesign {


class TextRange
{
	public:
   	typedef object_type data_type;

		TextRange() : fRange(0, RangeData::kLeanForward), fValid(kFalse)
			{}

		PUBLIC_DECL explicit TextRange(const ITextFocus * focus);

		PUBLIC_DECL TextRange(ITextModel * model, TextIndex start, int32 length, RangeData::Lean lean = RangeData::kLeanForward);
		PUBLIC_DECL TextRange(const UIDRef& modelRef, TextIndex start, int32 length, RangeData::Lean lean = RangeData::kLeanForward);
		PUBLIC_DECL TextRange(ITextModel * model, const RangeData& range);

		bool operator==(const TextRange&) const
			{ ASSERT_FAIL("appease K2Vector.Location"); return false; }

		PUBLIC_DECL ITextModel * QueryModel() const;
		UIDRef GetModelRef() const
			{ return fModel; }

		TextIndex Start() const
			{ return fValid ? fRange.Start(nil) : kInvalidTextIndex; }
		int32 Length() const
			{ return fValid ? fRange.Length() : 0; }
		TextIndex End() const
			{ return fValid ? fRange.End() : kInvalidTextIndex; }		// One off the end

		bool16 IsValid() const
			{ return fValid && fModel != nil; }

		const RangeData& GetRange() const
			{ return fRange; }

	private:
		UIDRef		fModel;
		RangeData	fRange;
		bool16		fValid;
};

}

#endif
