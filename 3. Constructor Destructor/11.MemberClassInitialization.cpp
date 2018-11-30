/*
	write a program to demonstrate how to intialize a class member "class"
*/

#include <iostream>
using namespace std;


class A
{
	private: int num;

	public: A(int y) : num(y)
	{
		cout << "A " << y << endl;
	}
	
};


class B
{
	private: A obj;

	public: B(int x) : obj(x-1)
	{
		cout << "B " << x << endl;
	}
	
};



int main(int argc, char const *argv[])
{
	B red(10);

	return 0;
}


/*
	member variable object class initialization is really simple

	use member initializer list and pass the value with member variable object

	see the code and run it for better understanding
*/