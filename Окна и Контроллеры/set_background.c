#include "window_functions.h"
#include <stdbool.h>
void Set_Background(HWND hwnd,
					HBRUSH Background){
	SetClassLongA(hwnd,GCL_HBRBACKGROUND,(LONG)Background);
	InvalidateRect(hwnd,NULL,TRUE);
}