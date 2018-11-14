#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string digits = "0123456789";

	string identifier = "who is 7 and who is 9";

	int pos  = identifier.find_last_of(digits);

	
	return 0;
}