#include <iostream>
#include <stdio.h>

// declaring array pointer for 1D array
int *arr;

void initArray(int size) {
	// dynamically allocating 1D array
	arr = new int[size];
}

void populateArray(int size) {
	for(int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
}

void displayArray(int size) {
	for(int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
}

int main(int argc, char const *argv[])
{
	int size;
	scanf("%d", &size);
	
	initArray(size);
	populateArray(size);
	displayArray(size);

	return 0;
}