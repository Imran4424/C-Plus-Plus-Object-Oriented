/*
	write a program to demonstrate I/O manipulators fixed, scientific 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	double a = 1234.0, b = 123.34;

	cout<<"Default"<<endl;
	cout<< a <<" "<< b <<endl;
	
	cout<<"Fixed"<<endl;
	cout<< fixed << a <<" "<< b <<endl;

	cout<<"Scientific"<<endl;
	cout<< scientific << a <<" "<<endl;

	return 0;
}

/*
	
*/