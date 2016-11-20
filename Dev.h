#ifndef DEV_H
#define DEV_H
#include "Human.h"
#include <string>
#include <iostream>
class Dev: public Human
{
	public:
		//Конструктор класса Dev
        Dev(
            std::string last_name,
            std::string name,
            std::string second_name,
            unsigned int work_time
        ) : Human(last_name, name, second_name) 
		{
            this->work_time = work_time;
        }
        //Получение количество часов
        unsigned int get_work_time()
        {
            return this->work_time;
        }
	private:
		//Количество времени, которое разработчик потратил на разработку игры
		unsigned int work_time;
};

#endif
