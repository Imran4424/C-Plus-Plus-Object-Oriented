/*
	write a program to demonstrate file read and write using fstream in a same file
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main(int argc, char const *argv[])
{
	string fileName = "text.txt";

	fstream file;

	//file.open(fileName, fstream::in | fstream::out); 

	// this statement only works if there is a existing file

	file.open(fileName, fstream::in | fstream::out | fstream::trunc); 
	
	//file.open(fileName, ios::in | ios::out | ios::trunc); // this works too

	if (file.is_open())
	{
		file << "I am a Programmer" << endl;
		file << "I love to play" << endl;
		file << "I love to work game and software development" << endl;
		file << "My id is: " << 1510176113 << endl;


		//for saving a file without closig

		file.flush();

		// before read the file

		file.seekg(0);
	}
	else
	{
		cout << "can not open the file: " << fileName << endl;
	}

	if (file.is_open())
	{
		string line;

		while(file)
		{
			getline(file, line);

			cout << line << endl;
		}
	}
	else
	{
		cout << "can not read file: " << fileName << endl;
	}

	file.close();

	return 0;
}