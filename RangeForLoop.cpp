// RangeForLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include <array>

int main()
{
    int data[] = { 1,2,3,4,5,6,7,8,9,0 };
    std::vector<int> dataVector = { 1,2,3,4,5,6,7,8,9,0 };
    std::array<int, 10> dataArray = { 1,2,3,4,5,6,7,8,9,0 };
    
    //normal for loop
    for (int i = 0; i < sizeof(data) / sizeof(data[0]); i++)
    {
        std::cout << data[i] << "\t";
    }
    std::cout << std::endl;

    //range based for loop
    // similar to for-each loop in python
    // can only be used for collections like arrays (set of data)

    for (int n : data)
    {
        std::cout << n << "\t";
    }
    std::cout << std::endl;

    for (int n : dataVector)
    {
        std::cout << n << "\t";
    }
    std::cout << std::endl;
    for (int n : dataArray)
    {
        std::cout << n << "\t";
    }
}