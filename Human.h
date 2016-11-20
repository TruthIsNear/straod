#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include <sstream>

class Human
{
    public:
        //Конструктор класса Human
        Human(std::string last_name, std::string name, std::string second_name)
        {
            this->last_name = last_name;
            this->name = name;
            this->second_name = second_name;
        }

        //Получение ФИО человека
        std::string get_full_name()
        {
            std::ostringstream full_name;
            full_name << this->last_name << " "
                << this->name << " "
                << this->second_name;
            return full_name.str();
        }

    private:
        std::string name; //Имя
        std::string last_name; //Фамилия
        std::string second_name; //Отчество
};

#endif
