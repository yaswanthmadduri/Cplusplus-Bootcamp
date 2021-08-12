// Declarations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
// here we are being specific on using only above objects from the class called std;
// so that we are not importing the whole class but importing only the required items;

int main()
{

    //try not to use same name with different cases; (slices, SLIces, Slices....)

    int slices; //int is data type. This is declaration
    slices = 5; // = 5 is called variable initialization
    slices = 5 + 1; // this is expression, with add operarand

    int children = slices; // this is assigning

    cout << "Enter number of slices : " << std::endl;
    cin >> slices; //this is how we use cin to take in the variablr;
    //slices is set by user using cmd but still children will be 6;

    std::cout << "You have " << slices << " slices;" << std::endl; // this is how we print a variale with cout;
    std::cout << children << std::endl;


    return 0;
}


//this is a comment

/*
this is a multi line comment
*/

// use slices_of_pizza i.e. use underscore to make the lines more readable

