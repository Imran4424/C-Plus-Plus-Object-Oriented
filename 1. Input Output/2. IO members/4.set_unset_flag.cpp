/*
	Write a code that setting and unsetting a flag
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

/*
	here we are setting flag using following statement

		cout.setf();

	here we are unsetting flag using following statement

		cout.unsetf();


	for printing hexadecimal we have to set hex flag nad unset dec flag otherwise it won't work

	we can also unset basefield and that works for all I guess

		cout.unsetf(ios::basefield);
*/