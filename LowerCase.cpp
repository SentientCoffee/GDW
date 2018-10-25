#include "LowerCase.h"

std::string lowerCase(std::string input) {
	for (int i = 0; i < input.length(); i++) {
		input[i] = tolower(input[i]);
	}

	return input;
}