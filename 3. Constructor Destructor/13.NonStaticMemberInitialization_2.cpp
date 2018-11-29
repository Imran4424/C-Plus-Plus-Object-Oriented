/*
	write a program to demonstrate non-static member initialization also called as in-class member 
	initialization
*/

#include <iostream>
using namespace std;

class Box
{
	private: int length = 0, width = 0;

	public: Box(int l) 
	{
		length = l;
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
	Box red; // now this code will give you error

	cout << "Area is: " << red.Area() << endl;

	Box blue(5);

	cout << "Area is: " << blue.Area() << endl;


	Box green(8, 13);

	cout << "Area is: " << green.Area() << endl;

	return 0;
}

