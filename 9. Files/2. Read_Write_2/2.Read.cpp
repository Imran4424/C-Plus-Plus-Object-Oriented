#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main(int argc, char const *argv[])
{
	string fileName = "text.txt";

	fstream readFile;

	readFile.open(fileName, ios::in);

	if (readFile.is_open())
	{
		
	}

	return 0;
}