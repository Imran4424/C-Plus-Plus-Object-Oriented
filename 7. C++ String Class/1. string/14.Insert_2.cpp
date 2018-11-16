/*
	write a cpp program to demonstrate insert(int index, string str, int start_index, int end_index) function 
	in c++ string
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string status = "I Play games";
	string element ="I love to do programming";

	status.insert(2, element, 2, 8);

	cout << "final string: " << status << endl;
	
	return 0;
}

/*
	with this version of insert() function, we can add a substring of the given string in the specific of the
	existing string

	here, first argument is the starting index where we want add the string
	      first argument can be either plain string or string class object

	      second argument is the string which we want to add

	      third argument is the start_index of the given string from where we want to add

	      fourth argument is the end_index of the given string till where we want to add

	this version of insert() function only adds string not character
*/