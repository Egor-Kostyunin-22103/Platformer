#include "window_functions.h"
#include <stdlib.h>
HBITMAP Get_Texture(HWND hwnd,
				    HBITMAP Textures,
				    unsigned short int Index){
	unsigned short int h = ((Index >> 4) & 0b0000000000001111);
	unsigned short int l = 0b0000000000001111 & Index;
	HDC Window_DC;
	Window_DC = GetDC(hwnd);
	HDC Textures_DC = CreateCompatibleDC(Window_DC);
	HDC Texture_DC = CreateCompatibleDC(Window_DC);
	HBITMAP Texture;
	Texture = CreateCompatibleBitmap(Window_DC,64,64);
	SelectObject(Textures_DC,Textures);
	SelectObject(Texture_DC,Texture);
	StretchBlt(Texture_DC,
			   0,
			   0,
			   64,
			   64,
			   Textures_DC,
			   h * 16,
			   l * 16,
			   16,
			   16,
			   SRCCOPY);
	DeleteDC(Window_DC);
	DeleteDC(Textures_DC);
	DeleteDC(Texture_DC);
	return Texture;
}