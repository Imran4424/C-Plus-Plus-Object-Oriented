/*
	write a cpp program to demonstrate c++ string substr(int start_index, size) function
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