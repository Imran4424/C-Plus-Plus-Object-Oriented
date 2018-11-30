/*
	write a program to demonstrate constructor overloading
*/

#include <iostream>
using namespace std;

class Box
{
	private: int length, width;
	
	public: Box() // default constructor
	{
		length = 0;
		width = 0;
		
		Message();
	}

	public: Box(int l) // in case this is square
	{
		length = l;
		width = l;
		
		Message();
	}

	public: Box(int l, int w)
	{
		length = l;
		width = w;

		Message();
	}

	public: ~Box()
	{
		cout << "Object is being destroyed, ";
		
		cout << "Area is: " << Area() << endl;

	}

	private: Message()
	{
		cout << "Object is being created, Area is: " << Area() << endl;
	}
	
	public: int Area()
	{
		return length*width;
	}
};


int main(int argc, char const *argv[])
{
	Box red; // now this code won't give error

	//cout << "Area is: " << red.Area() << endl;

	Box blue(5);

	//cout << "Area is: " << blue.Area() << endl;


	Box green(8, 13);

	//cout << "Area is: " << green.Area() << endl;

	return 0;
}


/*
	As we know, destuctors are called when class objects are destroyed
	we can have user define destructors

	remember the following rules to define user define destuctors,

	1.Destructors must have the same name as the class preceded by a tilde (~).(with the same 
	  capitalization)
	2.Destructors have no return type (not even void)
	3.Destructors can not have any parameters

	rule no 3 also ruled out that a class can have only one destructor

	destructors can't take any parameters, so they can't be overloaded

	another thing,

	constructor and destructor are called LIFO mode, last in fist out

	that means, that object which is created at last will destroy at first

	more precisely that object which call his constructor at last among the objects will call his
	destructors first
*/