/*
	write a program to demonstrate static member variables in c++ class
*/

#include <iostream>
using namespace std;


class Number
{
	private: static int value; // declaring

	public: void Increment()
	{
		value++;
	}

	public: void Show()
	{
		cout << "Static Member Variable: " << value << endl;
	}	
};

int Number::value = 0; // defining reference

int main(int argc, char const *argv[])
{
	Number first;
	Number second, third;

	first.Increment();
	second.Show();
	
	second.Increment();
	third.Show();

	third.Increment();
	first.Show();



	return 0;
}

/*
	as we know, we can't access private members from classes not even static

	but we can define reference tp
*/