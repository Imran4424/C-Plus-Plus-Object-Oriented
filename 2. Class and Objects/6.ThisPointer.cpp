/*
	write a program to demonstrate this pointer
*/

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Box
{
	private: int length, width;

	public: void Assign(int l, int w)
	{
		length = l;
		width = w;
	}
	
	public: int Area()
	{
		return length * width;
	}
};
