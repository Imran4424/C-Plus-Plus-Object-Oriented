/*
	write a cpp program to demonstrate how to append string in c++
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string status = "I ";
	string job = "games";

	status += "Love to"; // as plain string 

	status += ' '; // as character

	status += "play ";

	status += job; // as string class object

	cout << "Full string: " << status << endl;

	return 0;
}

/*
	to append c+ string

	we can simply use "+=" operator

	using "+=" operator we can append strings as well as characters at the end of existing string.

	"+=" operator only appends at the end
*/