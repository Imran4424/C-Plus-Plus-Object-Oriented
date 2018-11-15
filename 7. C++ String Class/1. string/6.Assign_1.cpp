/*
	write a cpp program to demonstrate how to copy a c++ string using assign function
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string str, copyStr;

	getline(cin, str);

	copyStr.assign(str);

	cout << "Input string : " << str << endl;

	cout << "copy string : " << copyStr << endl;

	return 0;
}

/*

	for copying c++ string we can use assign() function instead of assignment operator

	that will serve the same purpose as assignment operator

	basic syntax:

	string text, cpText ;
	cpText.assign(text);


	here copy string is the main object and copied string is the argument

*/