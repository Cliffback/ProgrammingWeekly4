#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <conio.h>


char ConvertToUpper(char ch)
{
	return toupper(ch);
}

void Task1()
{
		system("CLS");
		std::cin.ignore(32767, '\n');
		std::cout << "Input a sentence\n";
		std::string sentence;
		std::getline(std::cin, sentence);

		for (int i = 0; i < sentence.size(); i++)
		{
			if (i != 0)
			{
				if (sentence[i - 1] == ' ')
				{
					sentence[i] = ConvertToUpper(sentence[i]);
				}
				else if (sentence[i] == 'i' && sentence[i] == ' ')
				{
					sentence[i] = ConvertToUpper(sentence[i]);
				}
				else if (sentence[i] >= 2)
				{
					if (sentence[i - 1] == ' ' && sentence[i - 2] == '.')
					{
						sentence[i] = ConvertToUpper(sentence[i]);
					}
				}
			}

			else {
				sentence[i] = ConvertToUpper(sentence.at(i));
			}

		}
		std::cout << "Updated sentence: " << sentence;
		char something = _getch();
	

}
