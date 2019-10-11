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
	printf("%d\n", iPtr + 1);
	
	return 0;
}