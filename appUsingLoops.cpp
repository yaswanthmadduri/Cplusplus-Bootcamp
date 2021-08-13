// appUsingLoops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

void print_array(int guesses[], int guess_count)
{
	for (int i = 0; i < guess_count; i++)
	{
		std::cout << guesses[i] << std::endl;
	}
}

int playGame()
{
	int guesses[251];
	int guess_count = 0;

	int random = rand() % 201;
	std::cout << random << std::endl;
	std::cout << "Guess a number : " << std::endl;
	while (true)
	{
		int guess;
		std::cin >> guess;
		guesses[guess_count++] = guess;//assigns first to guesses[guess_count] then increments guess_count++;
		if (guess == random)
		{
			std::cout << "You win" << std::endl;
			break;
		}
		else if (guess < random)
		{
			std::cout << "Guess is too low" << std::endl;
		}
		else
		{
			std::cout << "Guess is too high" << std::endl;
		}
	}

	print_array(guesses, guess_count);
	return 0;
}

int main()
{
	srand(time(NULL));//selecting a random number from the system time 
	int choice;

	do
	{
		std::cout << "0. Quit \n1. Play game\n";
		std::cin >> choice;

		switch (choice)
		{
		case 0:
			std::cout << "Thanq for nothing" << std::endl;
			break;
		case 1:
			std::cout << "Lets play!\n";
			playGame();
			break;
		}


	} while (choice != 0);


	return 0;
}
