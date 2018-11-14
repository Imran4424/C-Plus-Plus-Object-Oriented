#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string str = "a pin in a haystack pin";

	int pos = str.rfind("pin");

	if (pos >= 0)
	{
		cout << " found pin in position " << pos << endl;
	}
	else
	{
		cout << " no pin " << pos << endl;
	}

	str = "a pin in a haystack. pin is really small, so it's really hard to find a pin in haystack";

	if (pos >= 0)
	{
		cout << " found pin in position " << pos << endl;
	}
	else
	{
		cout << " no pin " << pos << endl;
	}


	return 0;
}