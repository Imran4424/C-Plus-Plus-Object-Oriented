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

	these are the memebers of iomanip headers

	sometimes we need to include the header like this,

										#include <iomanip>

	sometimes it work without including the header iomanip

	In update compilers don't need to include iomanip
*/