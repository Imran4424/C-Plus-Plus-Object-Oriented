/*
	
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