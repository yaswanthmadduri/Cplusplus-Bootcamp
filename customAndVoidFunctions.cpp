#include <iostream>
#include <cmath>

double power(double, int); // forward declaration
void print_power(double, int);

int main()
{
    int exponent;
    double base;
    std::cout << "Base : ";
    std::cin >> base;
    std::cout << "Exponent : ";
    std::cin >> exponent;

    print_power(base, exponent);
    print_power(10, 3);

    return 0;
}

double power(double base_arg, int exponent_arg) { // definition
    double result = 1;
    for (int index = 0; index < exponent_arg; index++) {
        result = result * base_arg;
    }
    return result;
}

void print_power(double base, int exponent){

    double calculated_result = power(base, exponent);
    std::cout << base << " raised to the power " << exponent << " is : " << calculated_result << std::endl;
}
