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