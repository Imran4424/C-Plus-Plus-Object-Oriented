#include <iostream>
using namespace std;

int Add(int x, int y)
{
	return x + y;
}

int main(int argc, char const *argv[])
{
	cout << Add(7, 12) << endl;

	//declaring function pointer

	int (*any)();  // it's a function pointer who points the type of function who take no parameters and
	              // return int

	//declaring function pointer

	int (*const imran)();  // it's a const function pointer who points the type of function who take no  
	                      //parameters and return int

	return 0;
}