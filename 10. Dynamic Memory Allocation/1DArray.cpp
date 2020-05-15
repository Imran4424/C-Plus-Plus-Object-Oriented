#include <iostream>
#include <stdio.h>

// declaring array pointer
int *arr;

void initArray(int size) {
	// d
	arr = new int[size];
}

int main(int argc, char const *argv[])
{
	int size;
	scanf("%d", size);
	initArray(size);

	return 0;
}