/*
	Write a code that seting and unseting a flag
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num = 100;

	cout<<"Decimal: "<<num<<endl;

	cout.setf(ios::hex);

	cout<<"hexadecimal: "<<num<<endl; // not working

	cout.unsetf(ios::dec);
	
	cout<<"hexadecimal: "<<num<<endl; //working

	return 0;
}