#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	// char string
	char chText[20];

	// c++ string
	string text =  "I am a Programmer";

	// conversion from c++ string to char string
	// copy method parameters serially
	// 1 - char string pointer
	// 2 - string size, how many characters will b copied
	// 3 - position, from where character copy will start
	// this function does not append a null character at the end of operation
	text.copy(chText, text.size(), 0);

	// we need to put it manually
	chText[text.size()] = '\0';

	// below statement prints "I am a Programmer"
	cout << chText << endl;


	return 0;
}

/*
	In this code we will learn, 
	how we can easily convert char string to c++ string

*/