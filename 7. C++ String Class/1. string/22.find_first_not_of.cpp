/*
	write a cpp program to demonstrate find_first_not_of() function
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string digits = "0123456789";

	string identifier = "Hope7";

	int pos = identifier.find_first_not_of(digits);

	if (pos >= 0)
	{
		cout << " first occurence of identifier characters at " << pos << endl;
	}
	

	identifier = "11dead";

	pos = identifier.find_first_not_of(digits);

	if (pos >= 0)
	{
		cout << " first occurence of identifier characters at " << pos << endl;
	}
	

	return 0;
}

/*
	basic syntax:

		string digits, identifier;

		identifier.find_first_not_of(digits);


	this function returns first occurence of any character that is not of digits string in identifier string
	
	remember it only returns first character it doesn't matter how many characters are not of digits are there

	it can be character of any string but not of digit string
*/