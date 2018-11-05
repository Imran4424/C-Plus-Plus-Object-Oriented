/*
	write a program to demonstrate I/O manipulators showbase, noshowbase 
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char const *argv[])
{
	int num = 200;

	cout<< endl <<"Hexadecimal: "<<endl;
	cout << hex << showbase << num <<endl;
	cout << hex << noshowbase << num <<endl<<endl;

	cout<<"Decimal: "<<endl;
	cout << dec << showbase << num <<endl;
	cout << dec << noshowbase << num <<endl<<endl;

	cout<<"Octal: "<<endl;
	cout << oct << showbase << num <<endl;
	cout << oct << noshowbase << num <<endl<<endl;

	return 0;
}

/*
	showbase - to show the base of the number system

	noshowbase - to hide the base of the number system

	by default noshowbase is activated

	these are the memebers of iomanip headers

	sometimes we need to include the header like this,

										#include <iomanip>

	sometimes it work without including the header iomanip

	In update compilers don't need to include iomanip
*/