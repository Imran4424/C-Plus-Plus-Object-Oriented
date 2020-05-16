#include <iostream>
#include <stdio.h>
using namespace std;

// declaring pointer of pointer for 2D Array
int **grid;
int row, col;

// initializing 2D Array
void initGrid(int row, int col) {
	grid = new int*[row];

	for(int i = 0; i < row; i++) {
		grid[i] = new int[col];
	}
}

int main(int argc, char const *argv[])
{
	row = 3;
	col = 4;

	return 0;
}