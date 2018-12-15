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

	public: void Message(int a)
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
	green.Message(9);

	return 0;
}






