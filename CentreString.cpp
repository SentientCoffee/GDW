//Include header with forward declared function
#include "CentreString.h"
#include <string>

//The function (declared in the header)
void centreString(std::string inputString)
{
	//Gets the screen size of the console output and centers
	COORD ConsoleSize = GetLargestConsoleWindowSize(GetStdHandle(STD_OUTPUT_HANDLE));
	//Length is required for centering
	int length = inputString.length();
	//using console length and for loop the position is set to the center
	int position = static_cast<int>((ConsoleSize.X - length) / 2);

	for (int i = 0; i < position; i++) {
		std::cout << " ";
	}
	//Output
	std::cout << inputString;
}