#include <iostream>
using namespace std;

int Add(int a, int b)
{
	return a + b;
}

double Add(double a, double b)
{
	return a + b;
}

double Add(double a, int b)
{
	return a + b;
}

int main(int argc, char const *argv[])
{
	cout << Add(3, 7) << endl;

	cout << Add(3.17, 7.39) << endl;

	cout << Add(3.1416, 2) << endl;
	
	return 0;
}