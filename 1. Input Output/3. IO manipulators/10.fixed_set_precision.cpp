/*	
	write a program to demonstrate I/O manipulators fixed and setprecision
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double PI = 3.1416;
	double a = 123456.720;

	cout<< PI <<"\t"<< a <<endl;

	cout<< fixed << PI <<"\t"<< a <<endl;

	cout<< fixed << setprecision(4) << PI <<"\t"<< a <<endl;

	return 0;
}

/*
	fixed - prints 6 digits after the floating point

	fixed & setprecision - prints given number of digits after floating point

	these are the memebers of iomanip headers

	sometimes we need to include the header like this,

										#include <iomanip>

	sometimes it work without including the header iomanip

	In update compilers don't need to include iomanip
*/