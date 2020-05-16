/*
	write a cpp program to demonstrate how to determine length of a c++ string
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string str;

	getline(cin, str);

	int length = str.size();

	int length_2 = str.length();

	cout << "String length is: " << length << endl;

	cout << "String length is: " << length_2 << endl; 

	return 0;
}

/*
	we can c++ string length using two functions size or length

	basic syntax :

	string text;

	int len = text.size();
	or
	int len = text.length();


	both will give the same result 
*/