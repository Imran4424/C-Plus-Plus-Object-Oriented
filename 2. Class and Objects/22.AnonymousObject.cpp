#include <iostream>
using namespace std;


int Add(int x, int y)
{
	int sum = x+y;

	return sum;
}


int main(int argc, char const *argv[])
{
	int add_result = Add(7,5);

	cout << add_result << endl;
	
	return 0;
}

