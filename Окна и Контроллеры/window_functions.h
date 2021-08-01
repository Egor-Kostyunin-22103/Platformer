#ifndef WINDOW_FUNCTIONS_H
#define WINDOW_FUNCTIONS_H
#include <windows.h>
void Register_Class(LPWNDCLASSA Class,
					LPSTR Type,
					WNDPROC Proc);
HWND Create_Object(LPSTR Type,
		   DWORD Style,
		   LPSTR Caption_or_Text,
		   POINT Pos,
		   SIZE Size,
		   HWND Parent,
		   HMENU Menu);
void Set_Background(HWND hwnd,
		    HBRUSH Background);
void Set_Cursor(HWND hwnd,
		LPSTR Cursor);
void Set_Icon(HWND hwnd,
	      LPSTR Icon);
#endif
