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