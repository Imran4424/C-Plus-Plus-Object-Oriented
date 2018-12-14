/*
	write a program to demonstrate how to add new functionality to derived class
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

	public: int GatId()
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

	public: void Show() // this function is an addition from the base class, cause this function don't exist in base class
	{                  // like this we can add more functionality to the derived class as we need
			  // this is really simple and really effective
		
		cout<< "Id: " << GatId() << endl;
		
		cout<< "Price: " << price << endl;
		cout<< "Total Cost: " << totalCost << endl;
		cout<< "Customer Name: " << customerName << endl;
	}
}; 

int main(int argc, char const *argv[])
{
	Derived obj(5, 50, 150, "Imran");

	obj.Show(); // calling an additional function in respect of base class


	return 0;
}

/*
	actually we saw this in previous code

	just mentioning here as a remainder
*/