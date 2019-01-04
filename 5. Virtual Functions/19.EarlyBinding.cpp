#include <iostream>
using namespace std;

int Add(int x, int y)
{
	return x+y;
}

int Sub(int x, int y)
{
	return x-y;
}

int Mul(int x, int y)
{
	return x*y;
}

int main(int argc, char const *argv[])
{
	cout << Add(7, 12) << endl;
	
	cout << Sub(7, 12) << endl;
	
	cout << Mul(7, 12) << endl;
	
	return 0;
}