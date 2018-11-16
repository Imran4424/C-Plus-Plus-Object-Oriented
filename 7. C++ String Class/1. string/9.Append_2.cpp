/*
	write a cpp program to demonstrate append() function to append c++ string
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string status = "I ";
	string job = "Programmer";


	status.append("am ");
	status.append("a ");
	status.append(job);

	cout << "Final string: " << status << endl;

	return 0;
}

/*


*/