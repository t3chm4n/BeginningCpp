#include "main.h"

using namespace std;

int main()
{
	enum programs {	AVG_GAME_SCORE = 1,
					DIE_ROLLER,
					MENU_CHOOSER,
					GUESS_NUMBER,
					WORD_JUMBLE,
					GAME_COLLECTION,
					HANGMAN,
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
		cout << "99 - Quit" << endl;
		cin >> choose;

		switch(choose)
		{
			case AVG_GAME_SCORE:
				game_score_avg();
				break;
			case DIE_ROLLER:
				die_roller();
				break;
			case MENU_CHOOSER:
				menu_chooser_improved();
				break;
			case GUESS_NUMBER:
				i_guess_your_number();
				break;
			case WORD_JUMBLE:
				word_jumble_improved();
				break;
			case GAME_COLLECTION:
				game_collection();
				break;
			case HANGMAN:
				hangman_improved();
				break;
			case QUIT:
				break;
			default:
				cout << "You made an illegal choice." << endl;
		}
	}

	return 0;
}