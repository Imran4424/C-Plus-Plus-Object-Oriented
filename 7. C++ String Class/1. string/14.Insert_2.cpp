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