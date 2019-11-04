#include <iostream>
using namespace std;

int Add(int a, int b)
{
	return a + b;
}

int Add(int a, int b, int c)
{
	return a + b + c;
}

int Add(int a, int b, int c, int d)
{
	return a + b + c + d;
}

int main(int argc, char const *argv[])
{
	cout << Add(7, 4) << endl;

	cout << Add(4, 9, 1) << endl;

	cout << Add(1, 11, 9, 8) << endl;

	return 0;
}