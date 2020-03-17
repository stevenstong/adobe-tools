//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/RealTimeMark.h $
//  
//  Owner: Steve Flenniken
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2018/03/06 12:15:34 $
//  
//  $Revision: #11 $
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
#ifndef __REALTIMEMARK__
#define __REALTIMEMARK__

#include "stdio.h"

#ifndef REALTIMEMARKS
	#ifdef BENCHMARK_ONLY
		#define REALTIMEMARKS BENCHMARK_ONLY
	#endif
#endif

#ifdef REALTIMEMARKS
class RUNTIME_DECL RealTimeMark
{
public:
	static void Initialize();
	static void DisplayTime(const char *string);
	static void Shutdown();

private:
#if WINDOWS
	static double ts_gRtmFrequency;
	static uint64 ts_gRtmStartTime;
//	static uint64 ts_gRtmLastTime;
	static FILE *ts_gRtmFile;
#elif MACINTOSH
	static UnsignedWide ts_gRtmStartTime;
    static int ts_gRtmFileDes;		//file Descriptor

	static double MicrosecondDifferenceToSeconds(UnsignedWide newTime, UnsignedWide oldTime);
	static void GetAndSetLastTime(UnsignedWide& lastTime, const UnsignedWide& currentTime);
#endif
};
#define RealTimeMarkInitialize() RealTimeMark::Initialize()

// Add this line to your code, when it executes the current
// time is written to the file RealTimeMark.csv which is
// in same folder as the exe.
#define RealTimeMark(string) RealTimeMark::DisplayTime(string)

#define RealTimeMarkShutdown() RealTimeMark::Shutdown()
#else
// when we turn benchmarks off, RealTimeMark will get turned off as well
#define RealTimeMarkInitialize()  
#define RealTimeMark(string) 
#define RealTimeMarkShutdown() 

#endif
#endif
