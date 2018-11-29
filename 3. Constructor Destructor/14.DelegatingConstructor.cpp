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
	
	return 0;
}