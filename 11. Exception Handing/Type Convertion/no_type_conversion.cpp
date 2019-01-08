/*
	In this code we are throwing a char 'a'

	but catching an int variable 

	but need to remember that catch block doesn't do auto type conversion

	So, the throw will be caught be default catch block
*/


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	try
	{
		throw 'x';
	}
	catch(int x)
	{
		cout<<"caught int x: " << x << endl;
	}
	catch(...)
	{
		cout<<"Deault catch block" << endl;
	}

	return 0;
}