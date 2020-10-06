#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "Tasks.h"

int main()
{


	while (true)
	{
		system("CLS");
		std::cout << "Weekly 4\n";
		std::cout << "\nTask 1 - Convert lower case to upper case\n";
		std::cout << "Task 2 - Character array game board\n";
		std::cout << "Task 3 - Program that can hold names and phone numbers\n";
		std::cout << "Task 4 - Dice task\n";
		std::cout << "Press 0 to exit\n";

		
		int choice = 0;
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			Task1();
			break;
		case 2:
			Task2();
			break;
		case 3:
			Task3();
			break;
		case 4:
			Task4();
			break;
		case 0:
			return 0;
		default:
			break;
		}
	}
	return 0;

}