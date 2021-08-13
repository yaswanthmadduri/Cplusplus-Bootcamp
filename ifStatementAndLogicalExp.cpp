// ifStatementAndLogicalExp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int ageFn(int age)
{
    if (age < 18)
    {
        cout << "Not a valid voter" << endl;
        return -1;
    }
    else if (age >= 18 && age <= 120)
    {
        cout << " valid voter" << endl;
        return 0;
    }
    else
    {
        cout << "not a valid age" << endl;
        return -1;
    }

}
int main()
{

    int age = 19;
    std::string nationality = "indian";
    ageFn(age);
    if (age > 18 && nationality == "indian")
    {
        cout << "Great!" << endl;
    }
    else if (!(nationality == "indian")) //logical and comparison ops both included
    {
        cout << "foreigner" << endl;
    }

    //logical --> && || !
    //comparison ops --> == >= <= < >


}