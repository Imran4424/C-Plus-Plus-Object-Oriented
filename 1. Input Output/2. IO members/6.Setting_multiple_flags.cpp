/*
	Write a program to setting multiple flags in single statement
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	double PI = 3.1416;

	cout<<PI<<endl;

	cout.setf(ios::showpos | ios::showpoint);

	cout<<PI<<endl;

	return 0;
}

/*
	Here, 
*/