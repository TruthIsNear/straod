#ifndef USER_H
#define USER_H
#include "Human.h"
#include <string>
#include <iostream>
class User: public Human
{
	public:
		//����������� ������ User
        User(
            std::string last_name,
            std::string name,
            std::string second_name,
            unsigned int play_time
        ) : Human(
            last_name,
            name,
            second_name
        ) 
		{
            this->play_time = play_time;
        }

        //��������� ���������� �����
        unsigned int get_play_time()
        {
            return this->play_time;
        }
	private:
		//���������� �������, ������� ������������ ������ � ����
		unsigned int play_time;
};

#endif
