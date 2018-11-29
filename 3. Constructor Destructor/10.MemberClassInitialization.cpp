/*
	write a program to demonstrate how to intialize a class member "class"
*/

#include <iostream>
using namespace std;


class A
{

	public: A()
	{
		cout << "Calling from constructor A" << endl;
	}
	
};


class B
{
	private: A obj;

	public: B(int x) : obj
	{
		cout << "Calling from constructor B" << endl;
	}
	
};



int main(int argc, char const *argv[])
{
	C red;

	return 0;
}