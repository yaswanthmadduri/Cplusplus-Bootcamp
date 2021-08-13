// Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using std::string; // string is a object of std class
using std::cout;
using std::cin;
using std::endl;


int main()
{
	string greet = "hello";
	cout << greet[0] << endl;

	string greet_append = greet + " there ";
	greet_append += "!";

	cout << greet_append << endl;
	cout << "length = " << greet_append.length() << endl;

	//method -- is a member function --> or is a function attached to objects

	char name[] = "yash";
	// size is 5 because at the last, there is \0, a non terminating character

	// reassining char array is not possible
	// reassigning string datatype is possible

	std::cin >> greet;
	// this is the disadv of cin object. it takes only first word until a white space is given;
	cout << greet << endl;

	string greet_leftover;
	std::cin >> greet;
	std::cin >> greet_leftover;
	cout << greet<< endl;
	cout << greet_leftover << endl;


	// alternative to this is getline()

	getline(cin, greet);
	cout << greet << endl;


	//modifiers
	cout << greet.length() << endl;
	cout << greet.size() << endl;
	cout << greet.append("appended this!") << endl;
	cout << greet.insert(3, "   inserted at 3   ") << endl;
	cout << greet.erase(greet.length() - 1, 1) << endl;

	//string methods
	cout << greet.find("Hello") << endl;
	cout << greet.substr(5, 2) << endl;
	cout << greet.find_first_of("aeiou") << endl;
	//fiinds the index of the first letter found in greet


	auto literal_x = 5.5L;
	cout << literal_x << endl;





}
