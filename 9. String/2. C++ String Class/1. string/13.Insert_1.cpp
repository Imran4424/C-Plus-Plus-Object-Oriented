/*
	write a cpp program to demonstrate insert(int index, string str) function in c++ string
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string status = "play";
	string job = "game";

	status.insert(0, "I ");
	status.insert(2, "love to ");

	cout << status << endl;

	//status += ' ';

	status.insert(status.size(), " ");

	status.insert(status.size(), job);

	cout << "final string : " << status << endl;

	return 0;
}
/*	
	with this version of insert() function, we can add a whole given string in the specific position of the 
	existing string 

	here, first argument is the starting index where we want add the string
	      first argument can be either plain string or string class object

	      second argument is the string which we want to add

	the following statement gives error

	status.insert(status.size(), ' ');

	because this version of insert() function only adds string not character
*/