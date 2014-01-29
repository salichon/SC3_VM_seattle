#ifndef __SC_SYSTEM_CORE_API_H__
#define __SC_SYSTEM_CORE_API_H__

#if defined(WIN32) && (defined(SC_SYSTEM_CORE_SHARED) || defined(SC_ALL_SHARED))
# if defined(SC_SYSTEM_CORE_EXPORTS)
#  define SC_SYSTEM_CORE_API __declspec(dllexport)
#  define SC_SYSTEM_CORE_TEMPLATE_EXPORT
# else
#  define SC_SYSTEM_CORE_API __declspec(dllimport)
#  define SC_SYSTEM_CORE_TEMPLATE_EXPORT extern
# endif
#else
# define SC_SYSTEM_CORE_API
# define SC_SYSTEM_CORE_TEMPLATE_EXPORT
#endif

#endif
