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


	//public: using Base::id; // this will give error cause Derived class no access to Base class private
	                        // members, so changing access specifier is not possible

	public: void Show()
	{

		cout<< "Id: " << GatId() << endl;
		
		cout<< "Price: " << price << endl; 

		cout<< "Total Cost: " << totalCost << endl; 

		cout<< "Customer Name: " << customerName << endl;
	}
}; 

int main(int argc, char const *argv[])
{
	Derived green(5, 50, 150, "Imran");

	//green.price = 5; // this statement will give error, because we changed price access specifier public to
	              // protected in the Derived clas, that's why Derived class object can't access price
	             // directly

	Base red;
	red.price = 50; // Base class object can access price directly, cause it still public in Base class

	//red.GatId(); // this will give error because in Base class GetId is protected


	green.Show();


	cout << endl;
	cout << "Reading id from main: " << green.GatId() << endl; // this won't give any error, cause in
	                                                          // Derived class GetId is public

	return 0;
}

/*
	
*/