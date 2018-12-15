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

	we just want to 
*/



