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

	// changing base class members access specifier in derived class

	private: using Base::totalCost; // changing protected to private
	protected: using Base::price; // changing public to protected
	public: using Base::GetId;   // changing protected to public, note: GetId has no parenthesis


	//public: using Base::id; // this will give error cause Derived class no access to Base class private
	                        // members, so changing access specifier is not possible

	public: void Show()
	{

		cout<< "Id: " << GetId() << endl;
		
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

	//red.GetId(); // this will give error because in Base class GetId is protected


	green.Show();


	cout << endl;
	cout << "Reading id from main: " << green.GetId() << endl; // this won't give any error, cause in
	                                                          // Derived class GetId is public

	return 0;
}

/*
	we can change access specifier of inherited memebers in derived 

	this is cool feature of c++

	from c++11, we can use "using" keyword to change access specifier of Base class members in Derived
	class

	only restriction is that we can't change access specifier of private members cause Derived class
	has no access to Base class private members

	another thing when we are changing functions access specifier we don't need to use parenthesis
	
	actually changing member variables and member functions access specifier statement is alike


	protected: using Base::price; // price is a member variable
	public: using Base::GetId;   // GetId is a member function
*/