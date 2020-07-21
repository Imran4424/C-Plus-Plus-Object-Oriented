/*
	write a cpp program to demonstrate find_first_of() function
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string digits = "0123456789";

	string identifier = "Hope7";

	int pos = identifier.find_first_of(digits);

	if (pos >= 0)
	{
		cout << " illegal identifier " << pos << endl;
	}
	else
	{
		cout << " legal identifier " << endl;
	}

	identifier = "deads7man";

	pos = identifier.find_first_of(digits);

	if (pos >= 0)
	{
		cout << " illegal identifier " << pos << endl;
	}
	else
	{
		cout << " legal identifier " << endl;
	}

	return 0;
}

/*
	basic syntax:

		string digits, identifier;

		identifier.find_first_of(digits);


	this function returns first occurence of any character of digits string in identifier string
	
	remember it only returns first character it doesn't matter how many characters of digits are there
*/