/*
	write a program to demonstrate file write using ofstream (output stream)
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main(int argc, char const *argv[])
{
	ofstream writeFile;

	string fileName = "text.txt";

	writeFile.open(fileName);

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

	is_open() function returns true if the file is open, is_open() function returns 
*/