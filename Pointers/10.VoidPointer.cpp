#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 2049;

	void *ptr = &a;

	printf("size of int is: %d\n", sizeof(int));
	printf("Address = %d, value = %d \n", ptr, *((int*)ptr));

	// ptr + 1 deferencing will print some garbage value
	printf("Address = %d, value = %d \n", (int*)ptr + 1, *((int*)ptr + 1));
	printf("\n");

	 //         fourth    third   second    first
	// 2049 = 00000000 00000000 00001000 00000001


	printf("size of char is: %d\n", sizeof(char));
	printf("Address = %d, value = %d \n", ptr, *((char*)ptr));
	printf("Address = %d, value = %d \n", (char*)ptr + 1, *((char*)ptr + 1));
	printf("\n");

	 //         fourth    third   second    first
	// 2049 = 00000000 00000000 00001000 00000001

	return 0;
}

/*
	
	
*/

