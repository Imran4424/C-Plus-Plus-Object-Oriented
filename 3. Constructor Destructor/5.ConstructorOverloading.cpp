/*
	write a program to demonstrate constructor overloading
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

	public: Box(int l) // in case this is square
	{
		length = l;
		width = l;
	}

	public: Box(int l, int w)
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
	Box red; // now this code won't give error

	cout << "Area is: " << red.Area() << endl;

	Box blue(5);

	cout << "Area is: " << blue.Area() << endl;


	Box green(8, 13);

	cout << "Area is: " << green.Area() << endl;

	return 0;
}

/*
	to understand this, first we need to understand function overloading

	if you don't know what is function overloading then go to my polymorphism folder, then 
	comeback here


	in this code, we done constructor overloading in same function overloading concept

	in this code we have three constructor,

		1. default constructor
		2. one argument 
		3. two argument


	in this code we also can see, even after declaring user define constructor, following statement
	don't give any error

		Box red;

	as we know after declaring user define constructor implicit constructor disabled

	then why this is happening, this is happening because of default constructor because default
	constructor has no parameters like implicit constructor, so it default constructor behaves like
	implicit constructor


	so, it is recommend to have must have default constructor if you have any user define constructor
*/