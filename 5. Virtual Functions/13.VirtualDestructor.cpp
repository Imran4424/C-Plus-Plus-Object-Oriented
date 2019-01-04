#include <iostream>
using namespace std;

class Base
{
	public: ~Base()
	{
		cout << "calling from Base Destructor" << endl;
	}
};

class Derived: public Base
{
	private: int *nothing;

	public: Derived(int size)
	{
		nothing = new int[size];
	}

	public: ~Derived()
	{
		delete[] nothing;
		cout << "calling from Derived Destructor" << endl;
	}
};

int main(int argc, char const *argv[])
{
	Derived red(15);

	Base *ptr = &red;

	return 0;
}