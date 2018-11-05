/*	
	write a program to demonstrate I/O manipulators showpos and noshowpos
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num = 256;

	cout<< showpos << num << endl;

	cout<< noshowpos << num << endl;

	return 0;
}