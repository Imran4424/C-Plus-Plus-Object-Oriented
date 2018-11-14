/*
	write a cpp program to demonstrate string find() function
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string str = "a needle in a haystack";

	int pos = str.find("needle");

	if (pos >= 0)
	{
		cout << " found needle at position " << pos << endl;
	}
	else
	{
		cout << " no needle " << pos << endl;
	}

	pos = str.find("pin");

	if (pos >= 0)
	{
		cout << " found needle at position " << pos << endl;
	}
	else
	{
		cout << " no needle " << pos << endl;
	}


	str = "a needle in a haystack needle";

	pos = str.find("needle");

	if (pos >= 0)
	{
		cout << " found needle at position " << pos << endl;
	}
	else
	{
		cout << " no needle " << pos << endl;
	}


	return 0;
}

/*
	find() usually use to find a string occurence inside of another string
*/