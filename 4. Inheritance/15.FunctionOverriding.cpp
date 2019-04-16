/*
	write a program to demonstrate function overriding
*/

#include <iostream>
using namespace std;

class Base
{
	public: Base()
	{

	}

	public: void Message()
	{
		cout << "calling from Base" << endl;
	}
};


class Derived: public Base
{
	public: Derived()
	{

	}

	public: void Message()
	{
		cout << "calling from Derived" << endl;
	}
};

int main(int argc, char const *argv[])
{
	Base red;
	red.Message();


	Derived green;
	green.Message();

	return 0;
}

/*
	function overriding is another type of polymorphism
	

	function overriding is the technique where you change the an inherited function definition means 
	function body

	in the function overriding technique function declaration(function signature) can not
	be changed.

	Otherwise it will treated as different fucntion

	Function overriding achieved at run time where function overloading achieved at compile time

	overridden function can have different access specifier in derived class compare to the base class
*/




