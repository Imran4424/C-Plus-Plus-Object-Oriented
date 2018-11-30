/*
	write a cpp program to demonstrate append(int size, char ch) function in c++
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string gibrish = "aa";

	gibrish.append( 2, 'b');

	gibrish.append( 4, 'c');

	gibrish.append( 2, 'd');

	gibrish.append( 3, 'e');


	cout << "final string: " << gibrish << endl;

	return 0;
}

/*
	with this version of append() function we can add specific characters multiple times at the end of existing 
	string

	here, first argument is the size, how many times we want to append the character

	      second argument is the character which we want to append
*/