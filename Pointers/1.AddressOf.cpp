/*
	In this code we will have a introduction of pointers

	mainly Address of operator

	basic programming knowledge required
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

	return 0;
}

/*
	As we know variable name is a piece of memory that holds a value (array is 
	collection of sequential of memories)

	memory size differs according to the data type

	char - 1 byte 
	int - 2 or 4 byte (depends on the compiler)
	float - 4 byte
	double - 8 byte

	https://docs.microsoft.com/en-us/cpp/cpp/fundamental-types-cpp?view=vs-2019

	In C, we saw how scanf() works

	scanf("%d", &price);

	here, price is a variable name, &price - indicating the address of price variable
	where we taking inputs

	here, & - is an operator, it is called address of (&) operator 

	which is used to access address of a variable 

*/