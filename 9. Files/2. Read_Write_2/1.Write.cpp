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

/*
	so far we have been seen how to read and write files using ifstream ofstream objects

	as we know, ifstream and ofstream are both decendend from fstream class

	so, we can use fstream to use for both file read an write operation

	for write,

	first declare fstream object,
					fstream obj;
	
	then using fstream objects open the file in out mode that we want to write,
					
					obj.open("filename.txt", ios::out);

	here you can use any file i am using txt file for this example

	now, if the file is open then you can write to files using fstream objects, follow following codes

		obj << "I am a Programmer" << endl;

		even the endline will be written to files


	and you can check if the file is open or not using is_open() function

	is_open() function returns true if the file is open, is_open() function returns false if the file stream
	is fails to open the file.

	for good practice we need to always close the file after ending all operations on the file
*/