// vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

void print_vector(std::vector <int>  &aVector) //passing the address of the vectoe for perfect modification
// without address, we cant push 112 to the back... 
// try with out passing address. t doesnot add 112 at the back;
//it only displays and then goes back to the normal state i.e. {1,2,3}
{
	aVector.push_back(112);
	for (int i = 0; i < aVector.size(); i++)
	{
		std::cout << aVector[i] << "\t";
	}
	std::cout << std::endl;
}
int main()
{
	std::vector <int> data = { 1,2,3 };
	data.push_back(12);
	std::cout << data[3] << std::endl;
	std::cout << data[data.size() - 1] << std::endl;//data.size() shows the size of vector;
	std::cout << data.front() << std::endl;

	print_vector(data);
	print_vector(data);
	print_vector(data);
	print_vector(data);


}

