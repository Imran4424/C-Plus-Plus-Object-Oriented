/*
	write a program to demonstrate static member function in c++
*/

#include <iostream>
using namespace std;


class Number
{
	private: static int value; // declaring

	public: static void Increment()
	{
		value++;
	}

	public: static void Show()
	{
		cout << "Static Member Variable: " << value << endl;
	}	
};

int Number::value = 0; // defining reference

int main(int argc, char const *argv[])
{
	Number::Increment();
	Number::Show();

	Number::Increment();
	Number::Increment();
	Number::Show();

	return 0;
}


/*
	like static variable static function is not attach to the class object, it is attach to the class

	so, we can use static function using class name with scope resolution, for example,

		Number::Show();

	that way we can also access private static member variables using public static functions without
	creating an object

	one thing you can't access the static variable directly if it is private
*/