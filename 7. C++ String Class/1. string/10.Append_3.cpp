/*
	write a cpp program to demonstrate append(string str, int start_index, int size) function in c++
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string status = "I love to play";
	string job = "I create games";

	cout << endl << "Before append" << endl << endl;

	cout << status << endl;
	cout << job << endl;

	//status += ' ';

	status.append(job, 8, 6); // one extra for space

	status.append(". OK that's good. I like to create games", 0, 17);
	
	cout << "........................" << endl << endl;
	cout << "After append" << endl;

	cout << status << endl;
	cout << job << endl;

	return 0;
}

/*
	With this version of append() function we can add substrigs at the end of the existing string

	here, first argument is that string from where we want to add substring
	      first argument can be plain string or c++ string class object

	      second argument is the starting index of first argument string, it's a int variable

	      third argument is the size, which determines ending index
*/