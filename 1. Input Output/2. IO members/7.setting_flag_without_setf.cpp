/*
	Write a program that demonstrate how to set flags without setf
*/


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	double PI = 3.1416;

	cout<<PI<<endl;

	ios::fmtflags f;

	f = ios::showpos | ios::showpoint;

	cout.flags(f);

	cout<<PI<<endl;

	return 0;
}

/*
	Here we are fmtflags(format flags) type object to set ios flags without using setf function
	
*/