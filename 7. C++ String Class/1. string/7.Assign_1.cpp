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