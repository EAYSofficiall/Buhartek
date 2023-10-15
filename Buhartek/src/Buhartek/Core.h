#pragma once

#ifdef BT_PLATFORM_WINDOWS
	#ifdef BT_BUILD_DLL
		#define BUHARTEK_API __declspec(dllexport)
	#else 
		#define BUHARTEK_API __declspec(dllimport)
	#endif
#else
	#error Buhartek sadece windowsta bulunur.
#endif