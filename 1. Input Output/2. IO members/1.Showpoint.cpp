/*
	Write a program to explore ios::showpoint properties
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

	cout.setf(ios::showpoint);

	cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<PI<<endl;

	cout.precision(4);
	
	cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<PI<<endl;

	return 0;
}

/*
	We can see that showpoint shows us total 6 digits with or without fractional point in default


	but we can modify the number of digits using following statement

		cout.precision(int number);
*/