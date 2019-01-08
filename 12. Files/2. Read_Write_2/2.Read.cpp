/*
	write a program to demonstrate file read using fstream (file stream)
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


/*
	so far we have been seen how to read and write files using ifstream ofstream objects

	as we know, ifstream and ofstream are both decendend from fstream class

	so, we can use fstream to use for both file read an write operation

	for read,

	first declare fstream object,
					fstream obj;
	
	then using fstream objects open the file in "in" mode that we want to write,
					
					obj.open("filename.txt", ios::in);

	here you can use any file, I am using txt file for this example

	now, if the file is open then you can read from files using fstream objects, follow following codes

		if (readFile.is_open())
		{
			string line;

			while(readFile)
			{
				getline(readFile, line);

				cout << line << endl;			
			}
		}

		even the endline will be written to files


	and you can check if the file is open or not using is_open() function

	is_open() function returns true if the file is open, is_open() function returns false if the file stream
	is fails to open the file.

	for good practice we need to always close the file after ending all operations on the file
*/