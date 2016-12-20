#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <string>

using namespace std;

class Game
{
private:
	string genre;
	string name;
	int age;
public:
	void setAge(int a)
	{
		age=a;
	}
	int getAge()
	{
		return age;
	}
	void setGame()
	{
		cout << "Enter the game's name: ";
		cin >> name;
		cout << "Enter the game's genre: ";
		cin >> genre;
		cout << "Age restriction: ";
		cin >> age;
	}
};
#endif
