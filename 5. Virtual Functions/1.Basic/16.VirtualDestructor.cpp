#include <iostream>
using namespace std;

class Base
{
	public: virtual ~Base()
	{
		cout << "calling from Base Destructor" << endl;
	}
};


class DerivedBase: public Base
{
	public: virtual ~DerivedBase()
	{
		cout << "calling from DerivedBase Destructor" << endl;
	}
};


class Derived: public DerivedBase
{
	private: int *nothing;

	public: Derived(int size)
	{
		nothing = new int[size];
	}

	public: virtual ~Derived()
	{
		delete[] nothing;
		cout << "calling from Derived Destructor" << endl;
	}
};

int main(int argc, char const *argv[])
{
	
	Derived *red = new Derived(15);

	Base *ptr = red;

	delete ptr;

	return 0;
}