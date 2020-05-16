/*
	write a cpp program to demonstrate how to copy a c++ string
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string str, copyStr;

	getline(cin, str);

	copyStr = str;

	cout << "Input string : " << str << endl;

	cout << "copy string : " << copyStr << endl;

	return 0;
}

/*
	for copying a c-style string we have to use strcpy() function

	but in c++ string we can simply use the assignment operator ( = ) to copy a string

	basic syntax:
	string text, cpText;

	cpText = text ;
*/