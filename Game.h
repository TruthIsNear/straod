#ifndef GAME_H
#define GAME_H
#include <string>
using namespace std;

class Game
{
	public:
		//�����������
		Game(int default_score)
        {
			scores = NULL;
        }
        //����������
		//��������� �������� ����
		void set_name(string);
		//��������� �������� ����
		string get_name();
		//��������� ����� ����
		void set_genre(string);
		//��������� ����� ����
		string get_genre();
		//��������� ������ ��������
		void set_scores(int *);
		//��������� �������� �����
		void set_average_score(float);
		//��������� �������� �����
		float get_average_score();
	private:
		//������ ��������
		int* scores;
		//������� ����
		float average_score;
		//��������
		string name;
		//����
		string genre;
};

#endif
