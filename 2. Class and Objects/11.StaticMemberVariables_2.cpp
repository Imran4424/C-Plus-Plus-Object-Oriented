/*
	write a program to demonstrate static member variables in c++ class
*/

#include <iostream>
using namespace std;


class Number
{
	public: static int value; // declaring

	public: void Show()
	{
		cout << value << endl;
	}	
};

int Number::value = 0; // defining reference

int main(int argc, char const *argv[])
{
	Number::value = 5;

	cout << "Static Member Variable: " << Number::value << endl;

	return 0;
}

/*
	in real scenario, static variable don't belong to any object

	it belong to the class

	we can use static variable using class name with scope resolution, for example,

		Number::value = 5;


	one thing you can't access the static variable directly if it is private
*/