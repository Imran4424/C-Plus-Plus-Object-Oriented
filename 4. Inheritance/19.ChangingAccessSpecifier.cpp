/*
	write a program to demonstrate how to change access specifier of inherited members in derived class
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

class Derived: private Base
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

	public: void Show()
	{
		//cout<< "Id:" << id << endl;  // this line of code will generate error

		cout<< "Id: " << GatId() << endl;  // so use a public member function in base class to skip errors
		
		cout<< "Price: " << price << endl; // this code doesn't give you any error
		                                  // cause these are inherited in derived class as protected

		cout<< "Total Cost: " << totalCost << endl; // this code doesn't give you any error
		                                  // cause these are inherited in derived class as protected

		cout<< "Customer Name: " << customerName << endl;
	}
}; 

int main(int argc, char const *argv[])
{
	Derived obj(5, 50, 150, "Imran");

	//obj.price = 5; // this member variable is public in base class but protected in derived class
	                // that's why it's giving error

	obj.Show();


	return 0;
}

/*
	
*/