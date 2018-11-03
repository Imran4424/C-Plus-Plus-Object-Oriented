/*
	Write a program to explore ios::uppercse and ios::lowercase properties
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

	cout.setf(ios::lowercase)

	cout<<hex<<num<<endl;

	return 0;
}