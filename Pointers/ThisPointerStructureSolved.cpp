#include <iostream>
#include <string>
using namespace std;

struct box
{
	int length, width, height;

	box() { } // default constructor

	box(int length, int width, int height)
	{
		length = length;
		width = width;
		height = height;
	}

	void Assign(int length, int width, int height)
	{
		length = length;
		width = width;
		height = height;
	}

	int Area()
	{
		return length * width;
	}

	int Volume()
	{
		return length * width * height;
	}
};

int main(int argc, char const *argv[])
{
	box red;

	red.Assign(10, 5, 8);

	cout << "Red box  Area is: " << red.Area() << endl;
	cout << "Red box  Volume is: " << red.Volume() << endl;

	cout << endl ;

	box green(20, 10, 16);

	cout << "green box Area is:" << green.Area() << endl;
	cout << "green box Volume is:" << green.Volume() << endl;

	return 0;
}

/*
	Output is 0 in both cases;
*/