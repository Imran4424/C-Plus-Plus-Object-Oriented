/*
	write a cpp program to demonstrate push_back() in c++ string
*/

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

/*
	In the Append_1.cpp program we saw that,

		"+=" operator can append characters at the end of existing string

		string text;

		text += 'I';
		text += ' ';
		text += 'a';
		text += 'm';


		this same thing can be done using push_back() function

		text.push_back('I');
		text.push_back(' ');
		text.push_back('a');
		text.push_back('m');


		push_back() only appends characters at the end
*/