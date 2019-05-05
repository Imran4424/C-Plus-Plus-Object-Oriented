#include <iostream>
#include <string> // for string
#include <sstream> // for string stream
using namespace std; 

int main(int argc, char const *argv[])
{
	string s = "13579";

	stringstream medium(s);

	int num = 0;

	medium >> num;

	cout << "From string the number we get: " 

	return 0;
}