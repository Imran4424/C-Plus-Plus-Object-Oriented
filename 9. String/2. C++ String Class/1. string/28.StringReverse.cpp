#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	string str = "Imran";

	cout << "Given string: " << str << endl;
	reverse(str.begin(), str.end());
	cout << "Reverse string: " << str << endl;


	return 0;
}
