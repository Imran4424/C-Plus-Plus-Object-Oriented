#include <iostream>
using namespace std;


class A
{
	public: A()
	{
		cout << "Calling from A" << endl;
	}
};

class B: public A
{
	public: B()
	{
		cout << "Calling from B" << endl;
	}
};

class C: public B
{
	public: C()
	{
		cout << "Calling from C" << endl;
	}
};

int main(int argc, char const *argv[])
{
	cout << endl << "creating A class object" << endl;
	A red;

	cout << endl << "creating B class object" << endl;
	B blue;

	cout << endl << "creating C class object" << endl;
	C green;

	return 0;
}