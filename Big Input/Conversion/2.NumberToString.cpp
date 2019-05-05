#include <iostream>
#include <string> // for string and to_string()
using namespace std;

int main(int argc, char const *argv[])
{
	int num = 987654321;

	double PI = 3.1416;

	string intWord = to_string(num);

	string doubleWord = to_string(PI);

	cout << "Interger string form is: " << intWord << endl;

	cout << "Double string form is: " << doubleWord << endl;

	return 0;
}