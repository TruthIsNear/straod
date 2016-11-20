#ifndef GAME_H
#define GAME_H
#include <string>
using namespace std;

class Game
{
	public:
		//Конструктор
		Game(int default_score)
        {
			scores = NULL;
        }
        //Деструктор
		//Установка названия игры
		void set_name(string);
		//Получение названия игры
		string get_name();
		//Установка жанра игры
		void set_genre(string);
		//Получение жанра игры
		string get_genre();
		//Установка оценок критиков
		void set_scores(int *);
		//Установка среднего балла
		void set_average_score(float);
		//Получение среднего балла
		float get_average_score();
	private:
		//Оценки критиков
		int* scores;
		//Средний балл
		float average_score;
		//Название
		string name;
		//Жанр
		string genre;
};

#endif
