/*
	Write a program that read and display a line of text
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char text[100];

	cin.getline(text,sizeof(text));

	cout<<text<<endl;

	return 0;
}

/*
	cin can not read string with white spaces

	so for reading char string with white spaces we need to use cin.getline()

	basic syntax:

				cin.getline(str, sizeof(str),'\n');

				or we can also write

				cin.getline(str, sizeof(str)); // in this case ending character is  default '\n' - new line character

				Here, str is char string
					'\n' - string ending character (new line character)
*/