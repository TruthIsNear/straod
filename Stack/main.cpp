#include <iostream>
#include "Game.h"
#include "Stack.h"

using namespace std;

int main()
{
	int n, age, i;
	GameStack my_stack;
	cout << "Enter number of games that you want to add to stack: ";
	cin >> n;
	Game *playlist = new Game[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Game #" << i + 1 << endl;
		playlist[i].setGame();
		my_stack.push(playlist[i]);
		if (playlist[i].getAge() >= 18) cout << "Game for adults\n";
		else cout << "Game for kids\n";
	}
	return 0;
}
