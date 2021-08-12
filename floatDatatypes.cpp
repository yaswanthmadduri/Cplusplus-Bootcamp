
#include <iostream>
#include <climits>


int main()
{
	double a = 10.0 / 3;
	a = a * 10000000000;
	double b = 1E5; // 1 * 10^5 or 1E5
	long double c;

	std::cout << b << std::endl;
	std::cout << std::fixed << a << std::endl; // after some digits the float is returning all 0s

	//precision in calculations
	std::cout << FLT_DIG << std::endl;// this shows us the number of digits that are trust-worthy in float
	std::cout << DBL_DIG << std::endl;
	// we can use any type of datatype depending on the precision that we want.
	// dont always use float or double as they have a less trustworthy data provided. ( like, they display 0s after some digits)
}

/*
all the below things are datatypes:
integers --> 32bits --> so we can store a max of 111......(32 1s)
signed, unsigned --> represented by 2s complement, MSB is the signed bit
floats
char
bool
arrays
structs --> custom datatype
classes --> a custom datatype
*/

/*
5/2 gives 2
5/2.0 gives 2.5
*/