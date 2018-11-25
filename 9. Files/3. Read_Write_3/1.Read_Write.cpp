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

	file.open(fileName, ios::out);

	//file.open(fileName, fstream::out); // this line also works fine

	if (file.is_open())
	{
		file << "I am a Programmer" << endl;
		file << "I love to play" << endl;
		file << "I love to work game and software development" << endl;
		file << "My id is: " << 1510176113 << endl;

		file.close();
	}
	else
	{
		cout << "can not write the file: " << fileName << endl;
	}

	file.open(fileName, ios::in);

	// file.open(fileName, fstream::in); // this line also works fine

	if (file.is_open())
	{
		string line;

		while(file)
		{
			getline(file, line);

			cout << line << endl;
		}

		file.close();
	}
	else
	{
		cout << "can not read file: " << endl;
	}
	return 0;
}


/*
	we can use fstream to use for both file read an write operation

	we can also use both operation in the same code, we can also use ifstream and ofstream for this case

	for this scenario,

	if we want to write to file then, we have to open the file in "out" mode then, write to the file and 
	after finishing writing close the file

	if we to rea from file then, we have to open the file in "in" mode then, read from the file and after
	finishing reading close the file

	now, there's a question if we can open the file in both mode separately not closing any of them?

	that means,
			ofstream write;
			ifstream read;

			read.open("info.txt");
			write.open("info.txt");
	
	yeah this is valid but not recommended
*/