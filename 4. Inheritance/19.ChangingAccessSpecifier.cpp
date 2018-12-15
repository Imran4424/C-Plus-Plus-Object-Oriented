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

	protected: int GatId()
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

	// changing base class members access specifier in derived class

	private: using Base::totalCost; // changing protected to private
	protected: using Base::price; // changing public to protected
	public: using Base::GatId;   // changing protected to public, note: GetId has no parenthesis


	private: using Base::id; // this will give error cause Derived class no access to Base class members 

	public: void Show()
	{

		cout<< "Id: " << GatId() << endl;
		
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

	obj.price = 5; // 
	              // 

	obj.Show();


	return 0;
}

/*
	
*/