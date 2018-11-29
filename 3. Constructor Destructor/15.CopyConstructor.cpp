/*
	write a program to demonstrate copy constructor
*/

#include <iostream>
using namespace std;

class Box
{
	private: int length, width;
	
	public: Box() // default constructor
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


	public: Box(const Box &old)
	{
		length = old.length;
		width = old.length;

		cout << "Copy Constructor invoked" << endl;
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


	Box copyObj(green);

	cout << "Area is: " << copyObj.Area() << endl;

	return 0;
}

