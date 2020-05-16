#include <iostream>
#include <stdio.h>
using namespace std;

// declaring pointer of pointer for 2D Array
int **grid;
int row, col;

// dynamically allocating 2D Array
void initGrid() {
	// dynamically allocating rows
	grid = new int*[row];

	// dynamically allocating columns
	for(int i = 0; i < row; i++) {
		grid[i] = new int[col];
	}
}

void populateGrid() {
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			cin >> grid[i][j];
		}
	}
}

void displayGrid() {
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			cout << grid[i][j] << " ";
		}

		cout << endl;
	}
}

int main(int argc, char const *argv[])
{
	row = 3;
	col = 4;

	initGrid();
	populateGrid();
	displayGrid();

	return 0;
}