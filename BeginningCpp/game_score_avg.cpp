#include "game_score_avg.h"

using namespace std;

void game_score_avg()
{
	int gameScore1 = 0, gameScore2 = 0, gameScore3 = 0;
	const float QTDE = 3.0;

	cout << "Primeiro game score: ";
	cin >> gameScore1;

	cout << "Segundo game score: ";
	cin >> gameScore2;

	cout << "Terceiro game score: ";
	cin >> gameScore3;

	cout << "Media: " << (gameScore1 + gameScore2 + gameScore3) / QTDE << endl;
}