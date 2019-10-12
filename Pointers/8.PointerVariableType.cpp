#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 2048;

	int *ptr = &a;

	printf("size of int is: %d\n", sizeof(int));
	printf("Address = %d, value = %d \n", ptr, *ptr);

	return 0;
}

/*
	Pointer variables are strong type

	why pointer variables are strong type? cause it only storing variable address
	why not generic type?

	we do not use pointer variables only to store memory addresses but we also use them
	to dereference these addresses so that we can access and modify values in this
	addresses.
	And not only different data type sizes are different but also their value
	representation is also different.
*/