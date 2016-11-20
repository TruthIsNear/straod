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
	//Выделение памяти для объекта Game
	Game *game = new Game(7);
	
	string name;
	string genre;
	
	//Ввод названия с клавиатуры
	cout << "Name: ";
	getline(cin, name);
	
	//Ввод жанра
	cout << "Genre: ";
	getline(cin, genre);
	
	//Сохранение названия и жанра в объект класса Game
	game->set_name(name);
	game->set_genre(genre);
	//Оценки
	int scores[5];
	//Сумма всех оценок
	int sum = 0;
	
	//Ввод оценок
	cout <<"Enter new scores" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Score " << i+1 << ": ";
		cin >> scores[i];
		//Суммирование
		sum += scores[i];
	}
	
	//Сохраняем оценки в объект класса Game
	game->set_scores(scores);
	//Считаем средний балл
	float average_score = sum / 5.0;
	//Сораняем средний балл в объект класса Game
	game->set_average_score(average_score);
	//Выводим данные по игре
	cout << "Average score for " << game->get_name() << " of "
		<< game->get_genre() << " genre is "
		<< game->get_average_score() << endl << endl;
	dev();
	user();
	//Удаление объекта из памяти
	delete game;
	system("pause");
	return 0;
	
}
