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