#include "window_functions.h"
#include <stdbool.h>

void Set_Cursor(HWND hwnd,
				LPSTR Cursor){
	SetClassLongA(hwnd,GCL_HCURSOR,(LONG)LoadCursorA(GetModuleHandleA(NULL),Cursor));
	InvalidateRect(hwnd,NULL,TRUE);
}