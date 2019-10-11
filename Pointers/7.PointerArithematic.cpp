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

	cout << ptr << endl; 
	cout << ptr + 1 << endl; 

	cout << dec << ptr << endl; 
	cout << dec << ptr + 1 << endl; 

	
	return 0;
}