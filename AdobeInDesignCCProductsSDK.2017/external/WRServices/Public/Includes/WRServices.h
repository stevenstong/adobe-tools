//========================================================================================
//  
//  File: WRServices.h
//  
//  Owner: Michel Hutinel
//  
//  Copyright 1988 - 2005 WinSoft SA. All rights reserved.
//  Usage rights licenced to Adobe Inc. 1993 - 2005.
//  
//========================================================================================

#ifndef __WRServices__
#define __WRServices__

#include "WRConfig.h"
#include "WRDefines.h"
#include "WRPath.h"

#ifdef WR_MAC_ENV
#pragma options align=power
#endif

class IWRFontAccess;
class IWRFontInfo;
class IWRFontCache;
class IWRFontContext;
class IWRMultiProcessing;
class IWROptycaPool;
class IWRClientSettings;

/* 
WRGetVersion 
*/
WRSERVICES_DECL WRUInt32 WRGetVersion();
/* 

WRInitialize 
*/
WRSERVICES_DECL WRInt32 WRServicesPreInitialize(WRMemObj* memObj);

WRSERVICES_DECL WRInt32 WRServicesInitialize(WRPath* fontDBPathWinSoft, WRPath* fontDBPathUser,
										  WRClientArea area = kWRAreaCEEA, WRClientType clientType = kWRTextOriented);

WRSERVICES_DECL void WRServicesSetFontContext(IWRFontContext* cntxt);
WRSERVICES_DECL IWRFontContext* WRServicesFontContext();
WRSERVICES_DECL IWRFontAccess* WRServicesFontAccess();
WRSERVICES_DECL IWRFontInfo* WRServicesFontInfo();
WRSERVICES_DECL IWRMultiProcessing* WRServicesMultiProcessing();
WRSERVICES_DECL IWRClientSettings* WRServicesSettings();
WRSERVICES_DECL WRUInt32 WRServicesGetClientCount();
WRSERVICES_DECL WRUInt32 WRServicesGetPreInitializeCount();
WRSERVICES_DECL void WRServicesSetMultiProcessing(IWRMultiProcessing* multi);
WRSERVICES_DECL void WRServicesSetFontAccess(IWRFontAccess* access);

/* 
WRServicesTerminate 
*/
WRSERVICES_DECL WRInt32	WRServicesTerminate ();

/* 
WRServicesPostTerminate 
*/
WRSERVICES_DECL WRInt32 WRServicesPostTerminate();

#ifdef WR_MAC_ENV
#pragma options align=reset
#endif

#endif /* WRServices */
