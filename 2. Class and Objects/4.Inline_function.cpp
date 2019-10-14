/*
	This following code will illustrate

	how to made outside class member funtion inline funtion using inline keyword
*/

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
	
	public: int Area();
};

inline int Box::Area()
{
	return width * length;
}



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

/*
	We know that outside class member functions cost us time due to switching the program
	execution control between member funtion and the called program 

	But, It saves memory due to one time definition for every function call

	There's a new feature, inline keyword

	which forcefully make outside defined member functions inline function


	Every Time an inline function is called compiler generates a copy of the functions code
	place it in the place of function call, This way calling don't need to switch control
	between called function and calling function. And This saves lot's of time. Also cost 
	extra memory.

	That's why only small functions need to be inline function

	Note: All inside class member functions definitions are inline function by default
*/