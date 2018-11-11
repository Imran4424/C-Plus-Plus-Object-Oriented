#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string status = "I love to play";
	string job = "I creates games";

	cout << "Before append" << endl;

	cout << status << endl;
	cout << job << endl;

	status.append(job, 9, 6); // one extra for space

	
	cout << "........................" << endl << endl;
	cout << "After append" << endl;

	cout << status << endl;
	cout << job << endl;

	return 0;
}