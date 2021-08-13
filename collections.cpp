// collections.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void printArray(int guesses[], int size)
{

    // total no of bytes of all elements/ no of bytes for each element
    for (int i = 0; i < size; i++)
    {
        std::cout << guesses[i] << "\t";
    }
}



int main()
{
    int guesses[10] = { 10,12,12,14,17,19,100,15 };
    int len = sizeof(guesses) / sizeof(guesses[0]); //or     int size = sizeof(guesses) / sizeof(guesses[0]);
    printArray(guesses, len);

    const int SIZE = 100;
    int guessFromUser[SIZE];
    int count = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (std::cin >> guessFromUser[i]) // cin returns true when input works;
        {
            //valid input integer
            count++;
        }
        else
        {
            //when invalid char is typed;
            break;
        }
    }

    printArray(guessFromUser, count);
    std::cin.clear(); // clears the fake value that we enter at the end to get out of loop (other than a number).
    //otherwise, the junk is assigned to the next initialized input value. here in this case, it is "test"
    std::cin.ignore(1000, '\n');// when this is not typed, the junk value is assigned to the "test" automatically.. 
    // now the console waits for the input for "test".
    std::string test;
    std::cin >> test;
    std::cout << test;


    return 0;
}