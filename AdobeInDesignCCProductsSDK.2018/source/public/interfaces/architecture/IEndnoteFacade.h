//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IEndnoteFacade.h $
//  
//  Owner: Abhishek Raj
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2018/03/06 12:15:34 $
//  
//  $Revision: #9 $
//  
//  $Change: 1009641 $
//  
//  ADOBE CONFIDENTIAL
//  
//  Copyright 2017 Adobe 
//  All Rights Reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in 
//  accordance with the terms of the Adobe license agreement accompanying 
//  it. If you have received this file from a source other than Adobe, 
//  then your use, modification, or distribution of it requires the prior 
//  written permission of Adobe.
//  
//========================================================================================

#pragma once
#ifndef __IEndnoteFacade__
#define __IEndnoteFacade__

#include "IPMUnknown.h"

#include "IEndnoteSettings.h"

namespace Facade
{
    /** A high level API for dealing with Endnotes.  To use this Facade, include
        this header file and the use the following example syntax:
        Utils<IEndnoteFacade>()->SetTitle( ... );

		@note See IEndnoteSettings for descriptions of these methods as this is a mirror interface to that.
	*/
    class IEndnoteFacade : public IPMUnknown
    {
    public:
        enum { kDefaultIID = IID_IENDNOTEFACADE };

		/** See IEndnoteSettings
		*/
		virtual WideString GetTitle(IEndnoteSettings* target) const = 0;
		virtual void SetTitle(IEndnoteSettings* target, WideString title) = 0;

		/** See IEndnoteSettings
		*/
		virtual UID GetHeaderParaStyle(IEndnoteSettings* target) const = 0;
		virtual void SetHeaderParaStyle(IEndnoteSettings* target, UID styleID) = 0;
		
		/** See IEndnoteSettings
		*/
		virtual IEndnoteSettings::RestartNumberingOptions GetRestartOption(IEndnoteSettings* target) const = 0;
		virtual void SetRestartOption(IEndnoteSettings* target, IEndnoteSettings::RestartNumberingOptions option) = 0;

		/** See IEndnoteSettings
		*/
		virtual int32 GetStartingNumber(IEndnoteSettings* target) const = 0;
		virtual void SetStartingNumber(IEndnoteSettings* target, int32 n) = 0;

		/** See IEndnoteSettings
		*/
		virtual ClassID GetNumberingMethod(IEndnoteSettings* target) const = 0;
		virtual void SetNumberingMethod(IEndnoteSettings* target, ClassID whichMethod) = 0;

		/** See IEndnoteSettings
		*/
		virtual IEndnoteSettings::MarkerPositionOptions GetMarkerPositioning(IEndnoteSettings* target) const = 0;
		virtual void SetMarkerPositioning(IEndnoteSettings* target, IEndnoteSettings::MarkerPositionOptions option) = 0;

		/** See IEndnoteSettings
		*/
		virtual UID GetMarkerStyle(IEndnoteSettings* target) const = 0;
		virtual void SetMarkerStyle(IEndnoteSettings* target, UID styleID) = 0;

		/** See IEndnoteSettings
		*/
		virtual UID GetEndnoteParagraphStyle(IEndnoteSettings* target) const = 0;
		virtual void SetEndnoteParagraphStyle(IEndnoteSettings* target, UID s) = 0;

		/** See IEndnoteSettings
		*/
		virtual const WideString& GetEndnoteSeparator(IEndnoteSettings* target) const = 0;
		virtual void  SetEndnoteSeparator(IEndnoteSettings* target, const WideString& sep) = 0;

		/** See IEndnoteSettings
		*/
		virtual IEndnoteSettings::Scope GetScope(IEndnoteSettings* target) const = 0;
		virtual void SetScope(IEndnoteSettings* target, IEndnoteSettings::Scope scope) = 0;

		/** See IEndnoteSettings
		*/
		virtual IEndnoteSettings::Place GetPlace(IEndnoteSettings* target) const = 0;
		virtual void SetPlace(IEndnoteSettings* target, IEndnoteSettings::Place place) = 0;

		/** See IEndnoteSettings
		*/
		virtual const WideString& GetMarkerPrefix(IEndnoteSettings* target) const = 0;
		virtual void SetMarkerPrefix(IEndnoteSettings* target, const WideString& pre) = 0;

		/** See IEndnoteSettings
		*/
		virtual const WideString& GetMarkerSuffix(IEndnoteSettings* target) const = 0;
		virtual void SetMarkerSuffix(IEndnoteSettings* target, const WideString& suf) = 0;

		/** See IEndnoteSettings
		*/
		virtual IEndnoteSettings::SuffixPrefixUsageOptions GetPrefixSuffixUsage(IEndnoteSettings* target) const = 0;
		virtual void SetPrefixSuffixUsage(IEndnoteSettings* target, IEndnoteSettings::SuffixPrefixUsageOptions options) = 0;

		/** See IEndnoteSettings
		*/
		virtual void SetAllSettings(IEndnoteSettings* target, const IEndnoteSettings::EndnotePrefs* settings) = 0;

};
}  // namespace Facade

#endif	// __IEndnoteFacade__
