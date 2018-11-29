/*
	write a program to demonstrate how to delegate constructor means calling constructor from constructor
	(this work from c++ 11)
*/

#include <iostream>
using namespace std;

class Box
{
	private: int length, width, height;

	public: Box()
	{
		length = 0;
		width = 0;
		height = 0;
	}

	public: Box(int l) : Box()
	{
		length = l;
	}

	public: Box(int l, int w) : Box()
	{
		length = l;
		width = w;
	}

	public: Box(int l, int w, int h) 
	{
		length = l;
		width = w;
		height = h;
	}
	
	public: int Area()
	{
		return length*width;
	}

	public: int Volume()
	{
		return length * width * height;
	}
};


int main(int argc, char const *argv[])
{
	Box red; 

	cout << "Area is: " << red.Area() << endl;
	cout << "Volume is: " << red.Volume() << endl;

	Box blue(5);

	cout << "Area is: " << blue.Area() << endl;
	cout << "Volume is: " << blue.Volume() << endl;


	Box green(8, 13);

	cout << "Area is: " << green.Area() << endl;
	cout << "Volume is: " << green.Volume() << endl;


	Box steel(8, 13, 7);

	cout << "Area is: " << steel.Area() << endl;
	cout << "Volume is: " << steel.Volume() << endl;

	return 0;
}