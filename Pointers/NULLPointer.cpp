#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	double *ptr {0}; // null pointer
	/*
		this is also valid
	
		double *ptr = 0;
	*/

	int *ptrTwo;
	ptrTwo = 0;

	int *ptrThree {NULL};

	/*
		this is also valid
	
		int *ptrThree = NULL;
	*/

	int *ptrFour;
	ptrFour = NULL;

	int *ptrFive { nullptr};

	/*
		this is also valid
	
		int *ptrFive = nullptr;
	*/

	int *ptrSix;
	ptrSix = nullptr;

	int *pointer = NULL;

	cout << pointer << endl;

	return 0;
}