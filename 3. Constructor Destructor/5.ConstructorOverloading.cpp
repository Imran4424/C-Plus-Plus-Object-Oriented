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

	 
*/