/***********************************************************
*									     GLE32 Extrusion Library							*
*							Copyright� 2000 - 2017 by Dave Richards	 			*
*										  All Rights Reserved.							*
*												Ver 6.0									*
*																				       		*
*											HISTORY:										*
*									Linas Vepstas 1990 - 1997							*
*									Dave Richards  2000 - 2017						*
*																							*
************************************************************/

// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#include <windows.h>




#define _CRTDBG_MAP_ALLOC


#include <crtdbg.h>


#ifdef _DEBUG
	#ifndef DBG_NEW
		#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
		#define new DBG_NEW
	#endif
#endif  // _DEBUG



#include <gl\gl.h>
#include <gl\glu.h>

#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "glu32.lib")


#include "ExtrusionLib.h"