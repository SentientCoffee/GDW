#include "CentreString.h"
#include <string>

void centreString(std::string inputString)
{
	COORD ConsoleSize = GetLargestConsoleWindowSize(GetStdHandle(STD_OUTPUT_HANDLE));
	int length = inputString.length();
	int position = static_cast<int>((ConsoleSize.X - length) / 2);

	for (int i = 0; i < position; i++) {
		std::cout << " ";
	}

	std::cout << inputString;
}