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
	Add(2, 5);
	Add(5);
	Add();

	Subtract(29, 15);
	Subtract(29);
	Subtract();

	
	
	return 0;
}