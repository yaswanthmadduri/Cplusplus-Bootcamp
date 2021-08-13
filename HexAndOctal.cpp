// HexAndOctal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int x = 0x30; // it is hexadec rep;
    std::cout << x << std::endl; // 16^1*3
    std::cout << std::hex << x << std::endl;// another way
    int y = 30;
    std::cout << std::oct << y << std::endl;// octal


}
