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

/*
	boolalpha - for setting boolean input or output to true,false insted of 1,0

	noboolalpha - for setting boolean input or output to 1,0 instead of true,false

	noboolalpha is been set by default

	these are the memebers of iomanip headers

	sometimes we need to include the header like this,

										#include <iomanip>

	sometimes it work without including the header iomanip

	In update compilers don't need to include iomanip
*/