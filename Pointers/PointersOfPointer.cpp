#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 15;

	int *ptr = &a; // ptr is a pointer variable
 
	int **ptrTwo = &ptr; // ptrTwo is a pointer of pointer

	printf("value of a is: %d\n", a);
	
	printf("Address of a is: %d\n", &a);
	
	printf("Value of ptr is: %d\n", ptr);
	
	printf("Address of ptr is: %d\n", &ptr);
	
	printf("Value of ptrTwo is: %d\n", ptrTwo);

	printf("single dereference of ptrTwo is: %d\n", *ptrTwo);
	printf("double dereference of ptrTwo is: %d\n", *(*ptrTwo));


	**ptrTwo = 500;

	printf("value of a is: %d\n", a);

	return 0;
}