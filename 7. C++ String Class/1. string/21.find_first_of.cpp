#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string digits = "0123456789";

	string identifier = "Hope7";

	int pos = identifier.find_first_of(digits);
	
	return 0;
}