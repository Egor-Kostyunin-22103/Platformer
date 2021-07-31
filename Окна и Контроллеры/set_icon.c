#include "window_functions.h"
#include <stdbool.h>
#include <windows.h>
void Set_Icon(HWND hwnd,
			  LPSTR Icon){
	SetClassLongA(hwnd,GCL_HICON,(LONG)LoadIconA(GetModuleHandleA(NULL),Icon));
	InvalidateRect(hwnd,NULL,TRUE);
}