#include <iostream>
#include <string>
#include <fstream>


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

		cout << line << "---" << population << endl;
	}

	readFile.close();

	return 0;
}