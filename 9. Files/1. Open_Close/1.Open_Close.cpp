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
		/* code */
	}
	else
	{
		cout << "Could not create file:" << fileName << endl;
	}

	return 0;
}