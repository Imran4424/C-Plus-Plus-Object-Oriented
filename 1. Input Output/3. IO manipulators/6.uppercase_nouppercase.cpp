/*
	write a program to demonstrate I/O manipulators uppercase and nouppercase
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	int num = 255;

	cout<< hex << uppercase << num << endl;

	cout<< hex << nouppercase << num << endl; 


	return 0;
}

/*
	uppercase - enable uppercase characters

	nouppercase - disable uppercase characters means lowercase

	these are the memebers of iomanip headers

	sometimes we need to include the header like this,

										#include <iomanip>

	sometimes it work without including the header iomanip

	In update compilers don't need to include iomanip
*/