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

	cout<<"hexadecimal: "<<num<<endl;
	return 0;
}