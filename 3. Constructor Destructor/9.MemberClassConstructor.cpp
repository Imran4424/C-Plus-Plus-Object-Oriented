/*
	write a program to demonstrate how to use a class object as member variable and also demonstrate the
	order of constructor execution in this case
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


class C
{
	private: B obj;

	public: C()
	{
		cout << "Calling from constructor C" << endl;
	}
	public: ~C()
	{
		cout << "Calling from destructor C" << endl;
	}
	
};


int main(int argc, char const *argv[])
{
	C red;

	return 0;
}