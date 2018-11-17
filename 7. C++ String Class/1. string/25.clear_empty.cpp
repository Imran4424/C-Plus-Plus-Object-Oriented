/*
	write a cpp program to demonstrate c++ string clear() and empty() function
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string text = "I am a Programmer";

	cout<< "Current string: " << text << endl;

	cout << "Is the string empty? " ;

	if (text.empty())
	{
	 	cout << "Yes" << endl; 
	} 
	else
	{
		cout << "No" << endl;
	}

	text.clear();

	cout << "string cleared" << endl;

	cout << "Is the string empty? " ;

	if (text.empty())
	{
	 	cout << "Yes" << endl; 
	} 
	else
	{
		cout << "No" << endl;
	}

	return 0;
}

/*
	clear() - delete all characters in a string

	empty() - return 1 if the string is empty
	          return 0 if the string is no empty
*/