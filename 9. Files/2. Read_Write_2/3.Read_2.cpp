/*
	write a program to demonstrate file read using fstream (file stream) and print them using a single
	non-loop statement
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

	string message;

	if (readFile.is_open())
	{
		string line;

		while(readFile)
		{
			getline(readFile, line);

			message += line;

			message += '\n';
		}

		readFile.close();
	}
	else
	{
		cout << "can not open the file:" << fileName << endl;
	}

	cout << message << endl;

	return 0;
}


/*
	so far, we are reading a file to a sting in a loop manner and print it right away

	in this scenario,  
*/