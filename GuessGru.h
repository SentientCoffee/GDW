#pragma once

//All the headers required in one place so the main .cpp does not need to include all of them
//centers the string
#include "CentreString.h"
//prints characters
#include "Characters.h"
//changes font for character output and title
#include "FontSize.h"
//sets user input to lower case
#include "LowerCase.h"
//random requried for single player (the AI guesses and picking of its character)
#include "Random.h"
//sound file for the song in the background
#include "Sound.h"

//Include all the libraries required that way the main does not need to 
#include <array>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <windows.h>
//Tells program additional files are required
#pragma comment(lib, "user32")