#include <iostream>
using namespace std;

int Add(int x, int y)
{
	return x + y;
}

int temp()
{
	return 7;
}

int main(int argc, char const *argv[])
{
	cout << Add(7, 12) << endl;

	//declaring function pointer

	int (*any)();  // it's a function pointer who points the type of function who take no parameters and
	              // return int

	//declaring function pointer

	int (*const imran)() = temp;  // it's a const function pointer who points the type of function who take no  
	                      //parameters and return int


	// function calling through pointer

	cout << "calling function returned : " << (*imran)() << endl; 

	return 0;
}