/*
	write a program to demonstrate I/O manipulators fixed, scientific 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double a = 1234.0, b = 123.34;

	cout<<"Default"<<endl;
	cout<< a <<" "<< b <<endl;
	
	cout<<"Fixed"<<endl;
	cout<< fixed << a <<" "<< b <<endl;

	cout<<"Scientific"<<endl;
	cout<< scientific << a <<" "<<b<<endl;

	return 0;
}

/*
	default - prints the default double value entered

	fixed - prints five digit after the floating points

	scientific - prints numbers in scientific form

	these are the memebers of iomanip headers

	sometimes we need to include the header like this,

										#include <iomanip>

	sometimes it work without including the header iomanip

	In update compilers don't need to include iomanip
*/