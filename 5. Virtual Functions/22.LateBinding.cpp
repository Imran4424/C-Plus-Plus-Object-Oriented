#include <iostream>
using namespace std;

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int main(int argc, char const *argv[])
{
	int (*imran) (int, int); // declaring function pointer


	int choose;

	cin >> choose;

	if (choose == 1)
	{
		imran = Add;
	}
	else if (choose == 2)
	{
		imran = Sub;
	}
	else if (choose == 3)
	{
		imran = Mul;
	}	
	
	cout << imran(12, 10) << endl;

	return 0;
}