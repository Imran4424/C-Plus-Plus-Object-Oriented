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
	else if (status > 0)
	{
		/* code */
	}

	return 0;
}