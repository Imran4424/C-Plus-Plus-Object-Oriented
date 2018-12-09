#include <iostream>
using namespace std;


class A
{
	public: A()
	{
		cout << "Constructor Calling from A" << endl;
	}

	public: ~A()
	{
		cout << "Destructor Calling from A" << endl << endl;
	}
};

class B: public A
{
	public: B()
	{
		cout << "Constructor Calling from B" << endl;
	}

	public: ~B()
	{
		cout << "Destructor Calling from B" << endl;
	}

};

class C: public B
{
	public: C()
	{
		cout << "Constructor Calling from C" << endl;
	}

	public: ~C()
	{
		cout << "Destructor Calling from C" << endl;
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

	cout << endl;

	return 0;
}