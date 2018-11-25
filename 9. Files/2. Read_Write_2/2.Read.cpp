/*
	write a program to demonstrate file write using fstream (file stream)
*/

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
		string line;

		while(readFile)
		{
			getline(readFile, line);

			cout << line << endl;
		}

		readFile.close();
	}
	else
	{
		cout << "can not open the file:" << fileName << endl;
	}

	return 0;
}