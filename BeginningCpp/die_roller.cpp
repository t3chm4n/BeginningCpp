// Die Roller
// Demonstrates generating random numbers

#include "die_roller.h"

using namespace std;

void dieRoller()
{
	srand(static_cast<unsigned int>(time(0)));  // seed random number generator based on current time

	int randomNumber = rand(); // generate random number

	int die = (randomNumber % 6) + 1; // get a number between 1 and 6
	cout << "You rolled a " << die << endl;

	//cout << "RAND_MAX: " << RAND_MAX << endl;
}
