#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string str;

	getline(cin, str);

	int length = str.size();

	cout << "String length is: " << length << endl; 

	return 0;
}