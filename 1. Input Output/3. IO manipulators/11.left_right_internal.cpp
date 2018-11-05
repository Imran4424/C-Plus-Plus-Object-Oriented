/*	
	write a program to demonstrate I/O manipulators left, right and internal
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	cout<<"Default: " << setw(7) << -71 << endl;

	cout<<"Left: " << left << setw(7) << -71 << endl;
	
	cout<<"Right: " << right << setw(7) << -71 << endl;
	
	cout<<"Internal: " << internal << setw(7) << -71 << endl;
	
	return 0;
}

/*
	setw() - occupied characer spaces

	left - occupied character spaces in left by setw

	right - occupied character spaces in right by setw

	internal - occupied character spaces in middle between two characters

	by default it set to right

	these are the memebers of iomanip headers

	sometimes we need to include the header like this,

										#include <iomanip>

	sometimes it work without including the header iomanip

	In update compilers don't need to include iomanip
*/