// PointersBasics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a;
	int* p;
	a = 1025;
	p = &a;
	cout << p << endl; // address of a
	cout << a << endl; // value of a
	cout << *p << endl; // value of a
	cout << &a << endl; // address of a
	*p = 12; // value at address pointed by p. i.e. a;
	cout << a << endl;
	int b = 15;
	*p = 15;
	cout << a << endl;
	cout << "p is " << p << endl;
	cout << p + 1 << endl;//should be 4bytes more than p since, sizeof(int) = 4bytes)
	cout << *p + 1 << endl; // garbage value.


	//typecasting
	char* q;
	q = (char*)p;
	cout << "char pointer is : " << *q << " Value is : " << q << endl;// char pointer looks only the first byte
	cout << "char pointer is : " << *q + 1 << " Value is : " << q + 1 << endl;// char pointer looks only the first byte. i.e. (q+1)th byte
	cout << "char pointer is : " << *q + 2<< " Value is : " << q + 2 << endl;// char pointer looks only the first byte. i.e. (q+2)th byte
}

