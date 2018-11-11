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
	status.insert(status.size(), " ");
*/