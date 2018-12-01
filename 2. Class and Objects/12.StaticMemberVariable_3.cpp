/*
	write a program to demonstrate static member variables in c++ class
*/

#include <iostream>
using namespace std;


class Number
{
	private: static int value;

	public: void Increment()
	{
		value++;
	}

	public: void Show()
	{
		cout << "Static Member Variable: " << value << endl;
	}	
};

int Number::value = 0;

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
	
*/