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
		cout << Add(7, 12) << endl;
	}
	else if (choose == 2)
	{
		cout << Sub(7, 12) << endl;
	}
	else if (choose == 3)
	{
		cout << Mul(7, 12) << endl;
	}	
	
	
	return 0;
}