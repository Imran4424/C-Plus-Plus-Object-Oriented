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


/*
	We can have another class object as member variable 

	in that case member variable object will invoke first then the class object(which we are creating in
	main) constructor

	the destructor calling is total reverse like we said earlier

	just run the code for better understanding
*/