//Includes the header which has all other required includes (cleans up the look)
#include "GuessGru.h"
//standard using namespace
using namespace std;

//
const HANDLE hIn = GetStdHandle(STD_INPUT_HANDLE);
const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

//Simple messages/outputs the program gives title, ending, etc.
COORD titleMsg;
COORD endMsg;
COORD cursorPos;

//Input record, of what the user types
INPUT_RECORD inputRecord;
DWORD numRead;

//Name index for characters to be stored
const int nameIndex = 0,
//Charcter traits stored as numbers to make AI (single player work, also easier to code than string)
noseIndex = 1,
hairIndex = 2,
ageIndex = 3,
sizeIndex = 4,
genderIndex = 5;

//Bool used for core gameplay mechanics
static bool singlePlayer = false, player1Turn = false, endGame = false, elMacho = false;
int loop, player1Char, player2Char, guess;

//String for certain inputs that are letter based
string userInput, charSelect, charName, question, nameGuess, restart;

//Multi-dimensional array to store all the characters and their traits in one place
const array<array<string, 13>, 6> characters = { {
	{ "El Macho", "Felonious Gru", "Dru Gru",  "Stuart the Minion", "Kevin the Minion", "Bob the Minion", "Dr. Nefario", "Margo Gru", "Agnes Gru", "Edith Gru", "Lucy Wilde", "Vector",   "Kyle the Dog" },
	{ "average",  "pointy",        "pointy",   "none",              "none",             "none",           "pointy",      "average",   "average",   "average",   "average",    "pointy",   "none" },
	{ "short",    "none",          "long",     "short",             "short",            "none",           "short",       "long",      "long",      "short",     "long",       "short",    "short" },
	{ "middle",   "middle",        "middle",   "old",               "old",              "old",            "old",         "young",     "young",     "young",     "middle",     "middle",   "young" },
	{ "big",      "big",           "big",      "small",             "medium",           "small",          "medium",      "medium",    "small",     "small",     "medium",     "medium",   "small" },
	{ "male",     "male",          "male",     "male",              "male",             "male",           "male",        "female",    "female",    "female",    "female",     "male",     "male" }
} };

//bool to set all the characters values, that way yes and no questions are checked by the system (no cheating)
static array<bool, 13> player1Guess = { true, true, true, true, true, true, true, true, true, true, true, true, true };
static array<bool, 13> player2Guess = { true, true, true, true, true, true, true, true, true, true, true, true, true };

//Main function
int main() {
	//title, end, and typing start location
	titleMsg.X = 0;
	titleMsg.Y = 1;

	endMsg.X = 0;
	endMsg.Y = 0;

	cursorPos.X = 0;
	cursorPos.Y = 5;

	//seting the title to come out big
	SetConsoleTitle("Guess GRU");
	SetConsoleTextAttribute(hOut, 112);
	//the console size
	::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	//setting font for large output
	fontSize(300);
	SetConsoleCursorPosition(hOut, titleMsg);
	centreString("Guess GRU");
	SetConsoleCursorPosition(hOut, cursorPos);
	//plays the music file defined in the other .cpp
	playMusic();
	//sleep and clear for formatting and output
	Sleep(5650);
	system("CLS");

	//The main loop of the game
begin:
	while (!endGame) {
	menu:
		//Sets the basic gamemode, this will be changed soon
		singlePlayer = false;
		//re-scaling font size
		fontSize(50);
		SetConsoleTextAttribute(hOut, 112);
		//formatting and more output
		cursorPos.Y = 0;
		SetConsoleCursorPosition(hOut, cursorPos);
		centreString("Guess GRU\n");
		centreString("=================================================================");

		cursorPos.Y = 21;
		SetConsoleCursorPosition(hOut, cursorPos);
		SetConsoleTextAttribute(hOut, 127);
		centreString("DLC?\n\n");
		SetConsoleTextAttribute(hOut, 112);

		userInput = "";
		cursorPos.Y = 8;
		SetConsoleCursorPosition(hOut, cursorPos);

		//these will take the input of string 
		centreString("Options: (please type your choice)\n");
		centreString("- Single Player\n");
		centreString("- Two Player\n");
		centreString("Type \"Exit\" to quit the game");

		cursorPos.Y = 13;
		SetConsoleCursorPosition(hOut, cursorPos);
		centreString("\b\b\b");
		//gets input and sets to lowercase for the check
		getline(cin, userInput, '\n');
		userInput = lowerCase(userInput);
		//this is to amke sure proper input is given
		while (userInput != "single player" && userInput != "two player" && userInput != "dlc" && userInput != "exit") {
			centreString("Please use a valid input.");
			Sleep(1000);
			system("CLS");
			goto menu;
		}
		//sets the game mode depending on singlePlayer being true or false
		if (userInput == "single player") {
			singlePlayer = true;
			system("CLS");
			goto characterSelect;
		}
		else if (userInput == "two player") {
			system("CLS");
			singlePlayer = false;
			goto characterSelect;
		} //else is to add the dlc which will then require the user to pick single or two player
		else if (userInput == "dlc") {
			if (!elMacho) {
				system("CLS");
				cursorPos.Y = 8;
				SetConsoleCursorPosition(hOut, cursorPos);

				centreString("DLC character: El Macho\n");
				centreString("Would you like to add El Macho to the game?\n");
				centreString("\b\b\b\b\b");

				cin >> userInput;
				userInput = lowerCase(userInput);
				//if the user types yes to add dlc just some output and then the elMacho bool is set to true
				//adding the character to the game
				if (userInput == "yes") {
					elMacho = true;
					centreString("El Macho has been added to the game.\n");
					Sleep(2000);
					centreString("$19.99 has been deducted from your wallet.");
					Sleep(500);
					system("CLS");
					goto menu;
				}
				//Else is to not add the character
				else {
					elMacho = false;
					centreString("El Macho has not been added.");

					Sleep(1000);
					system("CLS");
					goto menu;
				}
			}//If the player already added the character we check that here
			else {
				system("CLS");

				SetConsoleCursorPosition(hOut, cursorPos);
				centreString("El Macho has already been added to the game.\n");

				Sleep(1000);
				system("CLS");
				goto menu;
			}
		}//this is used to exit the game and when the bool is true the program exits
		else if (userInput == "exit") {
			system("CLS");
			endGame = true;
			goto begin;
		}
		//setting the player's characters so they can choose
	characterSelect:
		player1Char = 100;
		player2Char = 100;
		player1Turn = false;
		guess = 100;
		//Setting the basic loop for guessing gameplay
		for (int i = 0; i < player1Guess.size(); i++) player1Guess[i] = true;
		for (int i = 0; i < player2Guess.size(); i++) player2Guess[i] = true;
		//an else setting the value to 1 or two depending on the case
		loop = singlePlayer ? 1 : 2;

		//If statement for adding random number generator for single player
		if (singlePlayer) {
			if (elMacho) player2Char = randomNum(0, characters[nameIndex].size() - 1);
			else player2Char = randomNum(1, characters[nameIndex].size() - 1);
		}
		//If statement setting up the two player (AI)
		for (int i = 0; i < loop; i++) {
			fontSize(30);
			system("CLS");
			if (singlePlayer) cout << "P";
			else {
				if (i == 0) cout << "Player 1, p";
				else cout << "Player 2, p";
			}
			//asking for user input to set the character
			cout << "lease choose your character:\n\n";

			//checks to see if the dlc was added, if it was it will outputted
			if (elMacho) {
				cout << "[`] El Macho\n";
			}

			//The list of characters players can pick from 
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

			//Output for clarification 
			cout << "Please select your character using the number row.\n";
			cout << "Or press M to go back to the main menu.";

			//reading the input
			ReadConsoleInput(hIn, &inputRecord, 1, &numRead);
			switch (inputRecord.EventType) {
				//cases to preform certain actions
			case KEY_EVENT:
				//basic switch using user input from a certain part
				switch (inputRecord.Event.KeyEvent.uChar.AsciiChar) {
					//to go back to the main menu
				case 'm':
					system("CLS");
					goto menu;
					break;
					//All other cases just set the player 1 or 2 (AI) character
					//breaks so it doesn't run through all
				case '`':
					if (elMacho) {
						if (i == 0) player1Char = 0;
						else player2Char = 0;
					}
					break;
				case '1':
					if (i == 0) player1Char = 1;
					else player2Char = 1;
					break;
				case '2':
					if (i == 0) player1Char = 2;
					else player2Char = 2;
					break;
				case '3':
					if (i == 0) player1Char = 3;
					else player2Char = 3;
					break;
				case '4':
					if (i == 0) player1Char = 4;
					else player2Char = 4;
					break;
				case '5':
					if (i == 0) player1Char = 5;
					else player2Char = 5;
					break;
				case '6':
					if (i == 0) player1Char = 6;
					else player2Char = 6;
					break;
				case '7':
					if (i == 0) player1Char = 7;
					else player2Char = 7;
					break;
				case '8':
					if (i == 0) player1Char = 8;
					else player2Char = 8;
					break;
				case '9':
					if (i == 0) player1Char = 9;
					else player2Char = 9;
					break;
				case '0':
					if (i == 0) player1Char = 10;
					else player2Char = 10;
					break;
				case '-':
					if (i == 0) player1Char = 11;
					else player2Char = 11;
					break;
				case '=':
					if (i == 0) player1Char = 12;
					else player2Char = 12;
					break;
				default:
					break;
				}

				//if statement for gameplay
				if ((i == 0 && player1Char == 100) || (i == 1 && player2Char == 100)) {
					i--;
					continue;
				}

				//setting the pick character in the multi-dimensional array (will help with output and chart)
				else {
					if (i == 0) charName = characters[nameIndex][player1Char];
					else charName = characters[nameIndex][player2Char];
				}

				//basic starting point for typing
				cursorPos.Y = 18;
				SetConsoleCursorPosition(hOut, cursorPos);

				//double checking user input
				cout << charName << "\n";
				cout << "Is this the character you'd like to choose? (Type \"Yes\" or \"No\"): ";
				cin >> charSelect;
				charSelect = lowerCase(charSelect);

				//input checking for yes or no, with outcomes
				if (charSelect == "yes") {
					system("CLS");
					fontSize(30);
					cout << "Your character is " << charName << "." << endl;
					Sleep(1000);
				}
				else if (charSelect == "no") {
					cout << "Please choose another character.";
					Sleep(1000);
					system("CLS");
					i--;
					continue;
				}
				//invalid input check
				else {
					cout << "Please use a valid input.";
					Sleep(1000);
					system("CLS");
					i--;
					continue;
				}

				//this is the character output part with art
				cout << "Would you like to view your character? (Type \"Yes\" or \"No\"): ";
				cin >> userInput;
				userInput = lowerCase(userInput);

				//if the user types yes it will output the character
				if (userInput == "yes") {
					system("CLS");

					//reducing the font size so the characters are actually visible
					fontSize(10);
					//prints the player's character
					if (i == 0) drawCharacter(player1Char);
					else drawCharacter(player2Char);
					cout << endl;

					Sleep(4000);
					system("CLS");
				}
				//if the user types no it will not show the image
				else if (userInput == "no") {
					system("CLS");
				}
				//checks the input
				else {
					cout << "Please type \"Yes\" or \"No.\"";
					Sleep(1000);
					system("CLS");
				}
			}
		}
		//goto statement for the turn code loop
		goto turn;

		//turn loop for core gameplay
	turn:
		system("CLS");
		player1Turn = !player1Turn;

		if (!singlePlayer) {
			fontSize(50);
			//will just tell which player should be typing 
			cout << "\n\n\nPlease pass control to Player ";
			if (player1Turn) cout << "1";
			else cout << "2";
			cout << ".\n\n";

			Sleep(2000);
			system("pause");
		}
		//going to game loop
		goto game;

		//game 
	game:
		system("CLS");
		fontSize(30);

		//this will output the remaining characters the player can guess from
		cout << "Available characters:\n\n";
		cout << setw(25) << left << "NAME";
		cout << setw(15) << left << "NOSE"
			<< setw(15) << left << "HAIR"
			<< setw(15) << left << "SIZE"
			<< setw(15) << left << "GENDER"
			<< setw(15) << left << "AGE" << endl;
		//simple formatting
		cout << setw(25) << left << "--------------------";
		cout << setw(15) << left << "---------"
			<< setw(15) << left << "---------"
			<< setw(15) << left << "---------"
			<< setw(15) << left << "---------"
			<< setw(15) << left << "---------" << endl;

		//this is the part that outputs the chart, that updates as the game goes along
		for (unsigned int i = 0; i < characters[0].size(); i++) {
			if (i == 0) {
				if (elMacho) {
					if (player1Turn) {
						if (player1Guess[0]) {
							cout << setw(25) << left << characters[nameIndex][i];
							cout << setw(15) << left << characters[noseIndex][i]
								<< setw(15) << left << characters[hairIndex][i]
								<< setw(15) << left << characters[sizeIndex][i]
								<< setw(15) << left << characters[genderIndex][i]
								<< setw(15) << left << characters[ageIndex][i] << "\n";
						}
					}
					else {
						if (player2Guess[0]) {
							cout << setw(25) << left << characters[nameIndex][i];
							cout << setw(15) << left << characters[noseIndex][i]
								<< setw(15) << left << characters[hairIndex][i]
								<< setw(15) << left << characters[sizeIndex][i]
								<< setw(15) << left << characters[genderIndex][i]
								<< setw(15) << left << characters[ageIndex][i] << "\n";
						}
					}
				}
			}
			else {
				if (player1Turn) {
					if (player1Guess[i]) {
						cout << setw(25) << left << characters[nameIndex][i];
						cout << setw(15) << left << characters[noseIndex][i]
							<< setw(15) << left << characters[hairIndex][i]
							<< setw(15) << left << characters[sizeIndex][i]
							<< setw(15) << left << characters[genderIndex][i]
							<< setw(15) << left << characters[ageIndex][i] << "\n";
					}
				}
				else {
					if (player2Guess[i]) {
						cout << setw(25) << left << characters[nameIndex][i];
						cout << setw(15) << left << characters[noseIndex][i]
							<< setw(15) << left << characters[hairIndex][i]
							<< setw(15) << left << characters[sizeIndex][i]
							<< setw(15) << left << characters[genderIndex][i]
							<< setw(15) << left << characters[ageIndex][i] << "\n";
					}
				}
			}
		}
		//ending the output and statements with some formatting
		cout << endl << "====================================================================================================\n\n";

		//setting turns again
		if (!singlePlayer) {
			if (player1Turn) cout << "It is now Player 1's turn.\n";
			else cout << "It is now Player 2's turn.\n";
		}

		//this is the basic questions that a player can pick from
		cout << "Please type what you'd like to ask.\n\n"
			<< "Acceptable Commands:\n"
			<< "- Nose\n"
			<< "- Hair\n"
			<< "- Size\n"
			<< "- Gender\n"
			<< "- Age\n"
			<< "- Name (if you guess this wrong, you lose)\n\n"
			<< "Command: ";

		//takes the input
		cin >> question;
		question = lowerCase(question);
		system("CLS");

		//if statements that will check input and go to the respected area
		if (question == "nose") goto nose;
		else if (question == "hair") goto hair;
		else if (question == "size") goto size;
		else if (question == "gender") goto gender;
		else if (question == "age") goto age;
		else if (question == "name") goto name;
		else {
			//invalid input check
			cout << "Please use a valid input.";
			Sleep(1000);
			system("CLS");
			goto game;
		}

	computerGuess:
		system("CLS");
		fontSize(30);

		//computer guessing part
		cout << "\n\n"
			<< "The computer is guessing...\n\n";

		//just the question asking part
		while (true) {
			//if statements for gamemodes
			if (elMacho) guess = randomNum(0, player2Guess.size() - 1);
			else guess = randomNum(1, player2Guess.size() - 1);
			//player 2 guess
			if (player2Guess[guess]) {
				nameGuess = characters[nameIndex][guess];
				break;
			}
		}
		//when the computer guesses your character
		cout << "The computer has guessed that your character is " << nameGuess << ".\n";

		//if the computer guesses your character
		if (player1Char == guess) {
			cout << "The computer has guessed your character!\n"
				<< "\nThe computer's character was " << nameGuess << "."
				<< "\nYou lose!";
			Sleep(2000);

			//changing font size
			fontSize(10);
			drawCharacter(player1Char);
			cout << endl;

			Sleep(4000);
			system("CLS");
			goto restart;
		}
		//checking if the computer has guessed your character and saying that it has not
		else {
			player2Guess[guess] = false;
			nameGuess = "";
			guess = 100;

			cout << "The computer has not guessed your character.\n\n"
				<< "It is now your turn.";

			Sleep(4000);
			goto game;
		}

		//the repected command with the goto statements from earlier
		//each has a narrowed down pre-set questions that a user may ask
	nose:
		cout << "Acceptable Commands:\n"
			<< "- None\n"
			<< "- Average\n"
			<< "- Pointy\n\n"
			<< "Or type \"Back\" to go back to the character selection.\n"
			<< "Command: ";

		cin >> question;
		question = lowerCase(question);
		cout << endl;

		//if statements to check the outcomes depending on which characters have been set and which question was asked
		//Next lines of code are all preforming this similar function
		if (question == "average") {
			cout << "You guessed that the other player's character has an " << question << " nose.\n";
			if (player1Turn) {
				if (characters[noseIndex][player2Char] == "average") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[noseIndex][i] != "average") player1Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[noseIndex][i] == "average") player1Guess[i] = false;
					}
				}
			}
			else {
				if (characters[noseIndex][player1Char] == "average") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[noseIndex][i] != "average") player2Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[noseIndex][i] == "average") player2Guess[i] = false;
					}
				}
			}
		}
		else if (question == "pointy") {
			cout << "You guessed that the other player's character has a " << question << " nose.\n";
			if (player1Turn) {
				if (characters[noseIndex][player2Char] == "pointy") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[noseIndex][i] != "pointy") player1Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[noseIndex][i] == "pointy") player1Guess[i] = false;
					}
				}
			}
			else {
				if (characters[noseIndex][player1Char] == "pointy") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[noseIndex][i] != "pointy") player2Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[noseIndex][i] == "pointy") player2Guess[i] = false;
					}
				}
			}
		}
		else if (question == "none") {
			cout << "You guessed that the other player's character has no nose.\n";
			if (player1Turn) {
				if (characters[noseIndex][player2Char] == "none") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[noseIndex][i] != "none") player1Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[noseIndex][i] == "none") player1Guess[i] = false;
					}
				}
			}
			else {
				if (characters[noseIndex][player1Char] == "none") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[noseIndex][i] != "none") player2Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[noseIndex][i] == "none") player2Guess[i] = false;
					}
				}
			}
		}
		else if (question == "back") goto game;
		else {
			cout << "Please enter an acceptable command.";
			Sleep(1000);
			system("CLS");
			goto nose;
		}

		Sleep(3000);

		if (!singlePlayer) goto turn;
		else goto computerGuess;
		//now the goto for the hair and its narrowed down question
		//following if statements preform a similar task as the previous ones above
	hair:
		cout << "Acceptable Commands:\n"
			<< "- Long\n"
			<< "- Short\n"
			<< "- None\n\n"
			<< "Or type \"Back\" to go back to the character selection.\n"
			<< "Command: ";

		cin >> question;
		question = lowerCase(question);
		cout << endl;

		cout << "You guessed that the other player's character has " << question << " hair.\n";
		if (question == "long") {
			if (player1Turn) {
				if (characters[hairIndex][player2Char] == "long") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[hairIndex][i] != "long") player1Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[hairIndex][i] == "long") player1Guess[i] = false;
					}
				}
			}
			else {
				if (characters[hairIndex][player1Char] == "long") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[hairIndex][i] != "long") player2Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[hairIndex][i] == "long") player2Guess[i] = false;
					}
				}
			}
		}
		else if (question == "short") {
			if (player1Turn) {
				if (characters[hairIndex][player2Char] == "short") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[hairIndex][i] != "short") player1Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[hairIndex][i] == "short") player1Guess[i] = false;
					}
				}
			}
			else {
				if (characters[hairIndex][player1Char] == "short") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[hairIndex][i] != "short") player2Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[hairIndex][i] == "short") player2Guess[i] = false;
					}
				}
			}
		}
		else if (question == "none") {
			if (player1Turn) {
				if (characters[hairIndex][player2Char] == "none") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[hairIndex][i] != "none") player1Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[hairIndex][i] == "none") player1Guess[i] = false;
					}
				}
			}
			else {
				if (characters[hairIndex][player1Char] == "none") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[hairIndex][i] != "none") player2Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[hairIndex][i] == "none") player2Guess[i] = false;
					}
				}
			}
		}
		else if (question == "back") goto game;
		else {
			cout << "Please enter an acceptable command.";
			Sleep(1000);
			system("CLS");
			goto hair;
		}

		Sleep(3000);

		if (!singlePlayer) goto turn;
		else goto computerGuess;
		//size goto similar to the previous goto statements for the user input question selecting
	size:
		cout << "Acceptable Commands:\n"
			<< "- Big\n"
			<< "- Medium\n"
			<< "- Small\n\n"
			<< "Or type \"Back\" to go back to the character selection.\n"
			<< "Command: ";

		cin >> question;
		question = lowerCase(question);
		cout << endl;

		cout << "You guessed that the other player's character is " << question << ".\n";
		if (question == "small") {
			if (player1Turn) {
				if (characters[sizeIndex][player2Char] == "small") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[sizeIndex][i] != "small") player1Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[sizeIndex][i] == "small") player1Guess[i] = false;
					}
				}
			}
			else {
				if (characters[hairIndex][player1Char] == "small") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[sizeIndex][i] != "small") player2Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[sizeIndex][i] == "small") player2Guess[i] = false;
					}
				}
			}
		}
		else if (question == "medium") {
			if (player1Turn) {
				if (characters[sizeIndex][player2Char] == "medium") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[sizeIndex][i] != "medium") player1Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[sizeIndex][i] == "medium") player1Guess[i] = false;
					}
				}
			}
			else {
				if (characters[hairIndex][player1Char] == "medium") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[sizeIndex][i] != "medium") player2Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[sizeIndex][i] == "medium") player2Guess[i] = false;
					}
				}
			}
		}
		else if (question == "big") {
			if (player1Turn) {
				if (characters[sizeIndex][player2Char] == "big") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[sizeIndex][i] != "big") player1Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[sizeIndex][i] == "big") player1Guess[i] = false;
					}
				}
			}
			else {
				if (characters[hairIndex][player1Char] == "big") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[sizeIndex][i] != "big") player2Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[sizeIndex][i] == "big") player2Guess[i] = false;
					}
				}
			}
		}
		else if (question == "back") goto game;
		else {
			cout << "Please enter an acceptable command.";
			Sleep(1000);
			system("CLS");
			goto size;
		}

		Sleep(3000);

		if (!singlePlayer) goto turn;
		else goto computerGuess;
		//Goto for the gender possible inputs, and the following if statements 
	gender:
		cout << "Acceptable Commands: (Yes, we assumed. Deal with it.)\n"
			<< "- Male\n"
			<< "- Female\n\n"
			<< "Or type \"Back\" to go back to the character selection.\n"
			<< "Command: ";

		cin >> question;
		question = lowerCase(question);
		cout << endl;

		cout << "You guessed that the other player's character is " << question << ".\n";
		if (question == "male") {
			if (player1Turn) {
				if (characters[genderIndex][player2Char] == "male") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[genderIndex][i] != "male") player1Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[genderIndex][i] == "male") player1Guess[i] = false;
					}
				}
			}
			else {
				if (characters[genderIndex][player1Char] == "male") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[genderIndex][i] != "male") player2Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[genderIndex][i] == "male") player2Guess[i] = false;
					}
				}
			}
		}
		else if (question == "female") {
			if (player1Turn) {
				if (characters[genderIndex][player2Char] == "female") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[genderIndex][i] != "female") player1Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[genderIndex][i] == "female") player1Guess[i] = false;
					}
				}
			}
			else {
				if (characters[hairIndex][player1Char] == "female") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[genderIndex][i] != "female") player2Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[genderIndex][i] == "female") player2Guess[i] = false;
					}
				}
			}
		}
		else if (question == "back") goto game;
		else {
			cout << "Please enter an acceptable command.";
			Sleep(1000);
			system("CLS");
			goto gender;
		}

		Sleep(3000);

		if (!singlePlayer) goto turn;
		else goto computerGuess;
		//age goto preforms like the other goto statements before (in regards to question checking and outcome)
	age:
		cout << "Acceptable Commands:\n"
			<< "- Young\n"
			<< "- Middle\n"
			<< "- Old\n\n"
			<< "Or type \"Back\" to go back to the character selection.\n"
			<< "Command: ";

		cin >> question;
		question = lowerCase(question);
		cout << endl;

		cout << "You guessed that the other player's character is " << question << ".\n";
		if (question == "young") {
			if (player1Turn) {
				if (characters[ageIndex][player2Char] == "young") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[ageIndex][i] != "young") player1Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[ageIndex][i] == "young") player1Guess[i] = false;
					}
				}
			}
			else {
				if (characters[ageIndex][player1Char] == "young") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[ageIndex][i] != "young") player2Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[ageIndex][i] == "young") player2Guess[i] = false;
					}
				}
			}
		}
		else if (question == "middle") {
			if (player1Turn) {
				if (characters[ageIndex][player2Char] == "middle") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[ageIndex][i] != "middle") player1Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[ageIndex][i] == "middle") player1Guess[i] = false;
					}
				}
			}
			else {
				if (characters[ageIndex][player1Char] == "middle") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[ageIndex][i] != "middle") player2Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[ageIndex][i] == "middle") player2Guess[i] = false;
					}
				}
			}
		}
		else if (question == "old") {
			if (player1Turn) {
				if (characters[ageIndex][player2Char] == "old") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[ageIndex][i] != "old") player1Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player1Guess.size(); i++) {
						if (characters[ageIndex][i] == "old") player1Guess[i] = false;
					}
				}
			}
			else {
				if (characters[ageIndex][player1Char] == "old") {
					cout << "The answer is yes.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[ageIndex][i] != "old") player2Guess[i] = false;
					}
				}
				else {
					cout << "The answer is no.\n";

					for (int i = 0; i < player2Guess.size(); i++) {
						if (characters[ageIndex][i] == "old") player2Guess[i] = false;
					}
				}
			}
		}
		else if (question == "back") goto game;
		else {
			cout << "Please enter an acceptable command.";
			Sleep(1000);
			system("CLS");
			goto age;
		}

		Sleep(3000);

		if (!singlePlayer) goto turn;
		else goto computerGuess;
		//name goto for guessing the name of the character
		//preforms differently than the previous few goto statements
	name:
		system("CLS");
		//a do while loop
		do {
			//ask the user to type the name of the character
			if (singlePlayer) cout << "Player 1, ";
			else cout << "Player 2, ";
			cout << "please select the character's name.\n"
				//incase the player/user wants to return
				<< "Or type \"Back\" to go back to the character selection.";

			cout << "Available characters:\n";
			cout << setw(25) << left << "--------------------" << endl;
			//if statement to check which characters are left
			//uses for loop to run through and check
			for (unsigned int i = 0; i < characters[0].size(); i++) {
				if (i == 0) {
					if (elMacho) {
						if (player1Turn) {
							if (player1Guess[0]) cout << setw(25) << left << characters[nameIndex][i] << "\n";
						}
						else {
							if (player2Guess[0]) cout << setw(25) << left << characters[nameIndex][i] << "\n";
						}
					}
				}
				else {
					if (player1Turn) {
						if (player1Guess[i]) cout << setw(25) << left << characters[nameIndex][i] << "\n";
					}
					else {
						if (player2Guess[i]) cout << setw(25) << left << characters[nameIndex][i] << "\n";
					}
				}
			}
			//this will take the input
			cout << "\nGuess:\n";
			getline(cin, nameGuess, '\n');
			nameGuess = lowerCase(nameGuess);
			//will check each character to see if the input matches 
			if (nameGuess != "el macho" && nameGuess != "felonious gru" && nameGuess != "dru gru" && nameGuess != "stuart the minion"
				&& nameGuess != "kevin the minion" && nameGuess != "bob the minion" && nameGuess != "dr. nefario"
				&& nameGuess != "margo gru" && nameGuess != "agnes gru" && nameGuess != "edith gru"
				&& nameGuess != "lucy wilde" && nameGuess != "vector" && nameGuess != "kyle the dog" && nameGuess != "back") {
				cout << "Please use a valid input.";

				Sleep(1000);
				system("CLS");
				goto name;
			}
			//the do while ending
		} while (nameGuess == "");
		//to return back if the user did not want to guess the name
		if (nameGuess == "back") goto game;
		//setting the user input of character name to numbers for easy system checking
		if (nameGuess == "el macho")                 guess = 0;
		else if (nameGuess == "felonious gru")       guess = 1;
		else if (nameGuess == "dru gru")             guess = 2;
		else if (nameGuess == "stuart the minion")   guess = 3;
		else if (nameGuess == "kevin the minion")    guess = 4;
		else if (nameGuess == "bob the minion")      guess = 5;
		else if (nameGuess == "dr. nefario")         guess = 6;
		else if (nameGuess == "margo gru")           guess = 7;
		else if (nameGuess == "agnes gru")	         guess = 8;
		else if (nameGuess == "edith gru")           guess = 9;
		else if (nameGuess == "lucy wilde")          guess = 10;
		else if (nameGuess == "vector")              guess = 11;
		else if (nameGuess == "kyle the dog")        guess = 12;

		//sinple output
		cout << endl;
		cout << "You guessed that the other player's character is " << characters[nameIndex][guess] << ".\n";

		//if the player guesses correctly (player 1)
		if (player1Turn) {
			if (guess == player2Char) {
				cout << "\nYour guess was correct!\n";
				cout << "\nYou win!";
				Sleep(2000);

				fontSize(10);
				drawCharacter(player2Char);
			}
			//if the player guesses incorrectly and the proper outcome
			else {
				nameGuess = characters[nameIndex][player2Char];

				cout << "\nYour guess was incorrect!"
					<< "\nThe Player 2's character was " << nameGuess << "."
					<< "\nYou lose!";
				Sleep(2000);

				fontSize(10);
				drawCharacter(player2Char);
				cout << endl;
			}
		}
		//checks to see if player 2 wins
		else {
			if (guess == player1Char) {
				cout << "\nYour guess was correct!\n";
				cout << "\nYou win!";
				Sleep(2000);

				fontSize(10);
				drawCharacter(player1Char);
				cout << endl;
			}
			//if player guesses wrong
			else {
				nameGuess = characters[nameIndex][player1Char];

				cout << "\nYour guess was incorrect!"
					<< "\nThe Player 1's character was " << nameGuess << "."
					<< "\nYou lose!";
				Sleep(2000);

				fontSize(10);
				drawCharacter(player1Char);
				cout << endl;
			}
		}

		Sleep(3000);
		system("CLS");

		goto restart;

		//at the end of game/round this will check if the user wants to play again or restart
	restart:
		cursorPos.Y = 15;
		SetConsoleCursorPosition(hOut, cursorPos);
		fontSize(30);

		centreString("Would you like to restart?\n\n");
		centreString("Type \"Yes\" to restart game in the current game mode,\n");
		centreString("\"No\" to go back to options,\n");
		centreString("or \"Exit\" to exit the game.\n");

		centreString("\b\b\b\b");
		getline(cin, restart, '\n');

		//checking inputs and preforming the respected actions
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

	//if the user exits the game
	//and what will output/happen
	SetConsoleCursorPosition(hOut, endMsg);
	cout << "Exiting game..." << endl;
	Sleep(1000);
	return 0;
}