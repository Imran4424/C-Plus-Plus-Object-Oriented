#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string str;

	getline(cin, str);

	int length = str.size();

	int length_2 = str.length();

	cout << "String length is: " << length << endl;

	cout << "String length is: " << length_2 << endl; 

	return 0;
}