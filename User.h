#ifndef USER_H
#define USER_H
#include "Human.h"
#include <string>
#include <iostream>
class User: public Human
{
	public:
		//Конструктор класса User
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

        //Получение количества часов
        unsigned int get_play_time()
        {
            return this->play_time;
        }
	private:
		//Количество времени, которое пользователь провел в игре
		unsigned int play_time;
};

#endif
