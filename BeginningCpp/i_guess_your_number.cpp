// Guess My Number
// The classic number guessing game

#include "i_guess_your_number.h"

using namespace std;

void i_guess_your_number()
{
	//srand(static_cast<unsigned int>(time(0)));  //seed random number generator

	int min = 0, max = 100;
	int tries = 0;
	char guess;

	cout << "\tWelcome to I Guess Your Number\n\n";

	do
	{
		//int secretNumber = rand() % (max - min + 1) + 1;  // random number between 1 and 100
		//cout << "max: " << max << " min: " << min << endl;
		int secretNumber = guess_number(min, max);
		cout << "You thought on number " << secretNumber << "? Too (h)igh, too (l)ow, or (y)es?";
		cin >> guess;
		++tries;

		if (guess == 'h') //todo
		{
			max = secretNumber;
		}
		else if (guess == 'l')
		{
			min = secretNumber;
		}
		else if (guess == 'y')
		{
			cout << "\nThat's it! I got it in " << tries << " guesses!\n";
		}
		else
		{
			cout << "\nInvalid enter!\n";
		}

	} while (guess != 'y');

}

int guess_number(int min, int max)
{
	return ((max - min) / 2) + ((max - min) % 2) + min;
}