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


	public: void Show()
	{
		cout<< "Id:" << id << endl;
		cout<< "Price:" << price << endl;
		cout<< "Total Cost:" << totalCost << endl;
	}
};

class Derived: public Base
{
	private: string customerName;

	public: Derived()
	{
		customerName = "";
	}
}

int main(int argc, char const *argv[])
{
	
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

	when we inherit a class publicly then all class members remain same in the derived class

	Base class - Derived class

	public     - public
	private    - private
	protected  - protected

	
	that means if you publicly inherited something from base class then every base class member will have
	same access specifier in the derived class
*/