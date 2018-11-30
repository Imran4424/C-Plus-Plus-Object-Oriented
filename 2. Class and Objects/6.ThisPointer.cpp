/*
	write a program to demonstrate this pointer
*/

#include <iostream>
using namespace std;

class Box
{
	private: int length, width;

	public: void Assign(int length, int width)
	{
		this -> length = length;
		this -> width = width;
	}
	
	public: int Area()
	{
		return length * width;
	}
};


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
	there are two types of this pointer in c++

	implicit this pointer
	explicit this pointer

	implicit this pointer - confirms every objects class member variable and member functions works fine
	and independently. with the help of implicit constructor a class can track down all objects and don't
	get mix the resources

	but you don't have to worry about implicit constructor. implicit this pointers are hidden in class just
	like implicit constructor


	explicit this pointer - explicit this pointer used to distinguish ambiguious situation, when constructor
	parameters are named as the same as memeber variables then this pointer used to distinguish between
	member variables and constructor parameters

*/