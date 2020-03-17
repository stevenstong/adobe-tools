#if defined(__sun)
	#include "unicode/solaris/icuplatform.h"
#elif defined(__GNUC__) && defined(__hpux)
	#include "unicode/hpux-gcc/icuplatform.h"
#elif defined(__hpux)
	#include "unicode/hpux/icuplatform.h"
#elif defined(__GNUC__) && defined(_AIX)
	#include "unicode/aix-gcc/icuplatform.h"
#elif defined(_AIX)
	#include "unicode/aix/icuplatform.h"
#elif defined(__linux)
	#include "unicode/linux/icuplatform.h"
#elif defined(__MWERKS__) && defined(__APPLE__) && defined(__MACH__)
	#include "unicode/mac-mwcc/icuplatform.h"
#elif defined(__GNUC__) && defined(__APPLE__) && defined(__MACH__)
	#include "unicode/mac-gcc/icuplatform.h"
#elif defined(macintosh)
	#include "unicode/mac-mwpefcc/icuplatform.h"
#endif
