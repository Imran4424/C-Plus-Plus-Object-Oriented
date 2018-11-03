/*
	Write a program to explore ios std::fixed properties
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

	return 0;
}

/*
	fixed helps cout prints the floating points in 6 digits by default

	we can controlled this using following statement

		cout.precision(int num);
*/