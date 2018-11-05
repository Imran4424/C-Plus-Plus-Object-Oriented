/*
	write a program to demonstrate I/O manipulators showbase, noshowbase 
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char const *argv[])
{
	int num = 200;

	cout<<"Hexadecimal: ";
	cout << hex << showbase << num <<endl<<endl;

	cout<<"Decimal: ";
	cout << dec << showbase << num <<endl<<endl;

	cout<<"Octal: ";
	cout << oct << showbase << num <<endl<<endl;

	return 0;
}