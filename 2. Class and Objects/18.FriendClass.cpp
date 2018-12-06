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
		Box();

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

	Display carrier;
	Box red;

	carrier.DisplayStatus(red);
	carrier.DisplayArea(red);
	carrier.DisplayVolume(red);

	cout << endl;

	Box blue(5);
	carrier.DisplayStatus(blue);
	carrier.DisplayArea(blue);
	carrier.DisplayVolume(blue);
	
	cout << endl;

	Box steel(5, 12);
	carrier.DisplayStatus(steel);
	carrier.DisplayArea(steel);
	carrier.DisplayVolume(steel);

	cout << endl;
	
	Box green(5, 8, 12);
	carrier.DisplayStatus(green);
	carrier.DisplayArea(green);
	carrier.DisplayVolume(green);
	
	return 0;
}


/*
	we can make a class friend of another class

	in that case, all members of the friend class can access the private members of that class of which
	he is friend with

	see the code for example
*/