/*-----------------------------------------------------------------------------
	Platform-specific type defines
-----------------------------------------------------------------------------*/

typedef unsigned char	byte;
typedef unsigned short	word;
typedef unsigned int	dword;
typedef unsigned __int64 qword;

typedef unsigned int	address_t;


// if windows.h is not included ...
#ifndef _WINDOWS_
#	define HANDLE		void*
#	define HINSTANCE	void*
#endif


#define LITTLE_ENDIAN

// this functions are smaller. when in intrinsic form (and, of course, faster):
#pragma intrinsic(memcpy, memset, memcmp, abs, fabs)

/*-----------------------------------------------------------------------------
	Miscellaneous
-----------------------------------------------------------------------------*/

#define DLL_IMPORT	__declspec(dllimport)
#define DLL_EXPORT	__declspec(dllexport)
#define NORETURN	__declspec(noreturn)

#define	GET_RETADDR(firstarg)	(* ( ((unsigned*)&firstarg) -1 ) )

#define vsnprintf _vsnprintf


// Package implementation
#define IMPLEMENT_PACKAGE(name,version,build,date)	\
	DLL_EXPORT extern const char GPackage[] = #name;\
	DLL_EXPORT extern const char PkgVersion[] = #name " version " STR(version) " build " STR(build) " (" date ")";\
	HINSTANCE hInstance;							\
	int __stdcall DllMain (HINSTANCE hInst, int Reason, void *Reserved)	\
	{ hInstance = hInst; return 1; }

//?? IMPLEMENT_MAIN_PACKAGE: declare GPackage/PkgVersion (non-export form !?), + macro (?) for registering main package
//?? Problem with non-export definitions: how to make sense of main/external package from core headers ? (make global predefined
//?? macro i.e. PRIMARY_PACKAGE -- in this case, can use single IMPLEMENT_PACKAGE macro for both cases)


//  disable some compiler warnings
#pragma warning(disable : 4018)			// signed/unsigned mismatch
#pragma warning(disable : 4291)			// no matched operator delete found
#pragma warning(disable : 4275)			// non dll-interface class used as base for dll-interface class
#pragma warning(disable : 4305)			// truncation from 'const double' to 'const float'
#pragma warning(disable : 4244)			// conversion from 'int'/'double' to 'float'


/*-----------------------------------------------------------------------------
	Some math functions
-----------------------------------------------------------------------------*/


inline int appRound (float f)
{
	int		i;

	__asm {
		fld		[f]
		fistp	[i]
	}
	return i;
}

// NOTE: when used 0.5 in floor/ceil functions, integral values
// will be rounded incorrectly (floor(1)=0,floor(2)=2;floor(3)=2 etc.)

inline int appFloor (float f)
{
	int		i;
	static const float h = 0.4999999;	// 0.5

	__asm {
		fld		[f]
		fsub	[h]
		fistp	[i]
	}
	return i;
}

inline int appCeil (float f)
{
	int		i;
	static const float h = 0.4999999;	// 0.5

	__asm {
		fld		[f]
		fadd	[h]
		fistp	[i]
	}
	return i;
}


/*-----------------------------------------------------------------------------
	guard/unguard macros
-----------------------------------------------------------------------------*/

#if !WIN32_USE_SEH

#define guard(func)					\
	{								\
		static const char __FUNC__[] = #func; \
		try {

#define unguard						\
		} catch (...) {				\
			appUnwindThrow (__FUNC__); \
		}							\
	}

#define unguardf(msg)				\
		} catch (...) {				\
			appUnwindPrefix (__FUNC__);	\
			appUnwindThrow msg;		\
		}							\
	}

#define GUARD_BEGIN	try
#define GUARD_CATCH	catch (...)

#else

#if 0
#include <excpt.h>
CORE_API int win32ExceptFilter (struct _EXCEPTION_POINTERS *info);
#define EXCEPT_FILTER	win32ExceptFilter(GetExceptionInformation())
#else
// this will allow to produce slightly smaller code, but may not work under non-VC6 compiler
CORE_API int win32ExceptFilter2 (void);
#define EXCEPT_FILTER	win32ExceptFilter2()
#endif


#define guard(func)					\
	{								\
		static const char __FUNC__[] = #func; \
		__try {

#define unguard						\
		} __except (EXCEPT_FILTER) { \
			appUnwindThrow (__FUNC__); \
		}							\
	}

#define unguardf(msg)				\
		} __except (EXCEPT_FILTER) { \
			appUnwindPrefix (__FUNC__);	\
			appUnwindThrow msg;		\
		}							\
	}

#define GUARD_BEGIN	__try
#define GUARD_CATCH	__except (EXCEPT_FILTER)

#endif