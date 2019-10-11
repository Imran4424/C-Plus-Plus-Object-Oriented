#include <iostream>
#include <stdio.h>
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

	// cout << dec << ptr << endl; 
	// cout << dec << ptr + 1 << endl; 

	printf("%d\n", ptr);
	printf("%d\n", ptr + 1);
	
	return 0;
}