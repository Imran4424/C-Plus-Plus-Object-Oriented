/*
	write a program to demonstrate how to chain member functions in c++
*/


#include <iostream>
using namespace std;

class Calculator
{
	private: int currentValue;

	public: Calculator()
	{
		currentValue = 0;
	}
	
	public: Calculator& Add(int val)
	{
		currentValue += val;

		return *this;
	}

	public: Calculator& Sub(int val)
	{
		currentValue -= val;

		return *this;
	}

	public: Calculator& Mul(int val)
	{
		currentValue *= val;

		return *this;
	}
};


int main(int argc, char const *argv[])
{
	
	return 0;
}