// Game Collection
// Allow list, add and remove games from collection

#include "gameCollection.h"

using namespace std;

void gameCollection()
{
	vector<string> collection;

	vector<string>::iterator iter;

	enum options{LIST=1, ADD, DEL, QUIT};

	int option = 0;

	cout << "Welcome to Game Collection 1.0!" << endl;

	while (option != QUIT)
	{
		cout << "What you wanna do?" << endl;
		cout << "1 - List games" << endl;
		cout << "2 - Add game" << endl;
		cout << "3 - Remove game" << endl;
		cout << "4 - Quit Game Collection 1.0" << endl;

		cin >> option;

		string game = "";

		switch (option)
		{
			case LIST:
				if (collection.empty())
				{
					cout << "Your collection is empty!" << endl;
				}
				else
				{
					cout << "Behold your collection:" << endl;
					for (iter = collection.begin(); iter != collection.end(); ++iter)
					{
						cout << *iter << endl;
					}
				}
				break;

			case ADD:
				cout << "What game you wanna add?" << endl;
				cin >> game;
				iter = find(collection.begin(), collection.end(), game);
				if (iter != collection.end())
				{
					cout << "Game already in collection!" << endl;
				}
				else
				{
					collection.push_back(game);
					cout << "Game included =)" << endl;
				}
				break;

			case DEL:
				cout << "What game you wanna remove?" << endl;
				cin >> game;
				iter = find(collection.begin(), collection.end(), game);
				if (iter == collection.end())
				{
					cout << "Game isn't in collection!" << endl;
				}
				else
				{
					collection.erase(iter);
					cout << "Game removed =(" << endl;
				}
				break;

			case QUIT:
				break;

			default:
				cout << "Invalid option!" << endl;
				break;
		}
	}
}