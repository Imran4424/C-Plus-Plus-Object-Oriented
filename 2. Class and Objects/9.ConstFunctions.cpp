/*
	write a program to demonstrate const functions
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

	public: Box(int length, int width)
	{
		this -> length = length;
		this -> width = width;
	}
	
	public: int Area() const
	{
		return length * width;
	}
};


int main(int argc, char const *argv[])
{
	cout << "input length and width of a box" << endl;

	int length,width;
	cin >> length >> width;

	const Box red(length, width);

	cout << "Area of the Box is: " << red.Area() << endl; // now this line of code won't give you error

	return 0;
}


