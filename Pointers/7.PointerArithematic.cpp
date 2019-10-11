#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 10;

	int *ptr = &a;

	/*
		this way is also fine

		int *ptr;
		ptr = &a;
	*/

	cout << a << endl; 
	cout << a + 1 << endl; 

	cout << dec << a << endl; 
	cout << dec << a + 1 << endl; 

	
	return 0;
}