#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	string str = "1234321";
	string revStr = str;

	reverse(revStr.begin(), revStr.end());
	
	if(str == revStr) {
		cout << "String is Palindrome" << endl;
	} else {
		cout << "String is not Palindrome" << endl;
	}

	return 0;
}