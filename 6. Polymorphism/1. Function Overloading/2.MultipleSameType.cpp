#include <iostream>
using namespace std;

int AddTwo(int a, int b)
{
	return a + b;
}

int AddThree(int a, int b, int c)
{
	return a + b + c;
}

int AddFour(int a, int b, int c, int d)
{
	return a + b + c + d;
}

int main(int argc, char const *argv[])
{
	AddTwo(7, 4);

	AddThree(4, 9, 1);

	AddFour(1, 11, 9, 8);

	return 0;
}