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
		return "Derived from Base class function";
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
	/* code */
	return 0;
}