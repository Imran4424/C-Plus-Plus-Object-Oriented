/*
	write a program to demonstrate friend class in c++
*/

#include <iostream>
using namespace std;


class Display;  // forward declaration

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

	friend Display; // declaring friend class 	
};


class Display
{
	public: void DisplayStatus(Box &red)
	{
		cout << " length is: " << red.length << endl;
		cout << " width is: " << red.width << endl;
		cout << " height is: " << red.height << endl;
	}

	public: void DisplayArea(Box &red)
	{
		cout << " Area is: " << red.length * red.width << endl; 
	}

	public: void DisplayVolume(Box &red)
	{
		cout << " Volume is: " << red.length * red.width * red.height << endl; 
	}
};


int main(int argc, char const *argv[])
{
	Box red;

	red.DisplayStatus();
	red.DisplayArea();
	red.DisplayVolume();

	cout <<endl;

	Box blue(5);
	blue.DisplayStatus();
	blue.DisplayArea();
	blue.DisplayVolume();

	Box green(5, 8, 12);
	green.DisplayStatus();
	green.DisplayArea();
	green.DisplayVolume();

	return 0;
}