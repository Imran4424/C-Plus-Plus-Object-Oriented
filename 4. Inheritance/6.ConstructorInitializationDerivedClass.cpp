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
	{				//this will give you error because 

	}

	public: double getCost()
	{
		return cost;
	}
};

int main(int argc, char const *argv[])
{
	

	return 0;
}