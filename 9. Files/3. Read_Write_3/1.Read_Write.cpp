#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main(int argc, char const *argv[])
{
	string fileName = "text.txt";

	fstream file;

	file.open(fileName, ios::out);

	if (file.is_open())
	{
		/* code */
	}
	return 0;
}