#include <iostream>
using namespace std;


class Base
{
	// conflicting return type
	public: virtual int GetData()
	{
		return 13;
	}
};

class Derived: public Base
{
	// conflicting return type
	public: virtual string GetData() override
	{
		return "I am a Programmer";
	}

	public: int justForTesting() override {
		return 11;
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
	This code will produce error

	function overriding basic is function signature need to be same

	here, which is not the case

	override keyword is for visually distinguish overriding functions from normal functions

	And 

	override keyword also tells the compiler that, there is a base function of this class, otherwise it won't compile
*/