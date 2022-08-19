#include <iostream>
using namespace std;

class Base
{
	public: string GetMessage()
	{
		return "Base class function";
	}
};


class Derived: public Base
{
	public: string GetMessage()
	{
		return "Derived from Base class function - Derived level One";
	}
};


class DoubleDerived: public Derived
{
	public: string GetMessage()
	{
		return "Derived from Derived class function - Derived level Two";
	}
};


class TripleDerived: public DoubleDerived
{
	public: string GetMessage()
	{
		return "Derived from Derived Derived class function - Derived level three";
	}
};


void Report(Base *solid)
{
	cout << "Base pointer is now pointing " << solid -> GetMessage() << endl;
}


int main(int argc, char const *argv[])
{
	Base red;

	Derived dBlue;

	DoubleDerived ddGreen;

	TripleDerived tdSilver;


	Report(&red);
	Report(&dBlue);
	Report(&ddGreen);
	Report(&tdSilver);

	return 0;
}

/*
	There is no use of virtual function

	That's why base pointer always calling the base method

*/