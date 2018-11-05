/*
	write a program to demonstrate I/O manipulators uppercase and nouppercase
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	int num = 200;

	cout<< hex << uppercase << num << endl;

	cout<< hex << nouppercase << num << endl


	return 0;
}

/*
	uppercase - enable uppercase characters

	nouppercase - disable uppercase characters means lowercase

	
*/