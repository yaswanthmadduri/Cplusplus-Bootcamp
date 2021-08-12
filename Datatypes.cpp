
#include <iostream>
#include <climits>

#define y 10;
// this also is a process of defining a constant variable 
//but we cannot store the type of variable; so the latter (int y= 10) can be used in the main function

int main()
{
    short a;
    int b;
    long c; // atleast  32 bits
    long long d; // atleast 64 bits
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    const int x = 5;
    // this cannot be reassigned to any value since const is placed in front
    // otherwise it throws error


    char c = 'c'; // not "c"
    std::cout << (int)c << std::endl; // converted into ascii
    //ascii supports only 128  (2^7) chars
    // so unicode is used

    std::cout << sizeof(unsigned short) << std::endl;

    //the below things say about min and max 
    //number of bits that are assigned to the datatypes mentioned
    std::cout << SHRT_MIN << std::endl;
    std::cout << SHRT_MAX << std::endl;
    std::cout << LLONG_MAX << std::endl;
    std::cout << ULLONG_MAX << std::endl;
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