
#include <iostream>
#include <cstdlib>
#include <vector>

void print_vector(std::vector <int> guesses)
{
	for (int i = 0; i < guesses.size(); i++)
	{
		std::cout << guesses[i] << std::endl;
	}
}

int playGame()
{
	std::vector<int> guesses ;

	int random = rand() % 201;
	std::cout << random << std::endl;
	std::cout << "Guess a number : " << std::endl;
	while (true)
	{
		int guess;
		std::cin >> guess;
		guesses.push_back(guess);//assigns first to guesses[guess_count] then increments guess_count++;
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

	print_vector(guesses);
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
