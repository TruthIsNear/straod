#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <string>
#include "Game.h"

class GameStack
{
	private:	
		static const int MAX_SIZE = 10;
		Game gamesarray[MAX_SIZE];
		int top;
	
	public:
		GameStack()
		{
			top = 0;
		}

		bool isEmpty()
		{
			return (top == 0);
		}

		bool isFull()
		{
			return (top == MAX_SIZE);
		}

		void push(Game game)
		{
			if (!isFull()) {
				gamesarray[top] = game;
				top++;
			}
		}

		Game pop()
		{
			if (!isEmpty()) {
	
				top = top--;
				return gamesarray[top];
			}
		}
};
#endif
