#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string str, copyStr;

	getline(cin, str);

	copyStr.assign(str);

	cout << "Input string : " << str << endl;

	cout << "copy string : " << copyStr << endl;

	return 0;
}