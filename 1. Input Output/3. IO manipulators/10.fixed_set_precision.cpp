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
*/