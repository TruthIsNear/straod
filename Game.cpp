#include <iostream>
#include "Game.h"
#include <string>
using namespace std;

//Установка названия игры
void Game::set_name(string game_name)
{
	Game::name = game_name;
}
//Получение названия игры
string Game::get_name()
{
	return Game::name;
}
//Установка жанра игры
void Game::set_genre(string game_genre)
{
	Game::genre = game_genre;
}
//Получение жанра игры
string Game::get_genre()
{
	return Game::genre;
}
//Установка оценок критиков
void Game::set_scores(int* game_scores)
{
	scores = game_scores;
}
//Установка среднего балла
void Game::set_average_score(float avg)
{
	Game::average_score = avg;
}
//Получение среднего балла
float Game::get_average_score()
{
	return Game::average_score;
}
