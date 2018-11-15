/*
	write a cpp program to demonstrate find_last_not_of() function
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string digits = "0123456789";

	string identifier = "who is 7 and who is 9";

	int pos = identifier.find_last_not_of(digits);

	if (pos >= 0)
	{
		cout << " last occurence of identifier characters at " << pos << endl;
	}

	return 0;
}


/*
	basic syntax:

		string digits, identifier;

		identifier.find_last_not_of(digits);


	this function returns last occurence of any character that is not of digits string in identifier string
	
	remember it only returns last character it doesn't matter how many characters are not of digits are there

	it can be character of any string but not of digit string
*/