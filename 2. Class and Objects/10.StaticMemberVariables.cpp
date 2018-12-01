/*
	write a program to demonstrate static member variables in c++ class
*/

#include <iostream>
using namespace std;


class Number
{
	private: static int value;

	public: Number()
	{
		value = 0;
	}

	public: void Show()
	{
		cout << value << endl;
	}	
};

int main(int argc, char const *argv[])
{
	Number first;

	Number second;

	first.Show();

	second.Show();

	return 0;
}