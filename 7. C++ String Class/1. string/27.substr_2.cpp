/*
	write a cpp program to demonstrate c++ string substr(int start_index) function
*/


#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string text = "I love to play games";

	cout << "Full string: " << text << endl;

	int pos = text.find("play");

	string sub_string = text.substr(pos);

	cout << "Substring: " << sub_string << endl;

	return 0;
}

/*
	with this version of substr() we can extract substrings from a given string from a specific position to the 
	string end

	here, only argument start_index is to determine from where we are going to extract substring

	from start_index position till the end of the string we are going to extract substring from the given string
*/