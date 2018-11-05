/*	
	write a program to demonstrate I/O manipulators showpoint and noshowpoint
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	double PI = 3.1416;
	double a = 123456.720;

	cout<< PI <<"\t"<< a <<endl;

	cout<< showpoint << PI <<"\t"<< a <<endl;

	return 0;
}

/*
	showpoint - shows us 6 digits in total
*/