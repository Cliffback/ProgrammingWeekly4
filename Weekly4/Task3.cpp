#include <iostream>
#include <conio.h>
#include <string>
#include <vector>


struct people
{
	std::string name;
	long int phone;
} person[10];


void Task3()
{
	system("CLS");
	for (int i = 0; i < 10; i++)
	{
		std::cin.ignore(32767, '\n');

		std::cout << "\nPerson " << i + 1 << "/10\n";
		
		std::cout << "Name: ";
		std::getline(std::cin, person[i].name);

		std::cout << "Phone number: ";
		std::cin >> person[i].phone;
	}

	system("CLS");
	std::cout << "Press a key to see results: ";
	char something = _getch();

	system("CLS");
	std::cout << "Results:\n";

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Name: " << person[i].name << " Number: " << person[i].phone << "\n"; 
	}
	std::cout << "Press a key to go back to the main menu: ";
	char something2 = _getch();

	
}