/*
	Write a program that manipulate getline properties
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char text[100];

	cin.getline(text, sizeof(text)); //default string ending character '\n'

	cout<<"Defalt: "<< text << endl;

	cin.getline(text, sizeof(text), '\n') //string ending character '\n'

	cout<<"Sting ending character '\n': "<< text << endl;

	cin.getline(text, sizeof(text), '.') //string ending character '.'

	cout<<"Sting ending character '.': "<< text << endl;

	return 0;
}

/*
	cin can not read string with white spaces

	so for reading char string with white spaces we need to use cin.getline()

	basic syntax:

				cin.getline(str, sizeof(str),'\n');


	we can manipulate getline the string ending character property by changing the string ending character

	for example:
				cin.getline(str, sizeof(str),'\n'); // new line
				
				cin.getline(str, sizeof(str),'.');  // full stop

				cin.getline(str, sizeof(str),',');  // comma
				
				cin.getline(str, sizeof(str),';');  // semi-colon
*/