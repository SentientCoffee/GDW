#include "GuessGru.h"

using namespace std;
using std::cout;

HANDLE hIn = GetStdHandle(STD_INPUT_HANDLE);
HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

COORD bufferSize;
COORD titleMsg;
COORD endMsg;
COORD cursorPos;

INPUT_RECORD inputRecord;
DWORD numRead;

static bool endGame = false, elMacho = false;
int numPlayers, playerTurn;
int player1Char, player2Char, guess;
string userInput, charSelect, charName, question, nameGuess, restart;


string characters[] = { "El Macho", "Gru", "Dru", "Stuart", "Kevin", "Bob", "Nefario", "Margo", "Agnes", "Edith", "Lucy", "Vector", "Kyle" };
string Nose[] = { "average", "pointy", "pointy", "no nose", "no nose", "no nose", "pointy", "average", "average", "average", "average", "pointy", "no nose" };
string Hair[] = {  "short", "none", "long", "short", "short", "none", "short", "long", "long", "short", "long", "short", "short" };
string Age[] = {  "middle", "middle", "middle", "old", "old", "old", "old", "young", "young", "young", "middle", "middle", "young" };
string CharSize[] = { "big", "medium", "medium", "small", "medium", "small", "medium", "medium", "small", "small", "medium", "medium", "small" };
string Gender[] = {  "male", "male", "male", "male", "male", "male", "male", "female", "female", "female", "female", "male", "male" };


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

	::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	srand((unsigned)time(0));

	fontSize(300);
	SetConsoleCursorPosition(hOut, titleMsg);
	centreString("Guess Gru");
	SetConsoleCursorPosition(hOut, cursorPos);

	playMusic();

	Sleep(5000);
	system("CLS");

begin:
	while (!endGame) {
		fontSize(30);
	menu:
		cursorPos.Y = 0;
		SetConsoleCursorPosition(hOut, cursorPos);
		centreString("Guess Gru\n");
		centreString("===================================================================================================");

		cursorPos.Y = 35;
		SetConsoleCursorPosition(hOut, cursorPos);
		centreString("DLC?\n\n");

		userInput = "";
		cursorPos.Y = 13;
		SetConsoleCursorPosition(hOut, cursorPos);

		centreString("Options: (please type your choice)\n");
		centreString("- Single Player\n");
		centreString("- Two Player\n");
		centreString("Type \"Exit\" to quit the game");
		
		cursorPos.Y = 17;
		SetConsoleCursorPosition(hOut, cursorPos);
		centreString("\b\b\b\b");

		getline(cin, userInput);
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
		else if(userInput == "exit") {
			system("CLS");
			endGame = true;
			goto begin;
		}

	characterSelect:
		system("CLS");
		player1Char = 100;
		
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
					average = true, Short = true, middle = true, big = true, male = true;
				}
				break;
			case '1':
				player1Char = 1;
				pointy = true, none = true, middle = true, medium = true, male = true;
				break;
			case '2':
				player1Char = 2;
				pointy = true, Long = true, middle = true, medium = true, male = true;
				break;
			case '3':
				player1Char = 3;
				noNose = true, Short = true, old = true, medium = true, male = true;
				break;
			case '4':
				player1Char = 4;
				noNose = true, Short = true, old = true, Small = true, male = true;
				break;
			case '5':
				player1Char = 5;
				noNose = true, none = true, old = true, Small = true, male = true;
				break;
			case '6':
				player1Char = 6;
				pointy = true, Short = true, old = true, medium = true, male = true;
				break;
			case '7':
				player1Char = 7;
				average = true, Long = true, young = true, medium = true, female = true;
				break;
			case '8':
				player1Char = 8;
				average = true, Long = true, young = true, Small = true, female = true;
				break;
			case '9':
				player1Char = 9;
				average = true, Short = true, young = true, Small = true, female = true;
				break;
			case '0':
				player1Char = 10;
				average = true, Long = true, middle = true, medium = true, female = true;
				break;
			case '-':
				player1Char = 11;
				pointy = true, Short = true, middle = true, medium = true, male = true;
				break;
			case '=':
				player1Char = 12;
				noNose = true, Short = true, young = true, Small = true, male = true;
				break;
			default:
				break;
			}

			if (player1Char == 100) {
				goto characterSelect;
			}

			charName = characters[player1Char];

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
				fontSize(10);
				drawCharacter(player1Char);
				Sleep(2000);
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

			goto game;
		}

	game:
		system("CLS");
		fontSize(30);
		playerTurn = 1;

		cout << "It is now Player " << playerTurn << "'s turn.\n"
			<< "Please type what you'd like to ask. Acceptable Commands: \n"
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
				<< "- No nose\n"
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
			cursorPos.Y = 3;

			cout << "Please select the character's name.\n";
			SetConsoleCursorPosition(hOut, cursorPos);
			cin >> nameGuess;
			goto name;
		}
		else {
			cout << "Please use a valid input.";
			Sleep(1000);
			system("CLS");
			goto game;
		}

	nose:
		cout << "You guessed that the other player's character has a(n) " << question << " nose.\n";
		if (lowerCase(question) == "average") {
			if(Nose[player1Char] == "average") cout << "The answer is yes.\n";
			else cout << "The answer is no.\n";
		}
		else if (lowerCase(question) == "pointy") {
			if (Nose[player1Char] == "pointy") cout << "The answer is yes.\n";
			else cout << "The answer is no.\n";
		}
		else if (lowerCase(question) == "nonose") {
			if(Nose[player1Char] == "nonose") cout << "The answer is yes.\n";
			else cout << "The answer is no.\n";
		}

		Sleep(1000);
		goto game;
	
	hair:
		cout << "You guessed that the other player's character has " << question << " hair.\n";
		if (lowerCase(question) == "long") {
			if(Hair[player1Char] == "long") cout << "The answer is yes.\n";
			else cout << "The answer is no.\n";
		}
		else if (lowerCase(question) == "short") {
			if(Hair[player1Char] == "short") cout << "The answer is yes.\n";
			else cout << "The answer is no.\n";
		}
		else if (lowerCase(question) == "none") {
			if(Hair[player1Char] == "none") cout << "The answer is yes.\n";
			else cout << "The answer is no.\n";
		}
		
		Sleep(1000);
		goto game;

	size:
		cout << "You guessed that the other player's character is " << question << ".\n";
		if (lowerCase(question) == "small") {
			if (CharSize[player1Char] == "small") cout << "The answer is yes.\n";
			else cout << "The answer is no.\n";
		}
		else if (lowerCase(question) == "medium") {
			if (CharSize[player1Char] == "medium") cout << "The answer is yes.\n";
			else cout << "The answer is no.\n";
		}
		else if (lowerCase(question) == "big") {
			if (CharSize[player1Char] == "big") cout << "The answer is yes.\n";
			else cout << "The answer is no.\n";
		}

		Sleep(1000);
		goto game;

	gender:
		cout << "You guessed that the other player's character is " << question << ".\n";
		if (lowerCase(question) == "male") {
			if (Gender[player1Char] == "male") cout << "The answer is yes.\n";
			else cout << "The answer is no.\n";
		}
		else if (lowerCase(question) == "female") {
			if (Gender[player1Char] == "male") cout << "The answer is yes.\n";
			else cout << "The answer is no.\n";
		}

		Sleep(1000);
		goto game;

	age:
		cout << "You guessed that the other player's character is " << question << ".\n";
		if (lowerCase(question) == "young") {
			if (Age[player1Char] == "young") cout << "The answer is yes.\n";
			else cout << "The answer is no.\n";
		}
		else if (lowerCase(question) == "middle") {
			if (Age[player1Char] == "middle") cout << "The answer is yes.\n";
			else cout << "The answer is no.\n";
		}
		else if (lowerCase(question) == "old") {
			if (Age[player1Char] == "old") cout << "The answer is yes.\n";
			else cout << "The answer is no.\n";
		}

		Sleep(1000);
		goto game;

	name:
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


		if (playerTurn == 1) {
			if (guess == player2Char) {
				cout << "\nYour guess was correct!" << endl << "\nYou win!";
			}
			else {
				cout << "\nYour guess was incorrect!" << endl << "\nYou lose!";
			}
		}
		else if (playerTurn == 2) {
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
		system("CLS");

		cursorPos.Y = 18;
		SetConsoleCursorPosition(hOut, cursorPos);

		centreString("Would you like to restart?\n");
		centreString("Type \"Yes\" to restart game, \"No\" to go back to options, or \"Exit\" to exit the game.\n");
		centreString("\b\b\b\b");
		getline(cin, restart);

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
	}

	SetConsoleCursorPosition(hOut, endMsg);
	cout << "Exiting game..." << endl;
	Sleep(1000);
	return 0;
}