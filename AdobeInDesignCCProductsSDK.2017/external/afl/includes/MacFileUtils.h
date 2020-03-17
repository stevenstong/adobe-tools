//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/external/afl/includes/MacFileUtils.h $
//  
//  Owner: Michael Easter
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2017/03/10 00:54:55 $
//  
//  $Revision: #9 $
//  
//  $Change: 979292 $
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
#ifndef __MacFileUtils__
#define __MacFileUtils__

// ----- Includes -----
#include <CoreServices/CoreServices.h>
#include "AFLDecl.h"
#include "AFile.h"
#include "AString.h"
#include "ATypes.h"

namespace adobe {
namespace afl {

/**
 Macintosh specific utility class used to manipulate and obtain information
 for files and directories.
 @see AFile
 */
class AFL_DECL MacFileUtils
{
public:
	/**
	 Returns the parent directory identifier of the specified file.
	 @param file	IN AFile object to get the parent directory identifier from.
					   The file's parent path must exist.
	 @return The parent directory identifier of the file. 
			 0 if the parent directory identifier cannot be obtained.
	 */
	static uint32 GetParentDirId(const AFile& file);

	/**
	 Returns the node identifier of the specified file.
	 @param file	IN AFile object to get the node identifier from.
					   The file must exist.
	 @return The node identifier of the file. 
			 0 if the node identifier cannot be obtained.
	 */
	static uint32 GetNodeId(const AFile& file);

	/**
	 Converts an AFile object to an FSRef.
	 @param file	IN AFile object to convert.
					   The file must exist.
	 @param fsRef	OUT Resulting FSRef.
	 @return System noErr code if the conversion succeeds, else system error code. 
	 */
	static AOSErr AFileToFSRef(const AFile& file, FSRef& fsRef);

	/**
	 Converts an FSRef to an AFile object.
	 @param fsRef	IN FSRef to convert.
	 @param file	OUT Resulting AFile object.
	 @return System noErr code if the conversion succeeds, else system error code. 
	 */
	static AOSErr FSRefToAFile(const FSRef& fsRef, AFile& file);

	/**
	 Converts file system specification information to an AFile object.
	 @param dirRef	IN FSRef to the parent directory of the file.
	 @param name	IN Name of the file or an empty string.
	 @param file	OUT Resulting AFile object.
	 @return System noErr code if the conversion succeeds and the file exists.\\
			 System fnfErr code if the conversion succeeds and the file doesn't exist.\\
			 Otherwise, the system error code.
	 */
	static AOSErr RefInfoToAFile(const FSRef& dirRef, const AString& name, AFile& file);

	/**
	 Converts an AFile object to an CFURLRef.
	 @param file	IN AFile object to convert.
	 @param urlRef	OUT Resulting CFURLRef.
	 @return True if the conversion succeeds, else false. 
	 */
	static bool AFileToCFURLRef(const AFile& file, CFURLRef& urlRef);

	/**
	 Converts an AFile object to an CFURLRef.
	 @param file	IN AFile object to convert.
	 @return Reference to a CFURL object if successfull, else NULL.\\
			 Caller is responsible for releasing the returned CFURLRef. 
	 */
	static CFURLRef AFileToCFURLRef(const AFile& file);

	/**
	 Converts an CFURLRef to an AFile object.
	 @param urlRef	IN CFURLRef to convert.
	 @param file	OUT Resulting AFile object.
	 @return True if the conversion succeeds, else false. 
	 */
	static bool CFURLRefToAFile(const CFURLRef& urlRef, AFile& file);

	/**
	 Gets the creator and type of the file.
	 @param file	IN File to get the creator and type from.
	 @param creator	OUT Creator of the file.
						Returns '    ' if not set.
	 @param type	OUT Type of the file.
						Returns '    ' if not set.
	 @return True if the creator and type were obtained, else false. 
	 */
	static bool GetCreatorAndType(const AFile& file, OSType& creator, OSType& type);

	/**
	 Sets the creator and type of the file.
	 @param file	IN File to set the creator and type for.
	 @param creator	IN Creator of the file.
	 @param type	IN Type of the file.
	 @return True if the creator and type were set, else false. 
	 */
	static bool SetCreatorAndType(AFile& file, OSType creator, OSType type);

	/**
	 Converts a UTCDateTime to an ATime.
	 @param utcTime	IN UTCDateTime to convert.\\
					   The first 48 bits represent the number of seconds since 1904 (UTC).
					   The remaining 16 bits are used to indicate a fractional seconds value,
					   which has no inherent precision. Each unit of this 16-bit value
					   represents 1/65535 of a second.
	 @return Resulting ATime; 0 if ATime is invalid.\\
			 The time measured in 100-nanosecond intervals since January 1, 1601 (UTC). 
	 */
	static ATime UTCDateTimeToATime(UTCDateTime& utcTime);

	/**
	 Converts an ATime to a UTCDateTime.
	 @param time	IN ATime to convert.\\
					   The time measured in 100-nanosecond intervals since January 1, 1601 (UTC).
	 @return Resulting UTCDateTime.\\
			 The first 48 bits represent the number of seconds since 1904 (UTC).
			 The remaining 16 bits are used to indicate a fractional seconds value,
			 which has no inherent precision. Each unit of this 16-bit value
			 represents 1/65535 of a second.
	 */
	static UTCDateTime ATimeToUTCDateTime(ATime time);

	/**
	 Performs an inplace conversion of a HFS file or folder name to a POSIX name.
	 @param name	IN File or folder name to convert.
	 */
	static void HFSNameToPOSIXName(AString& name);

	/**
	 Performs an inplace conversion of a POSIX file or folder name to a HFS name.
	 @param name	IN File or folder name to convert.
	 */
	static void POSIXNameToHFSName(AString& name);

	/**
	 Performs a form D string normalization (canonical decomposition)
	 of the given file's UTF16 path.
	 @param file	IN File object whose path to decompose.
	 */
	static void DecomposePath(AFile& file);

	/**
	 Performs an inplace form D string normalization (canonical decomposition)
	 on the given UTF16 path string.
	 @param path	IN Path string to decompose.
	 */
	static void DecomposePath(AString& path);
    
    
    /**
    Checks if an AFile is a package or not.
    @param file	IN AFile to check.
    The file must exist.
    @return true if the AFile is a package else false.
    */
    static bool IsPackage(const AFile& file);
    
    
	/**
	 Converts an AFile object to an CFURLRef with symlinks resolved.
	 @param file	IN AFile object to convert.
	 @param urlRef	OUT Resulting CFURLRef.
	 @return True if the conversion succeeds, else false.
	 */
	static bool AFileToCFURLRefWithResolvedSymLinks(const AFile& file, CFURLRef& urlRef);

	/**
	 Converts an AFile object to an CFURLRef with symlinks resolved.
	 @param file	IN AFile object to convert.
	 @return Reference to a CFURL object if successfull, else NULL.\\
     Caller is responsible for releasing the returned CFURLRef.
	 */
	static CFURLRef AFileToCFURLRefWithResolvedSymLinks(const AFile& file);
    
    /**
     Checks if an AFile is a directory or directory alias - used by RunStartupScripts and optimizes away cost of checking locked flag.
     @param file	IN AFile to check.
     @return true if the AFile is a directory or directory alias else false.
     */
    static bool CheckIfDirectoryOrDirAlias(const AFile& file);
    
    
};

}	// namespace afl
}	// namespace adobe

#endif	// __MacFileUtils__
