/*
	This code demonstrate the normal function calling
*/

#include <iostream>
using namespace std;

int Add(int a, int b)
{
	return a + b;
}


int main(int argc, char const *argv[])
{
	cout << Add(3, 7) << endl;

	cout << Add(10, 7) << endl;

	cout << Add(10, 15) << endl;	

	return 0;
}