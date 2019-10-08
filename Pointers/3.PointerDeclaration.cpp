/*
	In this code we will learn how do declare pointer variables
*/

#include <iostream>
#include <stdio.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int *ptr;
	return 0;
}


	* - now what is this
	* - is this dereference? No. Then, what is it?
	* - this time it is asterisk

	I know what you are feeling now. Cause same operator has three names

	* - multipication , binary
	* - dereference , unary
	* - asterisk , unary

	it can get confusing but we have no choice but to remember them and what they do
	if we want to work with C/C++

	* - multipication , binary , for multiply two numbers (integer or float)
	* - dereference , unary , for accessing value of a address
	* - asterisk , unary , for declaring a pointer value

	Now, let's talk about how to declare pointer variables

	To do this we need understand first what is pointer actually

	"Poiner is a special type of variable which holds another variables address"

	Yeah you heard that right, pointer is a variable not an address, pointer is a
	special kind of variable which holds other variable address

	now, one question arise which variable pointer variable will hold which address

	cause there are lots of types of variable, the numbers is limitless because of the
	feature of user define variable (class & structure)

	To minimize complexity, just think of the fundamental C/C++ variables (int, float,
	double, char)

	