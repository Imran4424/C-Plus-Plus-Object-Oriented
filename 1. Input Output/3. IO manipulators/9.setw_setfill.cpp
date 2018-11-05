/*	
	write a program to demonstrate I/O manipulators setw and setfill
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char const *argv[])
{
	cout<< setw(25) <<setfill('.') << "I am a Programmer" <<endl;

	return 0;
}

/*
	setw() - occupied characer spaces

	setfill() - fill remaining spaces with a special character

	these are the memebers of iomanip headers

	sometimes we need to include the header like this,

										#include <iomanip>

	sometimes it work without including the header iomanip

	In update compilers don't need to include iomanip
*/