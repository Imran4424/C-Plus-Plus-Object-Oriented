#include <iostream>
using namespace std;

class Base
{
	~Base()
	{
		cout << calling from Base Destructor << endl;
	}
};

class Derived: public Base
{
	private: int *nothing;

	Derived(int size)
	{
		nothing = new int[size];
	}

	~Derived()
	{
		delete[] nothing;
		cout << calling from Derived Destructor << endl;
	}
};

int main(int argc, char const *argv[])
{
	


	return 0;
}