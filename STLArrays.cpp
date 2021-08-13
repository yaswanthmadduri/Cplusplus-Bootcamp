// STLArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>

void print_stl_array(std::array<int, 20> &data, int size)// data is being address referenced
{
	for (int i = 0; i < size ; i++)
	{
		std::cout << data[i] << "\t";
	}
	std::cout << std::endl;
}
int main()
{
	std::array<int, 20> data = { 1,2,3 }; // this is also statically sized just like a normal array 

	print_stl_array(data, 3);
}

// templatized arrays
