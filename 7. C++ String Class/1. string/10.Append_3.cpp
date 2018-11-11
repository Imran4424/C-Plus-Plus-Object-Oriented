#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string status = "I love to play";
	string job = "I creates games";

	status.append(job, 10, 5);
	
	return 0;
}