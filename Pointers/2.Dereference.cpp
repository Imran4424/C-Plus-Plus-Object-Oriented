/*
	In this code we will learn dereference operator
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int price;

	// scanf("%d", &price);

	cin >> price;

	cout << "value of price is: " << price << endl;

	// this output will vary pc to pc
	cout << "address of price is: " << &price << endl;

	// dereferencing the address value
	cout << "address of price is: " << *(&price) << endl;

	return 0;
}

/*	
	* - dereference operator
	dereference operator allow us to access the value stored in a address (any address, 
	not particular one)

	dereference operator is a unary operator

	dereference operator make it easy for us to access value stored in any address
*/