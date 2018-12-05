#include <iostream>
using namespace std;


int Add(int x, int y)
{
	int sum = x+y;

	return sum;
}


int main(int argc, char const *argv[])
{
	cout << Add(7, 5) << endl;
	
	return 0;
}