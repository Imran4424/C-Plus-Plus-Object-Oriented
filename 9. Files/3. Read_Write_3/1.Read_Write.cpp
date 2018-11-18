#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main(int argc, char const *argv[])
{
	string fileName = "text.txt";

	fstream file;

	file.open(fileName, ios::out);

	if (file.is_open())
	{
		writeFile << "I am a Programmer" << endl;
		writeFile << "I love to play" << endl;
		writeFile << "I love to work game and software development" << endl;
		writeFile << "My id is: " << 1510176113 << endl;

		writeFile.close();
	}
	else
	{
		cout << "can not write the file: " << fileName << endl;
	}

	file.open(fileName, ios::in);

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
		
	}
	return 0;
}