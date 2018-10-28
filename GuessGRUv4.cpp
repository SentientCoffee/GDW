#include "GuessGru.h"
using namespace std;

const HANDLE hIn = GetStdHandle(STD_INPUT_HANDLE);
const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

COORD bufferSize;
COORD titleMsg;
COORD endMsg;
COORD cursorPos;

INPUT_RECORD inputRecord;
DWORD numRead;

const int nameIndex = 0,
noseIndex = 1,
hairIndex = 2,
ageIndex = 3,
sizeIndex = 4,
genderIndex = 5;

static bool endGame = false, elMacho = false, player1Turn = false;
int numPlayers, player1Char, player2Char, guess;

string userInput, charSelect, charName, question, nameGuess, restart;

const array<array<string, 13>, 6> characters = {{
	{ "El Macho", "Felonious Gru", "Dru Gru", "Stuart the Minion", "Kevin the Minion", "Bob the Minion", "Dr. Nefario", "Margo Gru", "Agnes Gru", "Edith Gru", "Lucy Wilde", "Vector", "Kyle the Dog" },
	{ "average",  "pointy",        "pointy",  "none",              "none",             "none",           "pointy",      "average",   "average",   "average",   "average",    "pointy", "none" },
	{ "short",    "none",          "long",    "short",             "short",            "none",           "short",       "long",      "long",      "short",     "long",       "short",  "short" },
	{ "middle",   "middle",        "middle",  "old",               "old",              "old",            "old",         "young",     "young",     "young",     "middle",     "middle", "young" },
	{ "big",      "medium",        "medium",  "small",             "medium",           "small",          "medium",      "medium",    "small",     "small",     "medium",     "medium", "small" },
	{ "male",     "male",          "male",    "male",              "male",             "male",           "male",        "female",    "female",    "female",    "female",     "male",   "male" }
}};

static array<bool, 13> player1arr = { true, true, true, true, true, true, true, true, true, true, true, true, true };
static array<bool, 13> player2arr = { true, true, true, true, true, true, true, true, true, true, true, true, true };


bool female = false, male = false;
bool Short = false, none = false, Long = false;
bool big = false, medium = false, Small = false;
bool young = false, middle = false, old = false;
bool average = false, pointy = false, noNose = false;

int main() {
	bufferSize.X = 100;
	bufferSize.Y = 100;

	titleMsg.X = 0;
	titleMsg.Y = 1;

	endMsg.X = 0;
	endMsg.Y = 0;

	cursorPos.X = 0;
	cursorPos.Y = 5;

	SetConsoleTitle("Guess Gru");
	SetConsoleScreenBufferSize(hOut, bufferSize);
	SetConsoleTextAttribute(hOut, 22);

	::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	srand((unsigned)time(0));

	fontSize(300);
	SetConsoleCursorPosition(hOut, titleMsg);
	centreString("Guess Gru");
	SetConsoleCursorPosition(hOut, cursorPos);

	playMusic();

	Sleep(5650);
	system("CLS");

begin:
	while (!endGame) {
	menu:
		fontSize(50);
		SetConsoleTextAttribute(hOut, 22);
		
		cursorPos.Y = 0;
		SetConsoleCursorPosition(hOut, cursorPos);
		centreString("Guess Gru\n");
		centreString("=================================================================");

		cursorPos.Y = 21;
		SetConsoleCursorPosition(hOut, cursorPos);
		SetConsoleTextAttribute(hOut, 25);
		centreString("DLC?\n\n");
		SetConsoleTextAttribute(hOut, 22);

		userInput = "";
		cursorPos.Y = 8;
		SetConsoleCursorPosition(hOut, cursorPos);

		centreString("Options: (please type your choice)\n");
		centreString("- Single Player\n");
		centreString("- Two Player\n");
		centreString("Type \"Exit\" to quit the game");

		cursorPos.Y = 13;
		SetConsoleCursorPosition(hOut, cursorPos);
		centreString("\b\b\b");

		getline(cin, userInput, '\n');
		userInput = lowerCase(userInput);

		while (userInput != "single player" && userInput != "two player" && userInput != "dlc" && userInput != "exit") {
			centreString("Please use a valid input.");
			Sleep(1000);
			system("CLS");
			goto menu;
		}

		if (userInput == "single player") {
			system("CLS");
			numPlayers = 1;
			goto characterSelect;
		}
		else if (userInput == "two player") {
			system("CLS");
			goto characterSelect;
		}
		else if (userInput == "dlc") {
			if (!elMacho) {
				system("CLS");
				SetConsoleCursorPosition(hOut, cursorPos);

				centreString("DLC character: El Macho\n");
				centreString("Would you like to add El Macho to the game?\n");
				centreString("\b\b\b\b\b");

				cin >> userInput;
				userInput = lowerCase(userInput);

				if (userInput == "yes") {
					elMacho = true;
					centreString("El Macho has been added to the game.\n");
					centreString("$19.99 has been deducted from your wallet.");

					Sleep(1000);
					system("CLS");
					goto menu;
				}
				else {
					elMacho = false;
					centreString("El Macho has not been added.");

					Sleep(1000);
					system("CLS");
					goto menu;
				}
			}
			else {
				system("CLS");

				SetConsoleCursorPosition(hOut, cursorPos);
				centreString("El Macho has already been added to the game.\n");

				Sleep(1000);
				system("CLS");
				goto menu;
			}
		}
		else if (userInput == "exit") {
			system("CLS");
			endGame = true;
			goto begin;
		}

	characterSelect:
		system("CLS");
		fontSize(30);
		player1Char = 100;

		for (int i = 0; i < player1arr.size(); i++) {
			player1arr[i] = true;
		}
		for (int i = 0; i < player2arr.size(); i++) {
			player2arr[i] = true;
		}

		cursorPos.X = 0;
		cursorPos.Y = 18;

		cout << "Characters:\n"
			<< "(Please select your character using the number row)\n";


		if (elMacho) {
			cout << "[`] El Macho\n";
		}

		cout << "[1] Felonious Gru\n"
			<< "[2] Dru Gru\n"
			<< "[3] Stuart the Minion\n"
			<< "[4] Kevin the Minion\n"
			<< "[5] Bob the Minion\n"
			<< "[6] Dr. Nefario\n"
			<< "[7] Margo Gru\n"
			<< "[8] Agnes Gru\n"
			<< "[9] Edith Gru\n"
			<< "[0] Lucy Wilde\n"
			<< "[-] Vector\n"
			<< "[=] Kyle the Dog\n\n";

		cout << "Press M to go back to the main menu.";

		ReadConsoleInput(hIn, &inputRecord, 1, &numRead);

		switch (inputRecord.EventType) {
		case KEY_EVENT:
			SetConsoleCursorPosition(hOut, cursorPos);

			switch (inputRecord.Event.KeyEvent.uChar.AsciiChar) {
			case 'm':
				endGame = true;
				system("CLS");
				goto menu;
				break;


			case '`':
				if (elMacho) {
					player1Char = 0;
				}
				break;
			case '1':
				player1Char = 1;
				break;
			case '2':
				player1Char = 2;
				break;
			case '3':
				player1Char = 3;
				break;
			case '4':
				player1Char = 4;
				break;
			case '5':
				player1Char = 5;
				break;
			case '6':
				player1Char = 6;
				break;
			case '7':
				player1Char = 7;
				break;
			case '8':
				player1Char = 8;
				break;
			case '9':
				player1Char = 9;
				break;
			case '0':
				player1Char = 10;
				break;
			case '-':
				player1Char = 11;
				break;
			case '=':
				player1Char = 12;
				break;
			default:
				break;
			}

			if (player1Char == 100) {
				goto characterSelect;
			}

			charName = characters[nameIndex][player1Char];

			cout << charName << "\n";
			cout << "Is this the character you'd like to choose? ";
			cin >> charSelect;
			charSelect = lowerCase(charSelect);

			if (charSelect == "yes") {
				system("CLS");
				fontSize(30);
				cout << "Your character is " << charName << "." << endl;
				Sleep(1000);
			}
			else if (charSelect == "no") {
				system("CLS");
				goto characterSelect;
			}
			else {
				cout << "Please use a valid input.";
				Sleep(1000);
				system("CLS");
				goto characterSelect;
			}


			cout << "Would you like to view your character? ";
			cin >> userInput;
			userInput = lowerCase(userInput);

			if (userInput == "yes") {
				system("CLS");
				fontSize(10);
				drawCharacter(player1Char);
				Sleep(4000);

				system("CLS");
				fontSize(30);
				system("pause");
			}
			else if (userInput == "no") {
				system("CLS");
			}
			else {
				cout << "Please use a valid input.";
				Sleep(1000);
				system("CLS");
			}

			goto turn;
		}

	turn:
		system("CLS");
		player1Turn = !player1Turn;
		goto game;

	game:
		fontSize(30);
		cout << "Available characters:\n\n";
		cout << setw(25) << left << "NAME";
		cout << setw(15) << left << "NOSE"
			<< setw(15) << left << "HAIR"
			<< setw(15) << left << "SIZE"
			<< setw(15) << left << "GENDER"
			<< setw(15) << left << "AGE" << endl;

		cout << setw(25) << left << "--------------------";
		cout << setw(15) << left << "---------"
			<< setw(15) << left << "---------"
			<< setw(15) << left << "---------"
			<< setw(15) << left << "---------"
			<< setw(15) << left << "---------" << endl;

		for (unsigned int i = 0; i < characters[0].size(); i++) {
			if (i == 0) {
				if (elMacho) {
					if (player1arr[0]) {
						cout << setw(25) << left << characters[nameIndex][i];
						cout << setw(15) << left << characters[noseIndex][i]
							<< setw(15) << left << characters[hairIndex][i]
							<< setw(15) << left << characters[sizeIndex][i]
							<< setw(15) << left << characters[genderIndex][i]
							<< setw(15) << left << characters[ageIndex][i] << "\n";
					}
				}
			}
			else if (player1arr[i]) {
				cout << setw(25) << left << characters[nameIndex][i];
				cout << setw(15) << left << characters[noseIndex][i]
					<< setw(15) << left << characters[hairIndex][i]
					<< setw(15) << left << characters[sizeIndex][i]
					<< setw(15) << left << characters[genderIndex][i]
					<< setw(15) << left << characters[ageIndex][i] << "\n";
			}
		}

		cout << endl;
		cout << "====================================================================================================\n\n";


		if(player1Turn)	cout << "It is now Player 1's turn.\n\n";
		else cout << "It is now Player 2's turn.\n\n";
	
		cout << "Please type what you'd like to ask.\nAcceptable Commands:\n"
			<< "- Nose\n"
			<< "- Hair\n"
			<< "- Size\n"
			<< "- Gender\n"
			<< "- Age\n"
			<< "- Name (if you guess this wrong you lose)\n";

		cin >> question;
		question = lowerCase(question);
		system("CLS");

		if (question == "nose") {
			cout << "Acceptable Commands:\n"
				<< "- None\n"
				<< "- Average\n"
				<< "- Pointy\n";

			cin >> question;
			question = lowerCase(question);
			goto nose;
		}
		else if (question == "hair") {
			cout << "Acceptable Commands: \n"
				<< "- Long\n"
				<< "- Short\n"
				<< "- None\n";

			cin >> question;
			question = lowerCase(question);
			goto hair;
		}
		else if (question == "size") {
			cout << "Acceptable Commands: \n"
				<< "- Big\n"
				<< "- Medium\n"
				<< "- Small\n";

			cin >> question;
			question = lowerCase(question);
			goto size;
		}
		else if (question == "gender") {
			cout << "Acceptable Commands: (Yes, we assumed. Deal with it.)\n"
				<< "- Male\n"
				<< "- Female\n";

			cin >> question;
			question = lowerCase(question);
			goto gender;
		}
		else if (question == "age") {
			cout << "Acceptable Commands:\n"
				<< "- Young\n"
				<< "- Middle\n"
				<< "- Old\n";

			cin >> question;
			question = lowerCase(question);
			goto age;
		}
		else if (question == "name") {
			cout << "Please select the character's name.\n";
			goto name;
		}
		else {
			cout << "Please use a valid input.";
			Sleep(1000);
			system("CLS");
			goto game;
		}

	nose:
		if (lowerCase(question) == "average") {
			cout << "You guessed that the other player's character has an " << question << " nose.\n";
			if (characters[noseIndex][player1Char] == "average") {
				cout << "The answer is yes.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[noseIndex][i] != "average") {
						player1arr[i] = false;
					}
				}
			}
			else {
				cout << "The answer is no.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[noseIndex][i] == "average") {
						player1arr[i] = false;
					}
				}
			}
		}
		else if (lowerCase(question) == "pointy") {
			cout << "You guessed that the other player's character has a " << question << " nose.\n";
			if (characters[noseIndex][player1Char] == "pointy") {
				cout << "The answer is yes.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[noseIndex][i] != "pointy") {
						player1arr[i] = false;
					}
				}
			}
			else {
				cout << "The answer is no.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[noseIndex][i] == "pointy") {
						player1arr[i] = false;
					}
				}
			}
		}
		else if (lowerCase(question) == "none") {
			cout << "You guessed that the other player's character has no nose.\n";
			if (characters[noseIndex][player1Char] == "none") {
				cout << "The answer is yes.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[noseIndex][i] != "none") {
						player1arr[i] = false;
					}
				}
			}
			else {
				cout << "The answer is no.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[noseIndex][i] == "none") {
						player1arr[i] = false;
					}
				}
			}
		}

		Sleep(1500);
		goto turn;

	hair:
		cout << "You guessed that the other player's character has " << question << " hair.\n";
		if (lowerCase(question) == "long") {
			if (characters[hairIndex][player1Char] == "long") {
				cout << "The answer is yes.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[hairIndex][i] != "long") {
						player1arr[i] = false;
					}
				}
			}
			else {
				cout << "The answer is no.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[hairIndex][i] == "long") {
						player1arr[i] = false;
					}
				}
			}
		}
		else if (lowerCase(question) == "short") {
			if (characters[hairIndex][player1Char] == "short") {
				cout << "The answer is yes.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[hairIndex][i] != "short") {
						player1arr[i] = false;
					}
				}
			}
			else {
				cout << "The answer is no.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[hairIndex][i] == "short") {
						player1arr[i] = false;
					}
				}
			}
		}
		else if (lowerCase(question) == "none") {
			if (characters[hairIndex][player1Char] == "none") {
				cout << "The answer is yes.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[hairIndex][i] != "none") {
						player1arr[i] = false;
					}
				}
			}
			else {
				cout << "The answer is no.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[hairIndex][i] == "none") {
						player1arr[i] = false;
					}
				}
			}
		}

		Sleep(1500);
		goto turn;

	size:
		cout << "You guessed that the other player's character is " << question << ".\n";
		if (lowerCase(question) == "small") {
			if (characters[sizeIndex][player1Char] == "small") {
				cout << "The answer is yes.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[sizeIndex][i] != "small") {
						player1arr[i] = false;
					}
				}
			}
			else {
				cout << "The answer is no.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[sizeIndex][i] == "small") {
						player1arr[i] = false;
					}
				}
			}
		}
		else if (lowerCase(question) == "medium") {
			if (characters[sizeIndex][player1Char] == "medium") {
				cout << "The answer is yes.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[sizeIndex][i] != "medium") {
						player1arr[i] = false;
					}
				}
			}
			else {
				cout << "The answer is no.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[sizeIndex][i] == "medium") {
						player1arr[i] = false;
					}
				}
			}
		}
		else if (lowerCase(question) == "big") {
			if (characters[sizeIndex][player1Char] == "big") {
				cout << "The answer is yes.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[sizeIndex][i] != "big") {
						player1arr[i] = false;
					}
				}
			}
			else {
				cout << "The answer is no.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[sizeIndex][i] == "big") {
						player1arr[i] = false;
					}
				}
			}
		}

		Sleep(1000);
		goto turn;

	gender:
		cout << "You guessed that the other player's character is " << question << ".\n";
		if (lowerCase(question) == "male") {
			if (characters[genderIndex][player1Char] == "male") {
				cout << "The answer is yes.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[genderIndex][i] != "male") {
						player1arr[i] = false;
					}
				}
			}
			else {
				cout << "The answer is no.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[genderIndex][i] == "male") {
						player1arr[i] = false;
					}
				}
			}
		}
		else if (lowerCase(question) == "female") {
			if (characters[genderIndex][player1Char] == "female") {
				cout << "The answer is yes.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[genderIndex][i] != "female") {
						player1arr[i] = false;
					}
				}
			}
			else {
				cout << "The answer is no.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[genderIndex][i] == "female") {
						player1arr[i] = false;
					}
				}
			}
		}

		Sleep(1500);
		goto turn;

	age:
		cout << "You guessed that the other player's character is " << question << ".\n";
		if (lowerCase(question) == "young") {
			if (characters[ageIndex][player1Char] == "young") {
				cout << "The answer is yes.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[ageIndex][i] != "young") {
						player1arr[i] = false;
					}
				}
			}
			else {
				cout << "The answer is no.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[ageIndex][i] == "young") {
						player1arr[i] = false;
					}
				}
			}
		}
		else if (lowerCase(question) == "middle") {
			if (characters[ageIndex][player1Char] == "middle") {
				cout << "The answer is yes.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[ageIndex][i] != "middle") {
						player1arr[i] = false;
					}
				}
			}
			else {
				cout << "The answer is no.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[ageIndex][i] == "middle") {
						player1arr[i] = false;
					}
				}
			}
		}
		else if (lowerCase(question) == "old") {
			if (characters[ageIndex][player1Char] == "old") {
				cout << "The answer is yes.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[ageIndex][i] != "old") {
						player1arr[i] = false;
					}
				}
			}
			else {
				cout << "The answer is no.\n";

				for (int i = 0; i < player1arr.size(); i++) {
					if (characters[ageIndex][i] == "old") {
						player1arr[i] = false;
					}
				}
			}
		}

		Sleep(1500);
		goto turn;

	name:
		while (nameGuess == "") {
			cursorPos.Y = 3;
			SetConsoleCursorPosition(hOut, cursorPos);
			getline(cin, nameGuess, '\n');
		}

		cout << "You guessed that the other player's character is " << nameGuess << ".\n";
		nameGuess = lowerCase(nameGuess);

		if (nameGuess == "el macho") {
			guess = 0;
		}
		else if (nameGuess == "felonious gru") {
			guess = 1;
		}
		else if (nameGuess == "dru gru") {
			guess = 2;
		}
		else if (nameGuess == "stuart the minion") {
			guess = 3;
		}
		else if (nameGuess == "kevin the minion") {
			guess = 4;
		}
		else if (nameGuess == "bob the minion") {
			guess = 5;
		}
		else if (nameGuess == "dr. nefario") {
			guess = 6;
		}
		else if (nameGuess == "margo gru") {
			guess = 7;
		}
		else if (nameGuess == "agnes gru") {
			guess = 8;
		}
		else if (nameGuess == "edith gru") {
			guess = 9;
		}
		else if (nameGuess == "lucy wilde") {
			guess = 10;
		}
		else if (nameGuess == "vector") {
			guess = 11;
		}
		else if (nameGuess == "kyle the dog") {
			guess = 12;
		}


		if (player1Turn) {
			if (guess == player1Char) {
				cout << "\nYour guess was correct!" << endl << "\nYou win!";
			}
			else {
				cout << "\nYour guess was incorrect!" << endl << "\nYou lose!";
			}
		}
		else {
			if (guess == player1Char) {
				cout << "\nYour guess was correct!" << endl << "\nYou win!";
			}
			else {
				cout << "\nYour guess was incorrect!" << endl << "\nYou lose!";
			}
		}

		Sleep(3000);
		system("CLS");

		goto restart;


	restart:
		cursorPos.Y = 18;
		SetConsoleCursorPosition(hOut, cursorPos);
		fontSize(30);

		centreString("Would you like to restart?\n");
		centreString("Type \"Yes\" to restart game, \"No\" to go back to options, or \"Exit\" to exit the game.\n");
		centreString("\b\b\b\b");
		getline(cin, restart, '\n');

		if (restart == "yes") {
			system("CLS");
			goto characterSelect;
		}
		else if (restart == "no") {
			system("CLS");
			goto menu;
		}
		else if (restart == "exit") {
			system("CLS");
			endGame = true;
			goto begin;
		}
		else if (restart == "") {
			goto restart;
		}
		else {
			centreString("Please use a valid input.");
			Sleep(1000);
			goto restart;
		}
	}

	SetConsoleCursorPosition(hOut, endMsg);
	cout << "Exiting game..." << endl;
	Sleep(1000);
	return 0;
}