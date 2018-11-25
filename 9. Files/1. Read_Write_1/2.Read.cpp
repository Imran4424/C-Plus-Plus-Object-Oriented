/*
	write a program to demonstrate file read using ifstream (input stream)
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main(int argc, char const *argv[])
{
	string fileName = "text.txt";

	ifstream readFile;

	readFile.open(fileName);

	if (readFile.is_open())
	{
		string line;

		getline(readFile, line);

		cout << line << endl;

		readFile.close();
	}
	else
	{
		cout << "can not open the file: " << fileName << endl;
	}

	return 0;
}

/*
	in c++ files are handled with fstream(file stream) classes

	fstream has two sub-classes ifstream(input stream) to read files and ofstream(output stream) to write 
	files

	here,
	we are using ifstream to read files,

	first create a ifstream class object. for example,
						ifstream obj;

	then open a file using of ifstream class object,
							obj.open("filename.txt");

	here you can use any file, I am using txt file for this example

	now, if the file is open then you can read from files using ifstream objects, follow following codes

		string line;

		getline(obj, line);
	
	one problem with getline, by default it reads from file untill it gets a new line character and once it
	gets new line character it stops reading

	and you can check if the file is open or not using is_open() function

	is_open() function returns true if the file is open, is_open() function returns false if the file stream
	is fails to open the file.

	for good practice we need to always close the file after ending all operations on the file
*/