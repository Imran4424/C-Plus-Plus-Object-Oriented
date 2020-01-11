#include <iostream>
using namespace std;

class Box
{
	private: int length, width;

	public: Box()
	{
		length = width = 0;
	}

	public: Box(int length, int width)
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
	Box red(8, 12);

	cout << red.Area() << endl; // Abstraction

	return 0;
}

/*
	Abstraction - Implementation Hiding

	In this code, in line 30 Box type object red calling the member function Area(), red doesn't 
	know the implementation(Body) of Area(), but it can use the return value of Area() function.

	so, red Box is using Area() function for getting area of it, without knowing it's 
	implementation, this is called abstraction.


	Encapsulation - Data hiding

	In OOP, a class wrap up every class members to protect it from outside word. encapsulation
	also use access specifier to increase protection for class members.

	Encapsulation is not just hiding the data from outside world, it also manipulates data using 
	member functions and produce expected result for every function.

	In this example,

	Box class encapulate all class members to protect them from outside world. it also make its
	member variable private limiting access. Then it manipulates the data produces the expected 
	result for Area() function.

	This is all encapsulation

	Let's consider a real life scenario

*/