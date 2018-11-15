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