#include <iostream>
using namespace std;


class A
{
	public: int id;

	public: A()
	{
		cout << "Calling from A" << endl;
	}

	public: int GetId()
	{
		return id;
	}
};

class B: public A
{
	public: int count;

	public: B()
	{
		cout << "Calling from B" << endl;
	}

	public: int GetCount()
	{
		return count;
	}
};

class C: public B
{
	public: double cost;

	public: C()
	{
		cout << "Calling from C" << endl;
	}

	public: double getCost()
	{
		return getCost;
	}
};

int main(int argc, char const *argv[])
{
	

	return 0;
}