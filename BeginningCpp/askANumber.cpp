#include "askANumber.h"

using namespace std;

int returnNumber(string msg);

void askANumber()
{
	cout << "The chosen number was " << returnNumber("Enter a integer: ") << endl;
}

int returnNumber(string msg = "Enter a number: ")
{
	cout << msg;
	int number;
	cin >> number;
	return number;
}