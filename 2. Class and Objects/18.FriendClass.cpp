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

	public: Box(int l, int w, int h)
	{
		length = l;
		width = w;
		height = h;
	}	
};


class Display
{
	public: void DisplayLength(Box &red)
	{
		cout << " length is: " << red.length << endl;
	}

	public: void Display Area(Box &red)
	{
		cout << " Area is: " << red.length * red. width << endl; 
	}

	public: void Display Area(Box &red)
	{
		cout << " Volume is: " << red.length * red. width * red.height << endl; 
	}
};