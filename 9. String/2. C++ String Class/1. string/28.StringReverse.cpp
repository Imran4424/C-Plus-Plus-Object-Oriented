#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	string str = "Imran";

	cout << str << endl;
	reverse(str.begin(), str.end());
	cout << str << endl;


	return 0;
}



