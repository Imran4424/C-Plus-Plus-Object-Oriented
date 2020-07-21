/*
	write a cpp program to demonstrate cin as string input stream
*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string str;

	cin >> str;

	cout<< "the inputed string is: "<< str << endl;

	return 0;
}

/*
	Basic input stream cin can be used for c++ string input

	but, cin only takes those string that does not include white spaces

	for examle, we will give following string as input

	Football is a very popular game

	we will get,
	Football

	the characters after whitespace will be ignored 
*/