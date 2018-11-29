/*
	write a code to demonstrate how to initialize member variables
*/

#include <iostream>
using namespace std;

class Box
{
	private: int length, width;
	public: Box() : length(0), width(0)
	{
		// no assignment needs here
	}

	public: Box(int l) : length(l), width(l)
	{
		// no assignment needs here
	}

	public: Box(int l, int w) : length(l), width(w)
	{
		// no assignment needs here
	}
	
	public: int Area()
	{
		return length*width;
	}
};


int main(int argc, char const *argv[])
{
	Box red; // now this code won't give error

	cout << "Area is: " << red.Area() << endl;

	Box blue(5);

	cout << "Area is: " << blue.Area() << endl;


	Box green(8, 13);

	cout << "Area is: " << green.Area() << endl;

	return 0;
}


/*
	so far what we are doing in name of initialization, actually that's not initialization, that is
	assignment, initialization happens at the same time when we declare something

	now you can what's the difference, both serves the same purpose

	but there is some situation when we badly need initialization because we can't assign constant
	variables that will give error

	there is solution for that named "member initializer lists"

	see the code for coding example


	One remainder (next text block from learncpp)

	Perhaps surprisingly, variables in the initializer list are not initialized in the order that they are 
	specified in the initializer list. Instead, they are initialized in the order in which they are declared
	in the class.

	For best results, the following recommendations should be observed:
	1) Don’t initialize member variables in such a way that they are dependent upon other member variables 
	   being initialized first (in other words, ensure your member variables will properly initialize even 
	   if the initialization ordering is different).
	2) Initialize variables in the initializer list in the same order in which they are declared in your 
	   class. This isn’t strictly required so long as the prior recommendation has been followed, but your 
	   compiler may give you a warning if you don’t do so and you have all warnings turned on.

*/