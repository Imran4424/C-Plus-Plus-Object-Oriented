/*
	Write a program to demonstrate checking whether it is set or not
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	cout<<"Decimal: "<<num<<endl;

	cout.setf(ios::hex);

	cout<<"hexadecimal: "<<num<<endl; // not working

	cout.unsetf(ios::dec);
	
	cout<<"hexadecimal: "<<num<<endl; //working

	

	return 0;
}