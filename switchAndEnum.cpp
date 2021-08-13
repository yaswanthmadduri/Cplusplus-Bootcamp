// switchAndEnum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int age;
    enum Season { summer, winter, rainy };// stores data as integers
    Season now = Season::summer;

    switch (now)
    {
    case Season::summer:
    case Season::rainy:
        std::cout << "Winter is not here" << std::endl;
        break;
    case Season::winter:
        std::cout << "Winter is here" << std::endl;
        break;
    }




    std::cout << "Enter age : " << std::endl;
    std::cin >> age;
    switch (age)
    {
    case 18:
        std::cout << "age is 18" << std::endl;
        break;
    case 19:
    case 20:
    case 21:
        std::cout << "Age is 19 or 20 or 21" << std::endl;
        return 0;
    default:
        std::cout << "Age is " << age << std::endl;
        break;
    }
}
