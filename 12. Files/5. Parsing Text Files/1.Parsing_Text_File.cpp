/*
	write a cpp program to demonstrate how to parse a text file using c++ fstream
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

	if (!readFile.is_open())
	{
		return 1;
	}

	while(readFile)
	{
		string line;

		getline(readFile, line, ':');

		int population;
		readFile >> population;

		readFile >> ws; // for skipping white spaces

		if (!readFile)  // double checking if the file is empty
		{
			break;
		}

		cout << line << "---" << population << endl;
	}

	readFile.close();

	return 0;
}

/*
	for file parsing, c++ gives very little support but we can do it by c++ fstream

	In this code we are parsing text file to int data type line by line

	for this, we are reading text till ':' in one line using the following statement

		getline(readFile, line, ':');


	text to int parsing is happening using the following statement

		int population;
		readFile >> population;

		
	but there is problem, when we again reading the file after one text to int parsing

	there is a newline nonprintable character calls white space which is treated as another line

	because, our getline ending character is ':' 

		getline(readFile, line, ':');

	so we have to skip white spaces, we can do it in c++11 by simply using the following statement
		
		readFile >> ws;


	in the while loop, we are extracting content till ':' and after ':' we are parsing text to int but that
	                   does not move the file pointer till the end or till the whitespace character

	                   so for the last iteration we can have garbage output because the loop will try to read
	                   the last line which does not exist but only white spaces

	                   and we are checking if the file is empty or not for once in the while loop condition

	                   that can easily make the error happen

	for fixing that problem we can simply use the following statement after parsing text to int or getline
	statement,

		if (!readFile) 
		{
			break;
		}

	it will break the while loop if readFile is empty
*/