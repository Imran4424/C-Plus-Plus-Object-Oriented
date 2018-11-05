/*
	write a program to demonstrate I/O manipulars setiosflags and resetiosflags
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	int num = 256;

	cout<< setiosflags(ios :: showpos) << num << endl;

	cout << resetiosflags(ios :: showpos) << num << endl;
	return 0;
}

