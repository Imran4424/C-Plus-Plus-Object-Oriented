#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, char const *argv[])
{
	ofstream writeFile;

	string fileName = "text.txt";

	writeFile.open(fileName);

	if (writeFile.is_open())
	{
		writeFile << "I am a Programmer" << endl;
		writeFile << "I love to play" << endl;
		writeFile << "I love to work game and software development" << endl;
	}
	else
	{
		cout << "Could not create file:" << fileName << endl;
	}

	return 0;
}