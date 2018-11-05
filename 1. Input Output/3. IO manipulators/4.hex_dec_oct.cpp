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
	hex - to print numbers in hexadecimal base

	oct - to print numbers in octal base

	dec - to print numbers in decimal base

	dec is active by default for input output stream

	these are the memebers of iomanip headers

	sometimes we need to include the header like this,

										#include <iomanip>

	sometimes it work without including the header iomanip

	In update compilers don't need to include iomanip
*/