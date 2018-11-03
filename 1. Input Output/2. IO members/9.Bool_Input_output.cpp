/*
	Write a program to demonstrate boolean Input and output
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	bool status;

	cin.setf(ios::boolalpha); 
	cin>>status;

	cout.setf(ios::boolalpha);
	cout<<status<<endl;

	return 0;
}

/*
	cin.setf(ios::boolalpha); 

	for setting boolean input to true,false instead of 1,0

	cout.setf(ios::boolalpha);
	
	for setting boolean output to true,false instead of 1,0
*/