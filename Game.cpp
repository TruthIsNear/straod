#include <iostream>
#include "Game.h"
#include <string>
using namespace std;

//��������� �������� ����
void Game::set_name(string game_name)
{
	Game::name = game_name;
}
//��������� �������� ����
string Game::get_name()
{
	return Game::name;
}
//��������� ����� ����
void Game::set_genre(string game_genre)
{
	Game::genre = game_genre;
}
//��������� ����� ����
string Game::get_genre()
{
	return Game::genre;
}
//��������� ������ ��������
void Game::set_scores(int* game_scores)
{
	scores = game_scores;
}
//��������� �������� �����
void Game::set_average_score(float avg)
{
	Game::average_score = avg;
}
//��������� �������� �����
float Game::get_average_score()
{
	return Game::average_score;
}
