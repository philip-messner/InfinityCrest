#pragma once

#ifdef IC_PLATFORM_WINDOWS
	#ifdef IC_BUILD_DLL
		#define IC_API __declspec(dllexport)
	#else
		#define IC_API __declspec(dllimport)
	#endif

#else

#error InfinityCrest only supports Windows!

#endif