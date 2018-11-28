/*
	write a program to demonstrate class public variable initialization
*/

#include <iostream>
using namespace std;

class Box
{

	public: int length,width;

	public: int Area()
	{
		return length*width;
	}
	
};



int main(int argc, char const *argv[])
{
	Box red = {4,8};

	cout << "Area is: " << red.Area() << endl;

	return 0;
}

/*
	if a class variables are public

	then we can initialize the class public variables very easily

	whenever we declaring an object, we can 
*/