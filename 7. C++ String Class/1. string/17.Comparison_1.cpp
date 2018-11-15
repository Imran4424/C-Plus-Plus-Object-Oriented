/*
	write a cpp program to demonstrate comparison between two string
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string str, str2;

	getline(cin, str);
	getline(cin, str2);

	if (str > str2)
	{
		cout << str << " is greater than " << str2 << endl;
	}
	else if(str < str2)
	{
		cout << str << " is less than " << str2 << endl;
	}
	else // equal
	{
		cout << str << " is equal to " << str2 << endl;
	}

	return 0;
}

/*
	comparison in c++ string can be done easily using relational operators

	"==" or "!=" for camparing string is equal or not
	
	'>' or '<' for comparing it's greater or not
*/