/*
	write a cpp program to demonstrate string concatenation in c++
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string str = "I am a";
	string pro = " Programmer";

	string info = str + pro;

	cout<< "String str: " << str << endl;
	cout<< "String pro: " << pro << endl;
	cout<< "After concatenation: " << info << endl;

	return 0;
}

/*
	in c we use strcat function for string concatenation

	but in c++ string we can use just '+' operator for string concatenation
*/