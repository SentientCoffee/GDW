#define _WIN32_WINNT 0x0500
#define SCREENWIDTH getmaxx()
#include <stdlib.h>
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

enum characterList
{
	Felonious_Gru,
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
	Marlena_Gru,
	Vector,
	Miss_Hattie,
	Scarlet_Overkill,
	Herb_Overkill,
	Balthazar_Bratt,
	Mr_Perkins,
	Silas_Ramsbottom,
	Niko_of_Freedonia,
	Walter_Nelson,
	Kyle_the_dog,
	Robert_Gru,
	Frankie_Fishlips
};

int main()
{

	HANDLE hIn;
	HANDLE hOut;
	COORD Title;
	COORD KeyWhere;
	COORD EndWhere;
	bool charSelect = TRUE;
	bool Continue = TRUE;
	bool choice = FALSE;
	INPUT_RECORD InputRecord;
	DWORD NumRead;
	int buttonX = 1, buttonY = 1;
	int playerChar;
	string gameType;
	string answer;

	hIn = GetStdHandle(STD_INPUT_HANDLE);
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleMode(hIn, ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT);
	Title.X = 55;
	Title.Y = 15;
	KeyWhere.X = 15;
	KeyWhere.Y = 8;
	EndWhere.X = 15;
	EndWhere.Y = 11;

	SetConsoleCursorPosition(hOut, Title);
	cout << "Guess Gru";
	Sleep(5000);
	system("CLS");

	cout << "Characters:\n";
	cout << "Felonious Gru\n";
	cout << "El Macho\n";

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
						<< "is this the character you'd like to use?" << endl;
					cin >> answer;
					choice = TRUE;
					if (answer == "yes")
					{
						cout << "Your character is El Macho.";
						playerChar = 2;
						charSelect = FALSE;
						Sleep(2000);
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
	}
	Sleep(3000);
	return 0;
}
