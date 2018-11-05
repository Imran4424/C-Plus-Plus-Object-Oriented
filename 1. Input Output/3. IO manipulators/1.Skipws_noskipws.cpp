/*
	Write a program to demonstrate the I/O manipulators skipws, noskipws 
*/

#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	char nw,s;

	cin>> noskipws >> nw;

	cin>> skipws >> s;

	cout<<(int)nw<<endl;

	cout<<s<<" "<<(int)s<<endl;

	return 0;
}