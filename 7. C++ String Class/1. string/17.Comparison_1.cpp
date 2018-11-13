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
	else
	{
		cout << str << " is equal to " << str2 << endl;
	}

	return 0;
}