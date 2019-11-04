#include <iostream>
using namespace std;

int Add(int a = 0, int b = 0)
{
	return a + b;
}

int Subtract(int a = 10, int b = 10)
{
	return a - b;
}

int Multipication(int a = 5, int b = 2)
{
	return a * b;
}

int main(int argc, char const *argv[])
{
	cout << Add(2, 5) << endl;
	cout << Add(5) << endl;
	cout << Add() << endl;

	Subtract(29, 15);
	Subtract(29);
	Subtract();

	Multipication(10, 5);
	Multipication(7);
	Multipication();
	
	return 0;
}