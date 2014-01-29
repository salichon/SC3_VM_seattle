#ifndef __SEISCOMP_CORE_PLATFORM_H__
#define __SEISCOMP_CORE_PLATFORM_H__

/* #undef MACOSX */
#define LINUX

#ifdef MACOSX
   #include <seiscomp3/core/platform/osx.h>
#endif

#endif
