
// for a function, there are function definition, function declaration, function calling
#include <iostream>
#include <cmath>

int main()
{
    int base, exponent;
    std::cout << "Base : ";
    std::cin >> base;
    std::cout << "Exponent : ";
    std::cin >> exponent;

    double power = pow(base, exponent);
    std::cout << power << std::endl;
}

// int main() is a function. the program execution starts here
 /*
 There exists a forward declaration for every function in each cpp file
 We can either do the forward declarations or can include them in a separate header files
 */

/*
inputs from outside the function can be given as the parameters to that function
*/