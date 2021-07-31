#include "window_functions.h"
void Register_Class(LPWNDCLASSA Class,
					LPSTR Type,
					WNDPROC Proc){
	Class->lpszClassName = Type;
	Class->lpfnWndProc = Proc;
	Class->hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	RegisterClassA(Class);
}