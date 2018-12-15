/*
	write a program to demonstrate function overriding
*/

#include <iostream>
using namespace std;

class Base
{
	public: Base()
	{

	}

	public: void Message()
	{
		cout << "calling from Base" << endl;
	}
};


class Derived: public Base
{
	public: Derived()
	{

	}

	public: void Message()
	{
		//Message(); // this will end in infinite recursion loop
			    // for this case some compiler will show this statement show this error

	                   // here Message will calling itself again again cause when we don't specify
			  // scope resolution of a function, then it will call the local class function if it
		         // exist. Otherwise it will give you error

		Base::Message();
		cout << "calling from Derived" << endl;
	}
};

int main(int argc, char const *argv[])
{
	//Base red;
	//red.Message();


	Derived green;
	green.Message();

	return 0;
}


/*
	there will be some cases we don't want to completely change the function body

	we just want to add new funtionality

	first we can call the base class with class scope resolution
	then we can add new functionality
*/



