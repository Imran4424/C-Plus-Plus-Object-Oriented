/*
	write a cpp program to demonstrate getline as string input stream
*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string str;

	getline(cin, str);

	cout<< "input string is: "<< str <<endl;
	
	return 0;
}


/*
	getline is a kind of input stream which can take both strings including and excluding white spaces

	basic syntax:

	string object ;
	getline(cin, object);

	now, if we give input the previous string

	Football is a very popular game

	we will get the exact string output:

	Football is a very popular game
*/