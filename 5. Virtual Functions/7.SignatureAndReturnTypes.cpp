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


