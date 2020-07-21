#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char word[15];

	word[0] = 'C';
	word[1] = 'o';
	word[2] = 'd';
	word[3] = 'e';

	// for C compilers this will give garbage output
	// for older C++ compilers this will give garbage output
	// but updated C++ compilers will give the content output
	cout << word;

	// here
	// this is a char array
	// but we are trying to print it like character string
	// that's why the garbage output will show

	cout << endl;


	return 0;
}