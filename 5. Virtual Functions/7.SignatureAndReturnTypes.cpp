#include <iostream>
using namespace std;


class Base
{
	public: virtual int GetData()
	{
		return 13;
	}
};

class Derived: public Base
{
	public: virtual string GetData()
	{
		return "I am a Programmer";
	}
};


void Report(Base *solid)
{
	cout << "Base pointer receives Data: " << solid -> GetData() << endl;
}

int main(int argc, char const *argv[])
{
	Base red;

	Derived green;

	Report(&red);
	Report(&green);
	
	return 0;
}

/*
	Do not call virtual functions from constructors or destructors

	Downside

	Virtual function is not efficient,resolving a virtual function call takes longer than resolving 
	a regular one.

	the compiler also has to allocate an extra pointer for each class object that has one or more 
	virtual functions
*/