#include <windows.h>
#include <iostream>
#include <random>
#include <stdlib.h>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

enum gameState
{
	menu = 0,
	charSelect,
	game
};

enum characterList
{
	Felonious_Gru = 0,
	El_Macho,
	Stuart,
	Kevin,
	Bob,
	Dr_Nefario,
	Margo_Gru,
	Agnes_Gru,
	Edith_Gru,
	Lucy_Wilde,
	Dru_Gru,
	Vector,
	Kyle_the_dog,
};

int randomNum() {
	return (rand() % 13) + 1;
}

void centreString(string inputString, HANDLE hOut);

int main()
{
	
	HANDLE hIn;
	HANDLE hOut;
	COORD Title;
	COORD KeyWhere;
	COORD EndWhere;
	bool menu = FALSE;
	bool charSelect = TRUE;
	bool Continue = TRUE;
	bool choice = FALSE;
	INPUT_RECORD InputRecord;
	DWORD NumRead;
	int buttonX = 1, buttonY = 1;
	int playerChar;
	string gameType;
	string answer;

	srand((unsigned)time(0));

	hIn = GetStdHandle(STD_INPUT_HANDLE);
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleMode(hIn, ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT);

	Title.X = 55;
	Title.Y = 55;	
	KeyWhere.X = 15;
	KeyWhere.Y = 8;
	EndWhere.X = 15;
	EndWhere.Y = 11;

	//SetConsoleCursorPosition(hOut, Title);
	centreString("Guess Gru", hOut);
	Sleep(5000);
	system("CLS");

	while (Continue)
	{
		ReadConsoleInput(hIn, &InputRecord, 1, &NumRead);
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
					cout << "Felonious Gru" << endl
						<< "Is this the character you'd like to use?" << endl;
					cin >> answer;
					if (answer == "yes")
					{
						cout << "Your character is Felonious Gru.";
						playerChar = 1;
						charSelect = FALSE;
						Sleep(1000);
						system("CLS");
					}
					else if (answer == "no")
					{
						system("CLS");
						break;
					}
				}
				
				if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '2')
				{
					cout << "El Macho" << endl
						<< "Is this the character you'd like to use?" << endl;
					cin >> answer;
					choice = TRUE;
					if (answer == "yes")
					{
						cout << "Your character is El Macho.";
						playerChar = 2;
						charSelect = FALSE;
						Sleep(1000);
						system("CLS");
					}
					else if (answer == "no")
					{
						system("CLS");
						break;
					}
				}

				if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '3')
				{
					cout << "Stuart the Minion" << endl
						<< "Is this the character you'd like to use?" << endl;
					cin >> answer;
					choice = TRUE;
					if (answer == "yes")
					{
						cout << "Your character is Stuart the Minion.";
						playerChar = 3;
						charSelect = FALSE;
						Sleep(1000);
						system("CLS");
					}
					else if (answer == "no")
					{
						system("CLS");
						break;
					}
				}

				if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '4')
				{
					cout << "Kevin the Minion" << endl
						<< "Is this the character you'd like to use?" << endl;
					cin >> answer;
					choice = TRUE;
					if (answer == "yes")
					{
						cout << "Your character is Kevin the Minion.";
						playerChar = 4;
						charSelect = FALSE;
						Sleep(1000);
						system("CLS");
					}
					else if (answer == "no")
					{
						system("CLS");
						break;
					}
				}

				if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '5')
				{
					cout << "Bob the Minion" << endl
						<< "Is this the character you'd like to use?" << endl;
					cin >> answer;
					choice = TRUE;
					if (answer == "yes")
					{
						cout << "Your character is Bob the Minion.";
						playerChar = 5;
						charSelect = FALSE;
						Sleep(1000);
						system("CLS");
					}
					else if (answer == "no")
					{
						system("CLS");
						break;
					}
				}

				if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '6')
				{
					cout << "Dr. Nefario" << endl
						<< "Is this the character you'd like to use?" << endl;
					cin >> answer;
					choice = TRUE;
					if (answer == "yes")
					{
						cout << "Your character is Dr. Nefario.";
						playerChar = 6;
						charSelect = FALSE;
						Sleep(1000);
						system("CLS");
					}
					else if (answer == "no")
					{
						system("CLS");
						break;
					}
				}

				if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '7')
				{
					cout << "Margo Gru" << endl
						<< "Is this the character you'd like to use?" << endl;
					cin >> answer;
					choice = TRUE;
					if (answer == "yes")
					{
						cout << "Your character is Margo Gru.";
						playerChar = 6;
						charSelect = FALSE;
						Sleep(1000);
						system("CLS");
					}
					else if (answer == "no")
					{
						system("CLS");
						break;
					}
				}

				if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '8')
				{
					cout << "Agnes Gru" << endl
						<< "Is this the character you'd like to use?" << endl;
					cin >> answer;
					choice = TRUE;
					if (answer == "yes")
					{
						cout << "Your character is Agnes Gru.";
						playerChar = 6;
						charSelect = FALSE;
						Sleep(1000);
						system("CLS");
					}
					else if (answer == "no")
					{
						system("CLS");
						break;
					}
				}

				if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '9')
				{
					cout << "Edith Gru" << endl
						<< "Is this the character you'd like to use?" << endl;
					cin >> answer;
					choice = TRUE;
					if (answer == "yes")
					{
						cout << "Your character is Edith Gru.";
						playerChar = 6;
						charSelect = FALSE;
						Sleep(1000);
						system("CLS");
					}
					else if (answer == "no")
					{
						system("CLS");
						break;
					}
				}

				if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '0')
				{
					cout << "Lucy Wilde" << endl
						<< "Is this the character you'd like to use?" << endl;
					cin >> answer;
					choice = TRUE;
					if (answer == "yes")
					{
						cout << "Your character is Lucy Wilde.";
						playerChar = 6;
						charSelect = FALSE;
						Sleep(1000);
						system("CLS");
					}
					else if (answer == "no")
					{
						system("CLS");
						break;
					}
				}
				
				if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '-')
				{
					cout << "Vector" << endl
						<< "Is this the character you'd like to use?" << endl;
					cin >> answer;
					choice = TRUE;
					if (answer == "yes")
					{
						cout << "Your character is Vector.";
						playerChar = 6;
						charSelect = FALSE;
						Sleep(1000);
						system("CLS");
					}
					else if (answer == "no")
					{
						system("CLS");
						break;
					}
				}
				
				if (InputRecord.Event.KeyEvent.uChar.AsciiChar == '=')
				{
					cout << "Kyle the dog" << endl
						<< "Is this the character you'd like to use?" << endl;
					cin >> answer;
					choice = TRUE;
					if (answer == "yes")
					{
						cout << "Your character is Kyle the dog.";
						playerChar = 6;
						charSelect = FALSE;
						Sleep(1000);
						system("CLS");
					}
					else if (answer == "no")
					{
						system("CLS");
						break;
					}
				}

			}
		}
		system("CLS");
		if (charSelect)
		{
			cout << "Characters:\n"
				<< "(Please select your character using the number row)\n"
				<< "1. Felonious Gru\n"
				<< "2. El Macho\n"
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
	}
	Sleep(3000);
	return 0;
}

void centreString(string inputString, HANDLE hOut)
{
	COORD ConsoleSize = GetLargestConsoleWindowSize(hOut);
	int length = inputString.length();
	int position = static_cast<int>((ConsoleSize.X - length) / 2);
	
	for(int i = 0; i < position; i++)
	{
		cout <<
	}

	cout << inputString;
}
