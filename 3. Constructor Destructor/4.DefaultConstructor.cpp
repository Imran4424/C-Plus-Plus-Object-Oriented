/*
	write a program to demonstrate default constructor in c++ classes
*/


#include <iostream>
using namespace std;

class Box
{
	private: int length, width;
	
	public: Box()
	{
		length = 0;
		width = 0;
	}

	public: void Assign(int l, int w)
	{
		length = l;
		width = w;
	}
	
	public: int Area()
	{
		return length*width;
	}
};


int main(int argc, char const *argv[])
{
	Box red;

	cout << "Area is: " << red.Area() << endl;

	return 0;
}

/*
	As we know, constructors are called when class objects are created

	we can have user define constructors

	default constructor is a special type user define constructor which has no parameters

	in the default constructor anyone can use default values to initialize object variables

	in this code 0 as default values for Box object

	but remember this default values can be anything means any valid value

	remember the following rules  to define user define constructor,


	1.Constructors must have the same name as the class (with the same capitalization)
	2.Constructors have no return type (not even void)
	3.Constructors can have parameters
*/