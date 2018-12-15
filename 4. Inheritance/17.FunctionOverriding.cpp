/*
	write a program to demonstrate function overriding
*/

#include <iostream>
using namespace std;

class Base
{
	public: Base()
	{

	}

	public: void Message(int a)
	{
		cout << "calling from Base" << endl;
	}
};


class Derived: public Base
{
	public: Derived()
	{

	}

	public: void Message() // here you are trying to overload a base function, but this will treat as 
	{                     // different function

		Base::Message(7);
		cout << "calling from Derived" << endl;
	}

	
};

int main(int argc, char const *argv[])
{
	//Base red;
	//red.Message();


	Derived green;  
	green.Message(9); // this will generate error cause no maching function in derived class
	                
	return 0;
}

/*
	One thing when we call a function with derived class object

	first it search the function definition in the derived class, if it don't find it then it began
	seaching in the base class


	so you can't overlaod a base class function

	some operation can be succeed, we will see a operation like that in the next code, but this operations
	are not included as function overloading or function overridden

	here, function overloading failed 
	and derived class has no other function in derived class named Message which has one int parameter
	so this will give error

	Hint: you can't overload between base class and derived class function, But you call locally overload
	in the derived scope to get rid of this error
*/

