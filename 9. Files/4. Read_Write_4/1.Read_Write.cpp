/*
	write a program to demonstrate file read and write using fstream in a same file and how to open the file
	in both read and write mode
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


/*
	for opening a file for both read and write mode, follow the following code,

		fstream file;
		file.open("info.txt", ios::in | ios::out);

	but this statement only works if the file there is a existing file named info.txt otherwise it will give
	error

	to solve this problem we can use following codes

		file.open("info.txt", ios::in | ios::out | ios::trunc);

	this will work for most cases

	now, another problem appears when we try to read the file after writing without closing, actually the
	file returns nothing

	this happen because after writing the file pointer is at the end of file, so, whenever we try to read
	it returns nothing

	to solve the we can move the pointer at the beginning by using the following code,

		file.seekg(0);
*/