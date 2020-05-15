#include <iostream>
#include <stdio.h>

// declaring array pointer for 1D array
int *arr;

void initArray(int size) {
	// dynamically allocating 1D array
	arr = new int[size];
}

int main(int argc, char const *argv[])
{
	int size;
	scanf("%d", size);
	initArray(size);

	return 0;
}