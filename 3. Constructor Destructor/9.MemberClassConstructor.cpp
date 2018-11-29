/*
	write a program to demonstrate member class constructor
*/

#include <iostream>
using namespace std;


class A
{

	public: A()
	{
		cout << "Calling from constructor A" << endl;
	}
	public: ~A()
	{
		cout << "Calling from destructor A" << endl;
	}
	
};


class B
{
	private: A obj;

	public: B()
	{
		cout << "Calling from constructor B" << endl;
	}
	public: ~B()
	{
		cout << "Calling from destructor B" << endl;
	}
	
};


int main(int argc, char const *argv[])
{
	B red;

	return 0;
}