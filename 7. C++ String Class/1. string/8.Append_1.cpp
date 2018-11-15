#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string status = "I ";
	string job = "games";

	status += "Love to ";

	status += "play ";

	status += job;

	cout << "Full string: " << status << endl;

	return 0;
}

/*
	Basic input stream cin can be used for c++ string input

	but, cin only takes those string that does not include white spaces

	for examle, we will give following string as input

	Football is a very popular game

	we will get,
	Football

	the characters after whitespace will be ignored 
*/