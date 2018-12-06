#include <iostream>
using namespace std;


int Add(int x, int y)
{
	return x+y; // an anonymous object is created to hold and return the result of x + y
}


int main(int argc, char const *argv[])
{
	cout << Add(7, 5) << endl; // an anonymous object is created to hold the return value of Add and 
	                          //display it
	
	return 0;
}