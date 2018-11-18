#include <iostream>
#include <string>
#include <fstream>


int main(int argc, char const *argv[])
{
	string fileName = "text.txt";

	ifstream readFile;

	readFile.open(fileName);

	if (readFile.is_open())
	{
		/* code */
	}
	return 0;
}