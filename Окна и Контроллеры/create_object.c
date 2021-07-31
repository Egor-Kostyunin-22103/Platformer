#include "window_functions.h"
HWND Create_Object(LPSTR Type,
				   DWORD Style,
				   LPSTR Caption_or_Text,
				   POINT Pos,
				   SIZE Size,
				   HWND Parent,
				   HMENU Menu){
	return CreateWindowA(Type,
						 Caption_or_Text,
						 Style,
						 Pos.x,
						 Pos.y,
						 Size.cx,
						 Size.cy,
						 Parent,
						 Menu,
						 GetModuleHandleA(NULL),
						 NULL);
}