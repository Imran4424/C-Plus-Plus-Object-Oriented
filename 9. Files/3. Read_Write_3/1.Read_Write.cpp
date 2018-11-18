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