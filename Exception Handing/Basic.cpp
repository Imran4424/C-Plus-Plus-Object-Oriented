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
		else
		{
			cout<<"Mom's Age: "<<momAge<<endl;
			cout<<"Son's Age: "<<sonAge<<endl;
		}

	}
	catch(int error)
	{
		
	}


	return 0;
}