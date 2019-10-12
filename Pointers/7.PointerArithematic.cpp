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

	printf("\n");

	char ch = 'X';

	char *cPtr;
	cPtr = &ch;

	printf("%d\n", cPtr);
	printf("size of char is: %d bytes\n", sizeof(char));
	printf("%d\n", cPtr + 1);

	printf("\n");

	double pi = 3.1416;

	double* dPtr = &pi;

	printf("%d\n", dPtr);
	printf("size of double is: %d bytes\n", sizeof(double));
	printf("%d\n", dPtr + 1);
	
	return 0;
}

/*
	Pointer variables are strong type

	why pointer variables are strong type? cause it only storing variable address
*/