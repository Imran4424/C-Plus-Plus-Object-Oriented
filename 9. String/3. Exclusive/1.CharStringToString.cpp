#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	// char string
	char chText[20] = "I am a Programmer";

	// c++ string
	string text;


	// convertion from char string to c++ string using operator overloading
	text = chText;

	cout << text << endl;

	return 0;
}

/*
	In this code we will learn, how we can easily convert char string to c++ string

*/