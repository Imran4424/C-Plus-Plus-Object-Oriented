/*
	write a program to demonstrate the way calling inherited function in c++
*/

#include <iostream>
using namespace std;


class A
{
	private: int id;

	public: A(): id(0)
	{
		cout << "Calling from A" << endl;
	}

	public: A(int p_id): id(p_id)
	{

	}

	public: int GetId()
	{
		return id;
	}
};

class B: public A
{
	private: int count;

	public: B(): count(0)
	{
		cout << "Calling from B" << endl;
	}

	public: B(int p_id, int p_count): A(p_id), count(p_count)
	{

	} 

	public: int GetCount()
	{
		return count;
	}
};

class C: public B
{
	private: double cost;

	public: C(): cost(0)
	{
		cout << "Calling from C" << endl;
	}

	public: C(int p_id, int p_count, double p_cost): B(p_id, p_count), cost(p_cost)
	{				// now this code will just work fine
				       // here we call the constructor of the inherited class
					
	}

	public: double GetCost()
	{
		return cost;
	}

	public: double GetTotalCost()
	{
		return cost * GetCount(); // now this is OK
		                  // we are accessing private inherited member
		                 //  using public inherit functions
	}
};

int main(int argc, char const *argv[])
{
	C derived(1, 5, 20);

	cout << "Id: " << derived.GetId() << endl;  // calling base class funtion from derived class object

	cout << "Number of Item: " << derived.GetCount() << endl; // calling base class funtion from derived class object

	cout << "Cost: " << derived.GetCost() << endl;
	
	cout << "Total Cost: " << derived.GetTotalCost() << endl;
	

	return 0;
}

/*
	calling derived function is demonstrated in previous codes

	just repeating this as a reminder 

*/