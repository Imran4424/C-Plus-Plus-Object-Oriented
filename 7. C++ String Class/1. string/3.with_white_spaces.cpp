/*
	write a cpp program to demonstrate getline as string input stream
*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string str;

	getline(cin, str);

	cout<< "input string is: "<< str <<endl;
	
	return 0;
}