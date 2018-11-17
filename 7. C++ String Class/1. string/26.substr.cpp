/*
	write a cpp program to demonstrate c++ string substr(int start_index, int size) function
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string text = "I love to play games";

	cout << "Full string: " << text << endl;

	string sub_string = text.substr(2,4);

	cout << "Substring: " << sub_string << endl;

	return 0;
}

/*
	with this version of substr() we can extract substring from a string from any position or range

	here, first argument start_index is the starting position from where we are going to extract substring

	      second argument size is going to determine from start till where we are going to extract substring.
	      in other words size will determine the the ending of the substring.
	      we can also call this size substring size.
*/