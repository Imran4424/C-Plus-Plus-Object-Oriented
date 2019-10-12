#include <iostream>
using namespace std;

class Box
{
	private: int length, width, height;

	public: Box() // default constructor
	{
		length = 0;
		width = 0;
		height = 0;
	}

	public: Box(int length, int width, int height)
	{
		length = length;
		width = width;
		height = height;
	}

	public: void Assign(int length, int width, int height)
	{
		length = length;
		width = width;
		height = height;
	}

	public: int Area()
	{
		return length * width;
	}
	
	public: int Volume()
	{
		return length * width * height;
	}
};

int main(int argc, char const *argv[])
{
	Box red(10, 5, 8);

	cout << "Red box  Area is: " << red.Area() << endl;
	cout << "Red box  Volume is: " << red.Volume() << endl;

	cout << endl ;

	Box green;

	green.Assign(20, 10, 16);

	cout << "green box Area is:" << green.Area() << endl;
	cout << "green box Volume is:" << green.Volume() << endl;

	return 0;
}


/*
	This program produce 0 as output

	some program shows error
*/