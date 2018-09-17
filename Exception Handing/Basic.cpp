/*
	In this code we will learn about try catch block
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int momAge, sonAge;

	try
	{
		cout<<"Input Mom's age and Son's age respectively"<<endl;

		cin>>momAge>>sonAge;

		if (momAge < sonAge)
		{
			throw 99;
		}

	}


	return 0;
}