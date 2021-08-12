
#include <iostream>
#include <cmath>

#define y 10;
// this also is a process of defining a constant variable 
//but we cannot store the type of variable; so the latter (int y= 10) can be used in the main function

int main()
{

    const int x = 5;
    // this cannot be reassigned to any value since const is placed in front
    // otherwise it throws error

    enum { z = 100 };
    // z = 50; // thrwows an error for reassigning


     //numeric functions

    std::cout << sqrt(100) << std::endl;
    std::cout << pow(10, 2) << std::endl;
    std::cout << NAN << std::endl; // not a number
    std::cout << INFINITY << std::endl;
    std::cout << -INFINITY << std::endl;
    std::cout << remainder(10, 3) << std::endl; // gives 1, the remainder, sim to 10%3
    std::cout << fmod(10, 3) << std::endl; //same as above
    std::cout << fmax(10, 3) << std::endl; //gives the max of 2 nums
    std::cout << fmin(10, 3) << std::endl; //gives the min of 2 nums
    std::cout << ceil(fmin(1.20, 3)) << std::endl; //gives 2
    std::cout << floor(fmin(1.20, 3)) << std::endl; //gives 1
    std::cout << trunc(1.2) << std::endl; //truncates the after decimal digits
    std::cout << trunc(-1.2) << std::endl; //truncates the after decimal digits
    std::cout << round(-1.2) << std::endl;// rounds to the closest value 

}

