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