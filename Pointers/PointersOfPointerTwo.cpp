#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 15;

	int *ptr = &a; // ptr is a pointer variable
 
	int **ptrTwo = &ptr; // ptrTwo is a pointer of pointer

	int ***ptrThree; // ptrThree is poiner of (pointer of pointer)
	ptrThree = &ptrTwo;

	printf("value of a is: %d\n", a);
	
	printf("Address of a is: %d\n", &a);
	
	printf("Value of ptr is: %d\n", ptr);
	
	printf("Address of ptr is: %d\n", &ptr);
	
	printf("Value of ptrTwo is: %d\n", ptrTwo);

	printf("Address of ptrTwo is: %d\n", &ptrTwo);
	
	printf("Value of ptrThree is: %d\n", ptrTwo);


	printf("single dereference of ptrThree is: %d\n", *ptrThree);
	printf("double dereference of ptrThree is: %d\n", *(*ptrThree));
	printf("tripple dereference of ptrThree is: %d\n", *(*(*ptrThree)));


	***ptrThree = 500;

	printf("value of a is: %d\n", a);

	return 0;
}