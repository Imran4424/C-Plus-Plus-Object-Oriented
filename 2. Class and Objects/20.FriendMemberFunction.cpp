/*
	write a program to demonstrate friend class in c++
*/

#include <iostream>
using namespace std;

class Box; // forward declaration

class Display
{
	public: void DisplayStatus(Box &red) // they are not friend
	{
		// cout << " length is: " << red.length << endl;
		// cout << " width is: " << red.width << endl;
		// cout << " height is: " << red.height << endl;
	}

	public: void DisplayArea(Box &red) // they are not friend
	{
		// cout << " Area is: " << red.length * red.width << endl; 
	}

	public: void DisplayVolume(Box &red) // now this code will give error cause Display doesn't know full
					    //  declaration of Box class
	{
		cout << " Volume is: " << red.length * red.width * red.height << endl; 
	}
};

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

	friend void Display::DisplayVolume(Box &red); // declaring friend member function
};




int main(int argc, char const *argv[])
{

	Display carrier;
	Box red;

	// carrier.DisplayStatus(red); // they are not friend
	// carrier.DisplayArea(red);
	carrier.DisplayVolume(red);

	cout << endl;

	Box blue(5);
	// carrier.DisplayStatus(blue); // they are not friend
	// carrier.DisplayArea(blue);
	carrier.DisplayVolume(blue);
	
	cout << endl;

	Box steel(5, 12);
	// carrier.DisplayStatus(steel); // they are not friend
	// carrier.DisplayArea(steel);
	carrier.DisplayVolume(steel);

	cout << endl;
	
	Box green(5, 8, 12);
	// carrier.DisplayStatus(green); // they are not friend
	// carrier.DisplayArea(green);
	carrier.DisplayVolume(green);
	
	return 0;
}


/*
	making a whole class friend is a problem because in that case whole class can access the private 
	members

	instead of making a whole class friend, we can make a member function friend
*/