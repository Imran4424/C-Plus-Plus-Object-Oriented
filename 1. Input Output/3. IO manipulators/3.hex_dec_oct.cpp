/*
	write a program to demonstrate I/O manipulators hex, oct and dec
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char const *argv[])
{
	int num = 200;

	cout << hex << num <<endl;

	cout << dec << num <<endl;

	cout << oct << num <<endl;

	return 0;
}

/*
	
*/