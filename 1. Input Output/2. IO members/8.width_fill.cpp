/*
	Write a program to demonstrate ios width and fill
*/

#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	cout.width(25);
	cout<<"I am a Programmer"<<endl;
	
	cout.width(25);
	cout.fill('.');
	cout<<"I am a Programmer"<<endl;

	cout.width(25);
	cout.fill('.');
	cout.setf(ios::left);
	cout<<"I am a Programmer"<<endl;

	cout<<"I am a Programmer"<<endl;

	return 0;
}

/*
	cout.width(int)

	width occupied given number of character space for next next imediate output statement

	cout.fill('.')

	fill fills remaining unused character of occupied by width with a the given character

	by default the width alligment is right

	but we can change it to left using the following statement,
																cout.setf(ios::left);


	width and fill only works on imediate output statement
*/