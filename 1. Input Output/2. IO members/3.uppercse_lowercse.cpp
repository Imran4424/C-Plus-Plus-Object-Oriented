/*
	Write a program to explore ios::uppercse and ios::lowercase properties
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char text;

	cin.getline(text, sizeof(text));

	cout<<text<<endl;

	//setting uppercase

	cout.setf(ios::uppercase);

	cout<<text<<endl;

	return 0;
}