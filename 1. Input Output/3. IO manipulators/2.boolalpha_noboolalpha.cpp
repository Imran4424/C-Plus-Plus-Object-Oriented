/*
	write a program to demonstrate I/O manipulators boolalpha, noboolalpha
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	bool status;

	cin>> boolalpha >> status;

	cout << boolalpha << status <<endl;
	
	return 0;
}