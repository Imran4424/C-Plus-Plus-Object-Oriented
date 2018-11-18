#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main(int argc, char const *argv[])
{
	string fileName = "text.txt";

	fstream file;

	
	file.open(fileName, ios::in | ios::out | ios::trunc);

	if (file.is_open())
	{
		file << "I am a Programmer" << endl;
		file << "I love to play" << endl;
		file << "I love to work game and software development" << endl;
		file << "My id is: " << 1510176113 << endl;

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