#include<iostream>
#include<typeinfo>

using namespace std;
int main()
{
	auto unsignedInt = 10U;
	auto floatNum = 10.10F;
	auto longFloat = 10.111213L;
	auto  someData = 5.0;
	cout << unsignedInt << endl;
	cout << floatNum << endl;
	cout << typeid(longFloat).name() << endl;
	cout << typeid(someData).name() << endl;
	return 0;
}