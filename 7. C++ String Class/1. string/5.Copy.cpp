#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string str, copyStr;

	getline(cin, str);

	copyStr = str;

	cout << "str : " << str << endl;

	cout << "copy str : " << copyStr << endl;

	return 0;
}