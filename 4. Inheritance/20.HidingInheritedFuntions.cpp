/*
	write a program to demonstrate how to hide inherited member funtions in derived class
*/

#include <iostream>
using namespace std;

class Base
{
	private: int id; // can access class members and friends

	public: int price; // can access anybody
	
	protected: int totalCost; // can access by both base and derived class members

	public: Base()
	{
		id = 0;
		price = 0;
		totalCost = 0;
	}

	public: Base(int id, int price, int totalCost)
	{
		this -> id = id;
		this -> price = price;
		this -> totalCost = totalCost;
	}

	protected: int GetId()
	{
		return id;
	}
};

class Derived: public Base
{
	private: string customerName;

	public: Derived()
	{
		customerName = "";
	}

	public: Derived(int id, int price, int totalCost, string name): Base(id, price, totalCost)
	{
		customerName = name;
	}

	// marking inherited function as delete (inaccesible)

	int GetId() = delete;

	
	public: void Show()
	{

		//cout<< "Id: " << GetId() << endl; // this statement will give error, cause GetId() is no longer
		                                   // exist in Derived class
		
		cout<< "Price: " << price << endl; 

		cout<< "Total Cost: " << totalCost << endl; 

		cout<< "Customer Name: " << customerName << endl;
	}
}; 

int main(int argc, char const *argv[])
{
	Derived green(5, 50, 150, "Imran");	

	green.Show();


	return 0;
}

/*
	there are two ways to hide inherited member functions in derived class

		1. changing access specifier in derived class using "using" keyword
		2. deleting the inherited member function in derived class


	first type we saw on previous code

	now, we will talk about second type


*/