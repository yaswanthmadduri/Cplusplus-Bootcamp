// operatorsAndExpressions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double x = 10 % 4; // modulus operator
    std::cout << x << std::endl;
    double y = 10 + (4.0 / 3 + 2.5 * 5 - 3); // this is an expression. this follows bodmas 
    std::cout << y << std::endl;

    x = 10;
    y = x = 100; // (y = x) = 100; this means y=x; and then y=100; so y = 100 at last; x value is not changed 
    std::cout << y << std::endl;
    std::cout << x << std::endl;
    y = (x = 100); // now x is also changed


}