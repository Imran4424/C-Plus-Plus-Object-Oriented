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

	public: void Message()
	{
		cout << "calling from Base" << endl;
	}
};


class Derived: public Base
{
	public: Derived()
	{

	}

	public: void Message(int id) // here you are trying to overload a base function, but this will treat as 
	{                     // different function

		cout << "calling from Derived" << endl;
	}

	
};

int main(int argc, char const *argv[])
{
	//Base red;
	//red.Message();


	Derived green;  
	green.Message(9); // now this will work fine

	                
	return 0;
}

/*
	As we know when we call a function with derived class object

	first it search the function definition in the derived class, if it don't find it then it began
	seaching in the base class

	so this code run fine

	because here derived class function Message(int a) is treating like a diffenet function not overloaded
	function

*/

