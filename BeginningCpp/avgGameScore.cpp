#include "avgGameScore.h"

using namespace std;

void avgGameScore()
{
	int gameScore1 = 0, gameScore2 = 0, gameScore3 = 0;
	float quantity = 3.0;

	cout << "First game score: ";
	cin >> gameScore1;

	cout << "Second game score: ";
	cin >> gameScore2;

	cout << "Third game score: ";
	cin >> gameScore3;

	cout << "Average: " << (gameScore1 + gameScore2 + gameScore3) / quantity << endl;
}