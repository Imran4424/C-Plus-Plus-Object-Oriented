/*
	Write a program to explore ios::uppercse and std::nouppercase properties
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num = 15;

	cout<<num<<endl;

	//setting uppercase

	cout.setf(ios::uppercase);

	cout<<hex<<num<<endl;

	//setting lowercase

	cout<<nouppercase<<hex<<num<<endl;

	return 0;
}

/*
	here we are converting decimal to hexadecimal using hex
	we can also convert decimal to octal using oct

	cout.setf(ios::uppercase); for switching the letters in uppercase

	we can also in the following way,

		cout<<uppercase<<hex<<num<<endl;


	for lowercase we have to write the following statement

		cout<<nouppercase<<hex<<num<<endl;
*/