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