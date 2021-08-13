// Loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double forLoop(int factorial) {
    int fact = factorial;
    for (int i = 1; i <= 5; i++)
    {
        factorial = factorial * i;
    }
    std::cout << "Factorial of " << fact << " is " << factorial << std::endl;
    return factorial;
}

double whileLoop(int factorial)
{
    int fact = factorial;
    int i = factorial - 1;
    while (i > 1) {
        
        factorial *= i;
        i--;

    }
    std::cout << "Factorial of " << factorial << " is " << factorial << std::endl;
    return factorial;
}

double doWhileLoop() {
    std::string password = "guessPassword";
    std::string guess;
    do {
        std::cout << "Guess the password : ";
        std::cin >> guess;
    } while (guess != password);

    return 0;
}

double breakAndContinue()
{
    std::string sentence = "Hello my name is yash!";
    for (int i = 0; i < sentence.size(); i++)
    {
        std::cout << sentence[i] << std::endl;
        if (sentence[i] == 'o')
        {
            std::cout << "found o" << std::endl;
            break;
        }
    }
    for (int i = 0; i < sentence.size(); i++)
    {
        if (sentence[i] == ' ')
        {
            continue;// continues out of the loop when " " (white space) is found... 
            // this emits the white space in between the lines.... when a whitespace is found
        }
        std::cout << sentence[i] << std::endl;
    }
    std::cout << "done" << std::endl;
    return 0;
}

double ternaryOps()
{
    int answer = 10;
    std::cout << "Guess number : " << std::endl;
    int guess;
    std::cin >> guess;

    guess == answer ? std::cout << "you win" : std::cout << "wrong guess";
    return 0;
}

int main()
{
    int factorial = 5;
    forLoop(factorial);
    whileLoop(factorial);
    doWhileLoop();
    breakAndContinue();
    ternaryOps();
    return 0;
}