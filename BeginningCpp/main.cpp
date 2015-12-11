#include "main.h"

using namespace std;

int main()
{
	enum programs {AVG_GAME_SCORE = 1,
		DIE_ROLLER,
		MENU_CHOOSER,
		GUESS_NUMBER,
		WORD_JUMBLE,
		GAME_COLLECTION,
		HANGMAN,
		ASK_A_NUMBER,
		QUIT = 99};
	int choose = 0;

	while (choose != 99)
	{
		cout << "Choose your app: " << endl;
		cout << "1 - Average Game Score" << endl;
		cout << "2 - Die Roller" << endl;
		cout << "3 - Menu Chooser Improved" << endl;
		cout << "4 - I Guess Your Number" << endl;
		cout << "5 - Word Jumble Improved" << endl;
		cout << "6 - Game Collection" << endl;
		cout << "7 - Hangman Improved" << endl;
		cout << "8 - Ask a Number" << endl;
		cout << "99 - Quit" << endl;
		cin >> choose;

		switch(choose)
		{
			case AVG_GAME_SCORE:
				avgGameScore();
				break;
			case DIE_ROLLER:
				dieRoller();
				break;
			case MENU_CHOOSER:
				menuChooserImproved();
				break;
			case GUESS_NUMBER:
				guessNumber();
				break;
			case WORD_JUMBLE:
				wordJumbleImproved();
				break;
			case GAME_COLLECTION:
				gameCollection();
				break;
			case HANGMAN:
				hangmanImproved();
				break;
			case ASK_A_NUMBER:
				askANumber();
				break;
			case QUIT:
				break;
			default:
				cout << "You made an illegal choice." << endl;
		}
	}

	return 0;
}