/*
	write a cpp program to demonstrate c++ assign() function with start and end index parameters
*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string status = "I love to play games";
	string command;

	command.assign(status, 2, status.size() - 1);

	cout<< status << endl;

	cout << command << endl;

	return 0;
}


/*

	for copying c++ string assign() function has another flavour

	with assign() function we can specify a range in which characters we want to copy in the copied string

	basic syntax :

	string text, cpText ;
	cpText.assign(text, start_index, end_index);

	here,

	start_index = starting index of the range in the copied string ( text )

	end_index = ending index of the range in the copied string ( text ) 

*/