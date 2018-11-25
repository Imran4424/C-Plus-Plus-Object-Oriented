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
	we are using ofstream to write files,

	first create a ofstream class object. for example,
						ofstream obj;

	then open a file using of ofstream class object,
							obj.open(filename.txt);

	here you can use any file i am using txt file for this example

	now, if the file is open then you can write to files using ofstream objects, follow following codes

		obj << "I am a Programmer" << endl;

		even the endline will be written to files


	and you can check if the file is open or not using is_open() function

	is_open() function returns true if the file is open, is_open() function returns false if the file stream
	is fails to open the file.
*/