#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 10;

	int *iPtr = &a;

	/*
		this way is also fine

		int *ptr;
		ptr = &a;
	*/

	printf("%d\n", iPtr);
	printf("size of integer is %d bytes\n", sizeof(int));
	printf("%d\n", iPtr + 1);


	char ch = 'X';

	char *cPtr;
	cPtr = &ch;

	printf("%d\n", cPtr);
	printf("size of char is: %d bytes\n", sizeof(char));
	printf("%d\n", cPtr + 1);


	double pi = 3.1416;

	double* dPtr = &pi;

	printf("%d\n", dPtr);
	printf("size of double is: %d bytes\n", sizeof(double));
	printf("%d\n", dPtr + 1);
	
	return 0;
}