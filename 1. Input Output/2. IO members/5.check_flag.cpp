/*
	Write a program to demonstrate checking whether it is set or not
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

	ios::fmtflags flag;    // format flag type object

	flag = cout.flags();  // storing all flags status

	if (flag && ios::hex)
	{
		cout<<"hex is set"<<endl;
	}

	if (flag && ios::dec)
	{
		cout<<"dec is not set"<<endl;
	}

	return 0;
}