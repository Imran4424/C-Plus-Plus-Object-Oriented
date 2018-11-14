#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string str = "a needle in a haystack";

	int pos = str.find("needle");

	if (pos >= 0)
	{
		cout << "found needle at position" << pos << endl;
	}
	else
	{
		cout << " no needle " << pos << endl;
	}
	return 0;
}