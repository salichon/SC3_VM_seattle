#ifndef __SC_VS_API_H__
#define __SC_VS_API_H__

#if defined(WIN32) && (defined(SC_VS_SHARED) || defined(SC_ALL_SHARED))
# if defined(SC_VS_EXPORTS)
#  define SC_VS_API __declspec(dllexport)
#  define SC_VS_TEMPLATE_EXPORT
# else
#  define SC_VS_API __declspec(dllimport)
#  define SC_VS_TEMPLATE_EXPORT extern
# endif
#else
# define SC_VS_API
# define SC_VS_TEMPLATE_EXPORT
#endif

#endif
