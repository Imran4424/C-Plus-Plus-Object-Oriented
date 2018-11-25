/*
	write a program to demonstrate how to read whole file using ifstream (input stream)
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

		while(!readFile.eof())
		{
			getline(readFile, line);

			cout << line << endl;			
		}


		readFile.close();
	}
	else
	{
		cout << "can not open the file: " << fileName << endl;
	}

	return 0;
}


/*
	As we said one problem with getline is it stops reading from file whenever it gets endline character

	we can solve this problem using a loop 

		string line;

		getline(obj, line);
	
	one problem with getline, by default it reads from file untill it gets a new line character and once it
	gets new line character it stops reading

	and you can check if the file is open or not using is_open() function

	is_open() function returns true if the file is open, is_open() function returns false if the file stream
	is fails to open the file.

	for good practice we need to always close the file after ending all operations on the file
*/