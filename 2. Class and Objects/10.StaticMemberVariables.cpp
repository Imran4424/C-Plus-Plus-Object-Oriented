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
	Number first;

	Number second;

	second.value = 2;

	first.Show();

	second.Show();

	return 0;
}

/*
	as we know, static variable works like global variable, it creates it's existence when the code runs
	destroys itself after the program finished


	now, if we can make a class member variable static using static keyword, then we need to define the
	static varibale reference

	static member variables are shared between all objects of a class, so if you change the static variable
	using one object

	the change will effect other object too
*/