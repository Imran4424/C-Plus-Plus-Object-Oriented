/*
	write a code to demonstrate how to initialize member variables
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
	so far what we are doing in name of initialization, actually that's not initialization, that is
	
*/