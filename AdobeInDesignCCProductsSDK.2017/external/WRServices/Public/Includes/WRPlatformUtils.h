//========================================================================================
//
//	File:	WRPlatformUtils.h
//
//	Author: Michel hutinel
//
//	Date:	09/07/00
//
//  Copyright 1988 - 2005 WinSoft SA. All rights reserved.
//  Usage rights licenced to Adobe Inc. 1993 - 2005.
//
//========================================================================================

#ifndef __WRPLATFORMUTILS_
#define __WRPLATFORMUTILS_

#include "WRConfig.h"
#include "WRDefines.h"
#include "WRClass.h"
#include "OptycaTypes.h"

#ifdef WR_MAC_ENV
#pragma options align=power
#include <Carbon/Carbon.h>
#endif

class WRMutex;
class IWRMultiProcessing;

class WRSERVICES_DECL WRPlatformUtils : public WRClass
{
public:
	WRPlatformUtils();
	~WRPlatformUtils();

	static WRScriptID	GetSystemScript(WRBool pseudoScript = true);
	static WRScriptID	GetSystemBaseMacScript();
	static WRScriptID	GetApplicationScript();
	static WRCodePage	GetApplicationCodePage();
	static WRCodePage	GetSystemCodePage();
	static WRLanguageID	GetSystemLanguage();

	static WRCodePage	ScriptToMacCodePage(WRScriptID script);
	static WRCodePage	ScriptToWinCodePage(WRScriptID script);
	static WRCodePage	ScriptToISOCodePage(WRScriptID script);
#ifdef WR_MAC_ENV
	static WRCodePage	ScriptToCodePage(WRScriptID script) { return ScriptToMacCodePage(script); }
#elif defined(WR_WIN_ENV)
	static WRCodePage	ScriptToCodePage(WRScriptID script) { return ScriptToWinCodePage(script); }
#elif defined(WR_UNIX_ENV)
	static WRCodePage	ScriptToCodePage(WRScriptID script) { return ScriptToISOCodePage(script); }
#else
#	error platform not supported
#endif
	static WRWindowsCharset		ScriptToCharset(WRScriptID script);

	static WRScriptID	CodePageToScript(WRCodePage cp);
	static WRFontDict*	FindFontByScript(WRScriptID script);
	static WRFontDict*	FindFontByCodePage(WRCodePage codepage);

	static WRCodePage	CharsetToCodePage(WRWindowsCharset cs);
	static WRScriptID	CharsetToScript(WRWindowsCharset cs);

	static WRScriptID	RealToPseudoScript(WRScriptID);
	static WRScriptID	PseudoToRealScript(WRScriptID);
	static WRScriptID	RealMacScriptToPseudoScript(WRScriptID);

	static WRScriptID	LanguageToScript(WRLanguageID langID);
	static WRScriptID	LanguageToShapingScript(WRLanguageID langID);
	static bool			IsRTLScript(WRScriptID script);
	static WRCodePage	LanguageToCodePage(WRLanguageID langID);

	static WRDigitSet	LanguageToDigitSet(const WRLanguageID langID,const bool bUseNative);

	typedef struct 
	{	
		WRUnichar16 fStart;
		WRUnichar16 fEnd;
		WRUnichar16 fMask;	
	} BestEncodingEntry;

	static WRCodePage	GetBestCodePage(const WRUnichar16* unicodeString, WRInt32 length);
	
#ifdef WR_MAC_ENV
	static bool			IsAquaInterface();
	static WRCodePage	MacintoshTextEncodingToWRCodePage(TextEncoding txtEnc);
	static unsigned short GetMacPrimaryLanguage();
	static WRLanguageID MacLanguageToWRLanguageID(unsigned short);
#elif defined(WR_WIN_ENV)
	static WRLanguageID	LANGIDToWRLanguageID(unsigned short langID);
#elif defined(WR_UNIX_ENV)
#	ifdef __GNUC__
//#		warning [LINUX_TODO] no function to set WRLanguageID 
#	endif
#else
#	error platform not supported
#endif
	static WRScriptID	GetMainNonRomanScript();

	static WRClientType	GetClientType() { return fClientType; }
	static void			SetClientType(WRClientType type) { fClientType = type; }
	static WRClientArea	GetClientArea() { return fClientArea; }
	static void			SetClientArea(WRClientArea area) { fClientArea = area; }
	static void			Init(IWRMultiProcessing* multi);
	static void			Term();


private:
	static void			Initialize();

	static WRCodePage	GetCodesPageMaskFromUnicodeString(const WRUnichar16* unicodeString, WRInt32 length, WRUnichar16* maskCodePage);
	static WRCodePage	GetCodePageFromMask(WRUnichar16 maskCPs);
	static WRBool		GetCPsFromChar(WRUnichar16 ucsChar, WRUnichar16* maskCP);
	static WRBool		ProcessMask(WRUnichar16 * maskCpInOut, WRUnichar16 maskIn);
	static WRBool		GetCodePage(WRFontDict* fontDict, WRCodePage codepage);

	static WRBool		fIsInitialized;
	static WRBool		fIsInitializing;	// Recursivity control boolean
	static WRScriptID	fSystemScript;
	static WRScriptID	fApplicationScript;
	static WRCodePage	fApplicationCodePage;
	static WRCodePage	fSystemCodePage;
	static WRScriptID	fSystemMacBaseScript;
	static WRScriptID	fBaseScript;
#ifdef WR_MAC_ENV
	static bool			fIsAquaInterface;
#endif
	static WRScriptID	fMainNonRomanScript;
	static bool			fIsArabicEnabled;
	static bool			fIsHebrewEnabled;
	static WRLanguageID	fSystemLanguage;

	static WRClientType	fClientType;
	static WRClientArea	fClientArea;
	static IWRMultiProcessing* fMulti;
	static WRMutex*		fLock;
};

#ifdef WR_MAC_ENV
#pragma options align=reset
#endif

#endif //__WRPLATFORMUTILS_
