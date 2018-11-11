#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string first = "I love to";
	string play = "Play";

	string final = first + " " + play + " Games";

	string final2 = first + " Play " + "Games";

	cout<< "final string: " << final << endl;
	cout<< "final string: " << final2 << endl;

	return 0;
}