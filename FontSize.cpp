#include "FontSize.h"

void fontSize(int size) {
	PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx = new CONSOLE_FONT_INFOEX();
	lpConsoleCurrentFontEx->cbSize = sizeof(CONSOLE_FONT_INFOEX);

	GetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), false, lpConsoleCurrentFontEx);
	lpConsoleCurrentFontEx->dwFontSize.X = size;
	lpConsoleCurrentFontEx->dwFontSize.Y = size;
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), false, lpConsoleCurrentFontEx);
}