#include <iostream>
using namespace std;

int Add(int x, int y)
{
	return x + y;
}

float Add(float x, float y)
{
	return x + y;
}

double Add(double x, double y)
{
	return x + y;
}

string Add(string x, string y)
{
	return x + y;
}

int main(int argc, char const *argv[])
{
	cout << Add(8, 12) << endl;
	
	cout << Add(4.5, 7.5) << endl;
	
	cout << Add(8.2, 12.36) << endl;
	
	cout << Add("Hi, ", "Let's Play") << endl;

	return 0;
}