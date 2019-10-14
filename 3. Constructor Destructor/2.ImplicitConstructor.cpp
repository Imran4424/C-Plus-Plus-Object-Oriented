/*
	write a program to demonstrate implicit constrator
*/

#include <iostream>
using namespace std;

class Box
{

	private: int length,width;

	public: int Area()
	{
		return length*width;
	}
	
};



int main(int argc, char const *argv[])
{
	Box red;



	cout << "Area is: " << red.Area() << endl;

	return 0;
}


/*
	if a class has some variable public or private or both

	then,

	when we decare a class object, that moment all class variables are initialized with 0 by an
	implicit constructor.
*/