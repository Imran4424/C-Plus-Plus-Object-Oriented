/*
	Write a program to demonstrate the I/O manipulators skipws, noskipws 
*/

#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	char nw,s;

	cin>> noskipws >> nw;

	cin>> skipws >> s;

	cout<<(int)nw<<endl;

	cout<<s<<" "<<(int)s<<endl;

	return 0;
}

/*
	skipws - skip all the whitespaces in the input stream like space enter

	noskipws - this is turn off the skipws from the input stream, in that case space and enter also count as input

	by default skipws is set for all compilers

	we have to set noskipws when we need it

	here, we used noskipws by enabling it first ny using noskipws in input steam

		then again we used  skipws enabling that by using skipws in input stream

	these are the memebers of iomanip headers

	sometimes we need to include the header like this,

										#include <iomanip>

	sometimes it work without including the header iomanip

	In update compilers don't need to include iomanip
*/