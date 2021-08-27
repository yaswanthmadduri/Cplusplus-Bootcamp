// voidPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int a = 1025;
    int* p = &a;
    cout << "Pointer address is " << p << " and value at the address is " << *p << endl;

    //void pointer 
    void* p0;
    p0 = p; // the problem is, we cannot dereference the data using void datatype
    // cout << *p0 << endl; // this is not possible
    cout << p0 << endl;
    //cout<<p0+1<<endl; // this also is not possible;
    //because, the void pointer donot know which data type the pointer p is pointing to.
}
