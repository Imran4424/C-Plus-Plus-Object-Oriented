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
		
		cout << "Area is: " << Area() <<endl

	}

	private: Message()
	{
		cout << "Object is being created, length is: " << length << endl;
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