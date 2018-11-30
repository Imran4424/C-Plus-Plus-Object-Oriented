/*
	write a program to demonstrate const objects
*/

#include <iostream>
using namespace std;

class Box
{
	private: int length, width;

	public: Box(int length, int width)
	{
		this -> length = length;
		this -> width = width;
	}
	
	public: int Area()
	{
		return length * width;
	}
};


int main(int argc, char const *argv[])
{
	cout << "input length and width of a box" << endl;

	int length,width;
	cin >> length >> width;

	Box red;

	red.Assign(length, width);

	cout << "Area of the Box is: " << red.Area() << endl;

	return 0;
}