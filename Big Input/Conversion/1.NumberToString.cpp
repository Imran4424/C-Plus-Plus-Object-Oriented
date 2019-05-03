#include <iostream>
#include <string> // for string
#include <sstream> // for string stream
using namespace std;

int main(int argc, char const *argv[])
{
	int num = 12357667;

	ostringstream word;

	word << num;

	string sNum = word.str();

	cout << "The string from num is: " << sNum << endl;

	return 0;
}

/*
	Using string stream
*/