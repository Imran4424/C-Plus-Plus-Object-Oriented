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
	with this favour of append() function we can add specific characters multiple times
*/