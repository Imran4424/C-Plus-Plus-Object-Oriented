/*
	Write a program to explore ios::fixed properties
*/

#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	double a = 2.97;
	double b = 56;
	double c = 123456;
	const double PI = 3.1416;

	cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<PI<<endl;

	cout<<fixed<<a<<"\t"<<b<<"\t"<<c<<"\t"<<PI<<endl;

	cout.precision(4);
	
	cout<<fixed<<a<<"\t"<<b<<"\t"<<c<<"\t"<<PI<<endl;

	cout<<fixed<<precision(2)<<a<<"\t"<<b<<"\t"<<c<<"\t"<<PI<<endl;
	
	return 0;
}