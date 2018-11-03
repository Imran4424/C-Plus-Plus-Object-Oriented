/*
	Write a program to explore ios::showpoint properties
*/

#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	double a = 2.97;
	double b = 560000;
	const double PI = 3.1416;

	cout<<a<<"\t"<<b<<"\t"<<PI<<endl;

	cout.setf(ios::showpoint);

	cout<<a<<"\t"<<b<<"\t"<<PI<<endl;
	

	return 0;
}