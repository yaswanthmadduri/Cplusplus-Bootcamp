

#include <iostream>
#include <cstdlib>
#include <array>

void print_array(std::array <int, 251> guesses, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << guesses[i] << std::endl;
	}
}

int playGame()
{
	std::array<int, 251> guesses;
	int count = 0;

	int random = rand() % 201;
	std::cout << random << std::endl;
	std::cout << "Guess a number : " << std::endl;
	while (true)
	{
		int guess;
		std::cin >> guess;
		guesses[count++] = guess;
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

	print_array(guesses, count);
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
