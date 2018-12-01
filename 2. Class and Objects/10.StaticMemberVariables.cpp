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
};

int main(int argc, char const *argv[])
{
	Number first;

	

	return 0;
}