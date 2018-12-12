/*
	write a program to demonstrate private inherited variables access permission
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
		return cost * count; // this statement will give you error, because you can't access inherited
		                  // private variables
		                 // this is also true for assigning values within constructor
	}
};

int main(int argc, char const *argv[])
{
	C derived(1, 5, 20);

	cout << "Id: " << derived.GetId() << endl;

	cout << "Number of Item: " << derived.GetCount() << endl;

	cout << "Cost: " << derived.GetCost() << endl;
	
	cout << "Total Cost: " << derived.GetTotalCost() << endl;
	

	return 0;
}

/*
	derived class can access public inherited variables easily

	that's why they can also assign inherited public variables

	but thing's get little complex when you try to access private inherited variables

	derived class can't access private inherited variables, this will generate error

	that's why it also can't assign inherited private variables

	it can call inherit class constructor from the initializer list to initialize inherited private 
	variables
	
*/