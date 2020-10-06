
#include <iostream>
#include <conio.h>

bool gameWon{ false };
const int rows{ 10 };
const int columns{ 10 };

char empty{ ' ' };

char board[10][10]
{
	{empty,empty,empty,empty,empty,empty,empty,empty,empty,empty},
	{empty,empty,empty,empty,empty,empty,empty,empty,empty,empty},
	{empty,empty,empty,empty,empty,empty,empty,empty,empty,empty},
	{empty,empty,empty,empty,empty,empty,empty,empty,empty,empty},
	{empty,empty,empty,empty,empty,empty,empty,empty,empty,empty},
	{empty,empty,empty,empty,empty,empty,empty,empty,empty,empty},
	{empty,empty,empty,empty,empty,empty,empty,empty,empty,empty},
	{empty,empty,empty,empty,empty,empty,empty,empty,empty,empty},
	{empty,empty,empty,empty,empty,empty,empty,empty,empty,empty},
	{empty,empty,empty,empty,empty,empty,empty,empty,empty,empty}
};

struct Player
{
	int rows = 0;
	int columns = 0;
};

Player Player1;



void printTable()
{
	std::cout << "\n\n\n\t\t\t";
	for (int k = 0; k < columns + 13; k++)
	{
		std::cout << "-";

	}
	std::cout << "\n";

	for (int i = 0; i < rows; i++)
	{
		std::cout << "\t\t\t";
		for (int j = 0; j < columns; j++)
		{
			if (j == 0)
			{
				std::cout << "| ";
			}
			std::cout << board[i][j] << " ";
			if (j == 9)
			{
				std::cout << "|";
			}
		}
		std::cout << "\n";
	}
	std::cout << "\t\t\t";
	for (int k = 0; k < columns + 13; k++)
	{
		std::cout << "-";

	}
	std::cout << "\n";
}


void task()
{
	char movementInput{ 0 };
	board[Player1.rows][Player1.columns] = '*';

	int level = 1;
	board[8][1] = '/';
	board[8][8] = '\\';

	while (gameWon == false)
	{

		// Level 1
		if (level == 1)
		{
			if (Player1.rows == 8 && Player1.columns == 1)
			{
				board[8][1] = ' ';
				board[8][8] = ' ';
				board[2][8] = '\\';
				level = 0;
			}
			else if (Player1.rows == 8 && Player1.columns == 8)
			{
				board[8][1] = ' ';
				board[8][8] = ' ';
				board[6][6] = '/';
				board[4][4] = 'G';
				level = 2;
			}
		}
		else if (level == 0)
		{
			if (Player1.rows == 2 && Player1.columns == 8)
			{
				board[2][8] = ' ';
				board[8][1] = '/';
				board[8][8] = '\\';
				level = 1;

			}
		}

		if (level == 2)
		{
			if (Player1.rows == 6 && Player1.columns == 6)
			{
				board[6][6] = ' ';
				board[4][4] = ' ';
				board[8][1] = '/';
				board[8][8] = '\\';
				level = 1;
			}
			else if (Player1.rows == 4 && Player1.columns == 4)
			{
				gameWon = true;
			}
		}


		system("CLS");
		printTable();

		char movementInput = _getch();

		switch (movementInput)
		{
		case 'w':

			board[Player1.rows][Player1.columns] = ' ';
			Player1.rows--;
			if (Player1.rows == -1)
			{
				Player1.rows = 9;
			}
			board[Player1.rows][Player1.columns] = '*';


			break;

		case 'a':
			board[Player1.rows][Player1.columns] = ' ';
			Player1.columns--;
			if (Player1.columns == -1)
			{
				Player1.columns = 9;
			}
			board[Player1.rows][Player1.columns] = '*';

			break;

		case 's':
			board[Player1.rows][Player1.columns] = ' ';
			Player1.rows++;
			if (Player1.rows == 10)
			{
				Player1.rows = 0;
			}
			board[Player1.rows][Player1.columns] = '*';

			break;

		case 'd':
			board[Player1.rows][Player1.columns] = ' ';
			Player1.columns++;
			if (Player1.columns == 10)
			{
				Player1.columns = 0;
			}
			board[Player1.rows][Player1.columns] = '*';
			break;

		}

	}
}
int main()
{
	task();
}
