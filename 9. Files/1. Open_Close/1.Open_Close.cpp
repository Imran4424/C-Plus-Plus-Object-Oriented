#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, char const *argv[])
{
	ofstream writeFile;

	string fileName = "text.txt";

	writeFile.open(fileName);	


	return 0;
}