#include <windows.h>
#include <iostream>
#include <random>
#include <stdlib.h>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

bool menu = TRUE;
bool game = FALSE;
bool charSelect = FALSE;
bool Continue = TRUE;
bool choice = FALSE;
int turnNum;
ifstream txtFile; // Supposed to read from text file
string answer, line, filename, player1Name, player2Name;

enum gameState //still have no idea how to use enums, so I don't know when we'll actually use these
{
	Menu = 0,
	CharSelect,
	Game
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
};

int randomNum() {
	return (rand() % 13) + 1;
}

void charList();
void centreString(string inputString, HANDLE hOut);
void playerTurn(string charName, string compName, int);
void characterSelect(string name, string filename, int);

int main()
{
	HANDLE hIn;
	HANDLE hOut;
	COORD Title;
	COORD KeyWhere;
	COORD EndWhere;
	INPUT_RECORD InputRecord;
	DWORD NumRead;
	int buttonX = 1, buttonY = 1;
	int player1Char, player2Char, turnNum = 1;
	string gameType, select;

	srand((unsigned)time(0)); // Random number generator

	hIn = GetStdHandle(STD_INPUT_HANDLE);
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleMode(hIn, ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT); // Code for mouse input, doesn't work with console window

	Title.X = 55; // Coordinates for various pieces of text
	Title.Y = 55;	
	KeyWhere.X = 50;
	KeyWhere.Y = 30;
	EndWhere.X = 15;
	EndWhere.Y = 11;

	//SetConsoleCursorPosition(hOut, Title);
	centreString("Guess Gru", hOut);
	Sleep(5000);
	system("CLS");

	while (Continue)
	{
		if (menu)
		{
			SetConsoleCursorPosition(hOut, KeyWhere);
			cout << "Single Player\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTwo Player\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tDLC"; // It tried but it's definitely not perfect
			cin.ignore();
			getline(cin, select);
			if (select == "single player" or "multiplayer")
			{
				menu = FALSE;
				charSelect = TRUE;
				system("CLS");
			}
			else if (select == "DLC")
			{
				cout << "DLC character: El Macho\n"
					<< "Would you like to add El Macho to the game?";
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
				if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '1')
				{
					//cout << "Felonious Gru" << endl
					//	<< "Is this the character you'd like to use?" << endl;
					//txtFile.open("GRU.txt");
					//while (txtFile >> line)
					//{
					//	cout << line << endl; // This is supposed to print the text file, but I can't get it to work
					//}
					//txtFile.close();
					//cin >> answer;
					//if (answer == "yes")
					//{
					//	cout << "Your character is Felonious Gru.";
					//	playerChar = 1;
					//	charSelect = FALSE;
					//	game = TRUE;
					//	Sleep(1000);
					//	system("CLS");
					//}
					//else if (answer == "no")
					//{
					//	system("CLS");
					//	break;
					//}
					player1Name = "Felonious Gru";
					filename = "GRU.txt";
					player1Char = 1;
					characterSelect(player1Name, filename, player1Char);
					if (answer == "no")
					{
						break;
					}
				}
				else if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '2')
				{
					//cout << "Dru Gru" << endl
					//	<< "Is this the character you'd like to use?" << endl;
					//cin >> answer;
					//choice = TRUE;
					//if (answer == "yes")
					//{
					//	cout << "Your character is Dru Gru.";
					//	playerChar = 2;
					//	charSelect = FALSE;
					//	game = TRUE;
					//	Sleep(1000);
					//	system("CLS");
					//}
					//else if (answer == "no")
					//{
					//	system("CLS");
					//	break;
					//}
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
					//cout << "Stuart the Minion" << endl
					//	<< "Is this the character you'd like to use?" << endl;
					//cin >> answer;
					//choice = TRUE;
					//if (answer == "yes")
					//{
					//	cout << "Your character is Stuart the Minion.";
					//	playerChar = 3;
					//	charSelect = FALSE;
					//	game = TRUE;
					//	Sleep(1000);
					//	system("CLS");
					//}
					//else if (answer == "no")
					//{
					//	system("CLS");
					//	break;
					//}
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
					//cout << "Kevin the Minion" << endl
					//	<< "Is this the character you'd like to use?" << endl;
					//cin >> answer;
					//choice = TRUE;
					//if (answer == "yes")
					//{
					//	cout << "Your character is Kevin the Minion.";
					//	playerChar = 4;
					//	charSelect = FALSE;
					//	game = TRUE;
					//	Sleep(1000);
					//	system("CLS");
					//}
					//else if (answer == "no")
					//{
					//	system("CLS");
					//	break;
					//}
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
					//cout << "Bob the Minion" << endl
					//	<< "Is this the character you'd like to use?" << endl;
					//cin >> answer;
					//choice = TRUE;
					//if (answer == "yes")
					//{
					//	cout << "Your character is Bob the Minion.";
					//	playerChar = 5;
					//	charSelect = FALSE;
					//	game = TRUE;
					//	Sleep(1000);
					//	system("CLS");
					//}
					//else if (answer == "no")
					//{
					//	system("CLS");
					//	break;
					//}
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
					//cout << "Dr. Nefario" << endl
					//	<< "Is this the character you'd like to use?" << endl;
					//cin >> answer;
					//choice = TRUE;
					//if (answer == "yes")
					//{
					//	cout << "Your character is Dr. Nefario.";
					//	playerChar = 6;
					//	charSelect = FALSE;
					//	game = TRUE;
					//	Sleep(1000);
					//	system("CLS");
					//}
					//else if (answer == "no")
					//{
					//	system("CLS");
					//	break;
					//}
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
					//cout << "Margo Gru" << endl
					//	<< "Is this the character you'd like to use?" << endl;
					//cin >> answer;
					//choice = TRUE;
					//if (answer == "yes")
					//{
					//	cout << "Your character is Margo Gru.";
					//	playerChar = 7;
					//	charSelect = FALSE;
					//	game = TRUE;
					//	Sleep(1000);
					//	system("CLS");
					//}
					//else if (answer == "no")
					//{
					//	system("CLS");
					//	break;
					//}
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
					//cout << "Agnes Gru" << endl
					//	<< "Is this the character you'd like to use?" << endl;
					//cin >> answer;
					//choice = TRUE;
					//if (answer == "yes")
					//{
					//	cout << "Your character is Agnes Gru.";
					//	playerChar = 8;
					//	charSelect = FALSE;
					//	game = TRUE;
					//	Sleep(1000);
					//	system("CLS");
					//}
					//else if (answer == "no")
					//{
					//	system("CLS");
					//	break;
					//}
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
					//cout << "Edith Gru" << endl
					//	<< "Is this the character you'd like to use?" << endl;
					//cin >> answer;
					//choice = TRUE;
					//if (answer == "yes")
					//{
					//	cout << "Your character is Edith Gru.";
					//	playerChar = 9;
					//	charSelect = FALSE;
					//	game = TRUE;
					//	Sleep(1000);
					//	system("CLS");
					//}
					//else if (answer == "no")
					//{
					//	system("CLS");
					//	break;
					//}
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
					//cout << "Lucy Wilde" << endl
					//	<< "Is this the character you'd like to use?" << endl;
					//cin >> answer;
					//choice = TRUE;
					//if (answer == "yes")
					//{
					//	cout << "Your character is Lucy Wilde.";
					//	playerChar = 10;
					//	charSelect = FALSE;
					//	game = TRUE;
					//	Sleep(1000);
					//	system("CLS");
					//}
					//else if (answer == "no")
					//{
					//	system("CLS");
					//	break;
					//}
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
					//cout << "Vector" << endl
					//	<< "Is this the character you'd like to use?" << endl;
					//cin >> answer;
					//choice = TRUE;
					//if (answer == "yes")
					//{
					//	cout << "Your character is Vector.";
					//	playerChar = 11;
					//	charSelect = FALSE;
					//	game = TRUE;
					//	Sleep(1000);
					//	system("CLS");
					//}
					//else if (answer == "no")
					//{
					//	system("CLS");
					//	break;
					//}
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
					//cout << "Kyle the dog" << endl
					//	<< "Is this the character you'd like to use?" << endl;
					//cin >> answer;
					//choice = TRUE;
					//if (answer == "yes")
					//{
					//	cout << "Your character is Kyle the dog.";
					//	playerChar = 12;
					//	charSelect = FALSE;
					//	game = TRUE;
					//	Sleep(1000);
					//	system("CLS");
					//}
					//else if (answer == "no")
					//{
					//	system("CLS");
					//	break;
					//}
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
	cout << "Characters:\n"
		<< "1. Felonious Gru\n"
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
	cout << name << endl
		<< "Is this the character you'd like to use?" << endl;
	txtFile.open(filename);
	while (txtFile >> line)
	{
		cout << line << endl; // This is supposed to print the text file, but I can't get it to work. Anyone know how to use files?
	}
	txtFile.close();
	cin >> answer;
	if (answer == "yes")
	{
		cout << "Your character is " << name;
		charSelect = FALSE;
		game = TRUE;
		Sleep(1000);
		system("CLS");
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
		<< "nose, eye, hair, size, (can only guess this once) name\n";
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
