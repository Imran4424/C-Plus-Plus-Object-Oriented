/*
	write a program to demonstrate file write using fstream (file stream)
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main(int argc, char const *argv[])
{
	fstream writeFile;

	string fileName = "text.txt";

	writeFile.open(fileName, ios::out);

	if (writeFile.is_open())
	{
		writeFile << "I am a Programmer" << endl;
		writeFile << "I love to play" << endl;
		writeFile << "I love to work game and software development" << endl;
		writeFile << "My id is: " << 1510176113 << endl;

		writeFile.close();
	}
	else
	{
		cout << "Can not create file:" << fileName << endl;
	}

	return 0;
}