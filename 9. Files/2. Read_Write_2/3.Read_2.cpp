#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main(int argc, char const *argv[])
{
	string fileName = "text.txt";

	fstream readFile;

	readFile.open(fileName, ios::in);

	string message;

	if (readFile.is_open())
	{
		string line;

		while(readFile)
		{
			getline(readFile, line);

			//cout << line << endl;

			message += line;

			message += '\n';
		}

		readFile.close();
	}
	else
	{
		cout << "can not open the file:" << fileName << endl;
	}

	cout << message << endl;

	return 0;
}