#include <iostream>
using namespace std;

int AddInt(int a, int b)
{
	return a + b;
}

double AddDouble(double a, double b)
{
	return a + b;
}

double AddMix(double a, int b)
{
	return a + b;
}

int main(int argc, char const *argv[])
{
	cout << AddInt(3, 7) << endl;

	cout << AddDouble(3.17, 7.39) << endl;

	cout << AddMix(3.1416, 2) << endl;
	
	return 0;
}