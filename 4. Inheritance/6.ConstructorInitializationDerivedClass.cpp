#include <iostream>
using namespace std;


class A
{
	public: int id;

	public: A(): id(0)
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

	public: B(): count(0)
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

	public: C(): cost(0)
	{
		cout << "Calling from C" << endl;
	}

	public: C(int p_id, int p_count, double p_cost): id(p_id), count(p_count), cost(p_cost)
	{				//this will give you error because we can't initialized
					// inherited member variables using initializer list

	}

	public: double GetCost()
	{
		return cost;
	}
};

int main(int argc, char const *argv[])
{
	C derived(1, 5, 20);

	cout << "Id: " << derived.GetId() << endl;

	cout << "Number of Item: " << derived.GetCount() << endl;

	cout << "Cost: " << derived.GetCost() << endl;
	
	cout << "Total Cost: " << derived.GetCount() * derived.GetCost() << endl;
	

	return 0;
}