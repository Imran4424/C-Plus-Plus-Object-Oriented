/*
	write a cpp program to demonstrate comparison between two string
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string str;
	string str2;

	getline(cin, str);
	getline(cin, str2);

	int status = str.compare(str2);

	if (status == 0)
	{
		cout << str << " is equal to " << str2 << endl;
	}
	else if (status > 0) // returns 1
	{
		cout << str << " is greater than " << str2 << endl;
	}
	else if (status < 0) // returns -1
	{
		cout << str << " is less than " << str2 << endl;
	}

	return 0;
}


/*
	comparison in c++ string can also be done using compare function

	basic syntax:

		string text, address;

		int status = address.compare(text);

	if address == text then function will return 0

	if address > text then function will return 1

	if address < text then function will return -1
*/