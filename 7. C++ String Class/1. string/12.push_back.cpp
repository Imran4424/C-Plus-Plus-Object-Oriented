#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string status = "I Love to";

	status += ' ';

	status += 'p';

	status.push_back('l');
	status.push_back('a');
	status.push_back('y');
	status.push_back(' ');

	status += 'g';
	status += 'a';
	status.push_back('m');
	status.push_back('e');
	status.push_back('s');


	cout << "final string: " << status << endl;

	return 0;
}