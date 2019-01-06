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
	public: virtual string GetData() override
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
