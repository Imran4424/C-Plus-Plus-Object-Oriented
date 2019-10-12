#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 2049;

	int *ptr = &a;

	printf("size of int is: %d\n", sizeof(int));
	printf("Address = %d, value = %d \n", ptr, *ptr);
	printf("\n");

	char *cPtr;

	cPtr = (char*) ptr; // type casting int pointer to char pointer

	printf("size of char is: %d\n", sizeof(char));
	printf("Address = %d, value = %d \n", cPtr, *cPtr);
	printf("\n");

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

	when we store a address in a pointer variable, it always store first byte of 
	the address regradless of the type
	
	see the above code and it, you will see both will output the same byte of the
	address

	but when we dereferencing, pointer checks the type of the pointer,

	if it is char it lookup only first byte then represent value in char type which is
	stored in first byte

	if it is int type it lookup to total four bytes from the first byte then represent 
	the value in int type which is stored in total four bytes from first byte

	if it is double type it lookup to total eight bytes from the first byte then 
	represent the value in double type which is stored in total eight bytes from first 
	byte

	So, in dereferencing type is really important. That is why pointers are really strong
	type

	Now, one can ask, why we don't use same pointer variable to store addresses then
	typecast it just before dereferencing.

	For this question, I like say, yeah it's possible, and we a pointer this operation,
	this generic pointer is called void pointer

	we will talk about it later 
*/

	