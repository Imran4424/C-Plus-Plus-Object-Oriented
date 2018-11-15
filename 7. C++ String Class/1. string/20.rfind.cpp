/*
	write a cpp program to demonstrate string rfind() function
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string str = "a pin in a haystack pin";

	int pos = str.rfind("pin");

	if (pos >= 0)
	{
		cout << " found pin in position " << pos << endl;
	}
	else
	{
		cout << " no pin " << pos << endl;
	}

	str = "a pin in a haystack. pin is really small, so it's really hard to find a pin in haystack";

	pos = str.rfind("pin");

	if (pos >= 0)
	{
		cout << " found pin in position " << pos << endl;
	}
	else
	{
		cout << " no pin " << pos << endl;
	}

	return 0;
}

/*
	rfind() always return last occurence of the substring from a string

	for example:
		in string: a needle in a haystack needle
		if we search: needle

		then it will return 23 not 2

*/