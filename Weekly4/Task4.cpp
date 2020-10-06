#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>


int diceRoll()
{
	int randomNumber = rand() % 6 + 1;
	return randomNumber;
}

int rollFive()
{
	int roll[5]{};
	for (int i = 0; i < 5; i++)
	{
		roll[i] = diceRoll();
		std::cout << "Roll " << i + 1 << ": " << roll[i] << "\n";
	}
	
	int choice = 10;

	do 
	{
		std::cout << "\nChoose a dice to hold: ";
		std::cin >> choice;
		choice--;
		
		if (choice < 0 || choice > 5)
		{
		std::cout << "Unknown input, please try again.";
		}
	} while (choice < 0 || choice > 5);

	return roll[choice];
}

int storedDice[10]{0,0,0,0,0,0,0,0,0,0};

int rollResults()
{
	int numberSixes = 0;
	for (int i = 0; i < 10; i++)
	{
		if (storedDice[i] == 6)
		{
			numberSixes++;
		}
	}
	return numberSixes;
}

int findPairs()
{
	int numberPairs = 0;
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (storedDice[i] == storedDice[j] && storedDice[i] != 0 && i != j)
			{
				numberPairs++;
			}
		}
		
	}
	return numberPairs;
}

void Task4()
{
	system("CLS");
	int rolls = 0;

	while (true)
	{
	storedDice[rolls] = rollFive();
	
	std::cout << "\nStored dice: " << storedDice[rolls];
	rolls++;
	std::cout << "\nNumber of rolls: " << rolls;

	std::cout << "\n\nPress any key to roll more dice, or \"H\" to exit: ";
	char keyPress = _getch();

	std::cout << "\n\n";
	if (keyPress=='h')
	{
		break;
	}
	}
	system("CLS");
	std::cout << "\nNumber of sixes gathered: " << rollResults();
	std::cout << "\nNumber of pairs gathered: " << findPairs();

	std::cout << "\nPress a key to exit: ";
	char something = _getch();

	
}