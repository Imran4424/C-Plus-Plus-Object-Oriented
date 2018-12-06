/*
	write a program to demonstrate friend class in c++
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

	public: Box(int l)
	{
		Box()

		length = l;
	}

	public: Box(int l, int w)
	{
		Box();

		length = l;
		width = w;
	}	
};