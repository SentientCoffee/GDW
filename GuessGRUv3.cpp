#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
//#include <libProcessHelper>
#include <random>
#include <stdlib.h>
#include <string>
#include <windows.h>

#pragma comment(lib, "user32")

// #define DEFAULT_HELPER_EXE "ConsoleLoggerHelper.exe"

using namespace std;

HANDLE hIn = GetStdHandle(STD_INPUT_HANDLE);
HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

bool menu = TRUE;
bool game = FALSE;
bool charSelect = FALSE;
bool Continue = TRUE;
bool choice = FALSE;
bool elMacho = FALSE;
int turnNum;
ifstream txtFile; // Reads text from file
string answer, line, filename, player1Name, player2Name;

/*enum gameState //still have no idea how to use enums, so I don't know when we'll actually use these
{
	Menu = 0,
	CharSelect,
	Game
};

enum gameTypeList
{
	Single_player,
	Multiplayer
};

enum characterList
{
	Felonious_Gru = 0,
	Dru_Gru,
	Stuart,
	Kevin,
	Bob,
	Dr_Nefario,
	Margo_Gru,
	Agnes_Gru,
	Edith_Gru,
	Lucy_Wilde,
	Vector,
	Kyle_the_dog,
	El_Macho
};*/

int randomNum() {
	return (rand() % 13) + 1;
}

void drawFeloniousGru(); //Just in case
void drawDruGru();
void drawStuart();
void drawKevin();
void drawBob();
void drawDrNefario();
void drawMargoGru();
void drawAgnesGru();
void drawEdithGru();
void drawLucyWilde();
void drawVector();
void drawKyleTheDog();
void ElMacho();
void charList();
void centreString(string inputString, HANDLE hOut);
void playerTurn(string charName, string compName, int);
void characterSelect(string name, string filename, int);

void fontSize(int size);
string lowerCase(string input);


int main()
{
	::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	COORD Title;
	COORD KeyWhere;
	COORD EndWhere;
	INPUT_RECORD InputRecord;
	DWORD NumRead;
	int buttonX = 1, buttonY = 1;
	int player1Char, player2Char, turnNum = 1;
	string gameType, select;

	srand((unsigned)time(0)); // Random number generator

	
	SetConsoleMode(hIn, ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT); // Code for mouse input, doesn't work with console window

	Title.X = 55; // Coordinates for various pieces of text
	Title.Y = 55;	
	KeyWhere.X = 0;
	KeyWhere.Y = 6;
	EndWhere.X = 15;
	EndWhere.Y = 11;

	//SetConsoleCursorPosition(hOut, Title);
	fontSize(90);
	SetConsoleCursorPosition(hOut, KeyWhere);
	centreString("Guess Gru", hOut);
	
	Sleep(5000);
	system("CLS");

	while (Continue)
	{
		if (menu)
		{
			KeyWhere.Y = 13;
			SetConsoleCursorPosition(hOut, KeyWhere);
			
			fontSize(30);
			centreString("Single Player\n", hOut); // I tried but it's definitely not perfect
			centreString("Two Player\n", hOut);
			centreString("DLC?\n\n", hOut);
			centreString("\b\b\b\b\b", hOut);

			//cin.ignore();
			cin >> select;
			//getline(cin, select);
			select = lowerCase(select);

			if (select == "single player" || select == "two player")
			{
				menu = FALSE;
				charSelect = TRUE;
				system("CLS");
			}
			else if (select == "dlc")
			{
				system("CLS");
				cout << "DLC character: El Macho\n"
					<< "Would you like to add El Macho to the game?";
				
				cin >> select;
				select = lowerCase(select);

				if(select == "yes")
				{
					elMacho = TRUE;
					cout << "El Macho has been added to the game.";
					Sleep(1000);
					system("CLS");
				}
			}
			else
			{
				cout << "Please put in a valid input.";
				cin.clear();
				cin.ignore(10000, '\n');
				cin >> select;
				continue;
			}
		}

		if (charSelect)
		{
			cout << "(Please select your character using the number row)\n";
			charList();
		}

		ReadConsoleInput(hIn, &InputRecord, 1, &NumRead); // Allows for keyboard input
		switch (InputRecord.EventType)
		{
		case KEY_EVENT:
			SetConsoleCursorPosition(hOut, KeyWhere);
			if (InputRecord.Event.KeyEvent.uChar.AsciiChar == 'x')
			{
				SetConsoleCursorPosition(hOut, EndWhere);
				cout << "Exiting game..." << endl;
				Continue = FALSE;
			}
			while (charSelect)
			{
				if(InputRecord.Event.KeyEvent.uChar.AsciiChar == '`')
				{
					if(elMacho) {
						player1Name = "El Macho";
						filename = "El_Macho.txt";
						player1Char = 0;
						characterSelect(player1Name, filename, player1Char);
						if (answer == "no")
						{
							break;
						}
					}
				}

				if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '1')
				{
					player1Name = "Felonious Gru";
					filename = "GRU2.txt";
					player1Char = 1;
					characterSelect(player1Name, filename, player1Char);
					if (answer == "no")
					{
						break;
					}
				}
				else if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '2')
				{
					player1Name = "Dru Gru";
					filename = "Dru.txt";
					player1Char = 2;
					characterSelect(player1Name, filename, player1Char);
					if (answer == "no")
					{
						break;
					}
				}
				else if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '3')
				{
					player1Name = "Stuart the Minion";
					filename = "Stuart.txt";
					player1Char = 3;
					characterSelect(player1Name, filename, player1Char);
					if (answer == "no")
					{
						break;
					}
				}
				else if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '4')
				{
					player1Name = "Kevin the Minion";
					filename = "Kevin.txt";
					player1Char = 4;
					characterSelect(player1Name, filename, player1Char);
					if (answer == "no")
					{
						break;
					}
				}
				else if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '5')
				{
					player1Name = "Bob the Minion";
					filename = "Bob.txt";
					player1Char = 5;
					characterSelect(player1Name, filename, player1Char);
					if (answer == "no")
					{
						break;
					}
				}
				else if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '6')
				{
					player1Name = "Dr. Nefario";
					filename = "Dr._Nefario.txt";
					player1Char = 6;
					characterSelect(player1Name, filename, player1Char);
					if (answer == "no")
					{
						break;
					}
				}
				else if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '7')
				{
					player1Name = "Margo Gru";
					filename = "Margo.txt";
					player1Char = 7;
					characterSelect(player1Name, filename, player1Char);
					if (answer == "no")
					{
						break;
					}
				}
				else if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '8')
				{
					player1Name = "Agnes Gru";
					filename = "Agnes.txt";
					player1Char = 8;
					characterSelect(player1Name, filename, player1Char);
					if (answer == "no")
					{
						break;
					}
				}
				else if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '9')
				{
					player1Name = "Edith Gru";
					filename = "Edith.txt";
					player1Char = 9;
					characterSelect(player1Name, filename, player1Char);
					if (answer == "no")
					{
						break;
					}
				}
				else if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '0')
				{
					player1Name = "Lucy Wilde";
					filename = "Lucy.txt";
					player1Char = 10;
					characterSelect(player1Name, filename, player1Char);
					if (answer == "no")
					{
						break;
					}
				}
				else if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '-')
				{
					player1Name = "Vector";
					filename = "Vector.txt";
					player1Char = 11;
					characterSelect(player1Name, filename, player1Char);
					if (answer == "no")
					{
						break;
					}
				}
				else if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '=')
				{
					player1Name = "Kyle the dog";
					filename = "Kyle.txt";
					player1Char = 12;
					characterSelect(player1Name, filename, player1Char);
					if (answer == "no")
					{
						break;
					}
				}
				else
				{
					break;
				}	

			}
		}
		system("CLS");

		while (game)
		{
			playerTurn(player1Name, player2Name, turnNum);
		}
	}
	Sleep(3000);
	return 0;
}

void charList()
{

	cout << "Characters:\n";

	if(elMacho) {
		cout << "`. El Macho\n";
	}

	cout << "1. Felonious Gru\n"
		<< "2. Dru Gru\n"
		<< "3. Stuart the Minion\n"
		<< "4. Kevin the Minion\n"
		<< "5. Bob the Minion\n"
		<< "6. Dr. Nefario\n"
		<< "7. Margo Gru\n"
		<< "8. Agnes Gru\n"
		<< "9. Edith Gru\n"
		<< "0. Lucy Wilde\n"
		<< "-. Vector\n"
		<< "=. Kyle the dog\n";
}

void characterSelect(string name, string filename, int playerNum)
{
	fontSize(60);
	cout << name << endl;
	fontSize(30);

	txtFile.open(filename); // opens file to read
	fontSize(4);
	while (txtFile >> line) // reads file
	{
		cout << line << endl; // prints text file
	}
	txtFile.close();
	//if (name == "Felonious Gru")
	//{
	//	drawFeloniousGru();
	//}

	cout << "Is this the character you'd like to use?" << endl;
	cin >> answer;
	answer = lowerCase(answer);

	if (answer == "yes")
	{
		system("CLS");
		fontSize(30);
		cout << "Your character is " << name;
		charSelect = FALSE;
		game = TRUE;
		Sleep(1000);
	}
	else if (answer == "no")
	{
		system("CLS");
		//break;
	}
}

void playerTurn(string charName, string player2Name, int turnNum)
{
	system("CLS");
	string question;
	cout << "It is now Player " << turnNum << "'s turn.\n"
		<< "Please type what you'd like to ask. Acceptable Commands: \n" // We can probably put info for each character in the text file, like the different colours if we can't change font colour
		<< "nose, eye, hair, size, (can only guess this once) name\n"; //
	cin >> question;
	system("CLS");
	if (question == "nose")
	{
		cout << "Acceptable Commands: \n"
			<< "big, small, round, pointy";
		cin >> question;
	}
	else if (question == "eye")
	{
		cout << "Acceptable Commands: \n"
			<< "blue, green, brown";
		cin >> question;
	}
	else if (question == "hair")
	{
		cout << "Acceptable Commands: \n"
			<< "short, long, black, red, brown, blonde, none";
		cin >> question;
	}
	else if (question == "size")
	{
		cout << "Acceptable Commands: \n"
			<< "big, medium, small";
		cin >> question;
	}
	else if (question == "name")
	{
		cout << "Please type the character name.\n";
		charList();
		cin.ignore();
		getline(cin, question);
		cout << "You guessed that the other player's character is " << question;
		if (turnNum == 1)
		{
			if (question == player2Name)
			{
				cout << "\nYour guess was correct!" << endl << "\nYou win!"; 
				game = FALSE;
				Continue = FALSE;
			}
			else
			{
				cout << "\nYour guess was incorrect!" << endl << "\nYou lose!";
				game = FALSE;
				Continue = FALSE;
			}
		}
		else if (turnNum == 2)
		{
			if (question == player1Name)
			{
				cout << "\nYour guess was correct!" << endl << "\nYou win!";
				game = FALSE;
				Continue = FALSE;
			}
			else
			{
				cout << "\nYour guess was incorrect!" << endl << "\nYou lose!";
				game = FALSE;
				Continue = FALSE;
			}
		}
	}
	else
	{
		system("CLS");
		cout << "That is not a valid command.";
		Sleep(1000);
	}
	if (turnNum == 1)
	{
		turnNum = 2;
	}
	else if (turnNum == 2)
	{
		turnNum = 1;
	}
}

void centreString(string inputString, HANDLE hOut) // Hopefully will center the title for Guess Gru, need to update ratio for different screen sizes
{
	COORD ConsoleSize = GetLargestConsoleWindowSize(hOut);
	int length = inputString.length();
	int position = static_cast<int>((ConsoleSize.X - length) / 2);
	
	for(int i = 0; i < position; i++)
	{
		cout << " ";
	}

	cout << inputString;
}

//These are in case we can't get the files to work properly since they mess up at the spaces
void drawFeloniousGru()
{
	
}

void drawDruGru()
{

}

void drawStuart()
{

}

void drawKevin()
{

}

void drawBob()
{

}

void drawDrNefario()
{

}

void drawMargoGru()
{

}

void drawAgnesGru()
{

}

void drawEdithGru()
{

}

void drawLucyWilde()
{

}

void drawVector()
{

}

void drawKyleTheDog()
{

}

void drawElMacho()
{

}

void fontSize(int size) {
	PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx = new CONSOLE_FONT_INFOEX();
	lpConsoleCurrentFontEx->cbSize = sizeof(CONSOLE_FONT_INFOEX);

	GetCurrentConsoleFontEx(hOut, FALSE, lpConsoleCurrentFontEx);
	lpConsoleCurrentFontEx->dwFontSize.X = size;
	lpConsoleCurrentFontEx->dwFontSize.Y = size;
	SetCurrentConsoleFontEx(hOut, FALSE, lpConsoleCurrentFontEx);
}

string lowerCase(string input) {
	// Loop through the entire inputted string
	for (int i = 0; i < input.length(); i++) {
		input[i] = tolower(input[i]);    // Change the character to lowercase
	}

	// Return the lowercase input
	return input;
}