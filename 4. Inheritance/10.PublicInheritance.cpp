/*
	write a program to demonstrate public inheritance in big picture
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

	public: void Show()
	{
		//cout<< "Id:" << id << endl;  // this line of code will generate error

		cout<< "Id: " << GatId() << endl;  // so use a public member function in base class to skip errors
		
		cout<< "Price: " << price << endl;
		cout<< "Total Cost: " << totalCost << endl;
		cout<< "Customer Name: " << customerName << endl;
	}
}; 

int main(int argc, char const *argv[])
{
	Derived obj(5, 50, 150, "Imran");

	obj.Show();


	return 0;
}

/*
	so far we have been, two types of access specifier - public, private
	in this code we will see about protected access specifier

	public - public class members can be accessed by anyone through an object
	private - private class members can be accessed only by same class members

	protected - protected class members can be accessed by same class members as well as the derived class
	            members

	otherwise it will generate error



	now let's talk about Inheritance type

	a class can be inherited in 3 types - public , private , protected




	In this code we will only talk about public inheritance

	when we inherit a class publicly then all class members remain same in the derived class except private

	actually we can't inherited private members from base classes, that's why we can't access private base
	members from derived class, but we can always use a public member funtion in base class to access the
	private base member

	Base class - Derived class

	private    - not inherited / Inaccessible
	public     - public
	protected  - protected

	
	that means if you publicly inherited something from base class then every base class member will have
	same access specifier in the derived class except private members
*/