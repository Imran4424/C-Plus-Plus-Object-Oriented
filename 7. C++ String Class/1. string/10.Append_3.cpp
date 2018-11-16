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

	status += ' ';

	status.append(job, 9, 6); // one extra for space

	
	cout << "........................" << endl << endl;
	cout << "After append" << endl;

	cout << status << endl;
	cout << job << endl;

	return 0;
}

/*
	

*/