#include <iostream>
#include "Game.h"
#include "Human.h"
#include "Dev.h"
#include "User.h"
using namespace std;
void dev() {
	unsigned int dev_work_time=80;
	Dev *dev = new Dev("The", "Lord", "Gaben", dev_work_time);
	cout << "The dev of this game is " << dev->get_full_name() << endl;
	cout << "He has worked on this game for " << dev->get_work_time() << " hours" << endl
	<< endl;
	delete dev;
}
void user() {
	unsigned int user_play_time=50;
	User *user = new User("The", "Ordinary", "Player", user_play_time);
	cout << "The player is " << user->get_full_name() << endl;
	cout << "He has played this game for " << user->get_play_time() << " hours" << endl
	<< endl;
	delete user;
}
int main()
{
	//��������� ������ ��� ������� Game
	Game *game = new Game(7);
	
	string name;
	string genre;
	
	//���� �������� � ����������
	cout << "Name: ";
	getline(cin, name);
	
	//���� �����
	cout << "Genre: ";
	getline(cin, genre);
	
	//���������� �������� � ����� � ������ ������ Game
	game->set_name(name);
	game->set_genre(genre);
	//������
	int scores[5];
	//����� ���� ������
	int sum = 0;
	
	//���� ������
	cout <<"Enter new scores" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Score " << i+1 << ": ";
		cin >> scores[i];
		//������������
		sum += scores[i];
	}
	
	//��������� ������ � ������ ������ Game
	game->set_scores(scores);
	//������� ������� ����
	float average_score = sum / 5.0;
	//�������� ������� ���� � ������ ������ Game
	game->set_average_score(average_score);
	//������� ������ �� ����
	cout << "Average score for " << game->get_name() << " of "
		<< game->get_genre() << " genre is "
		<< game->get_average_score() << endl << endl;
	dev();
	user();
	//�������� ������� �� ������
	delete game;
	system("pause");
	return 0;
	
}
