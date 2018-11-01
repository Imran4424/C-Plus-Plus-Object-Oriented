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