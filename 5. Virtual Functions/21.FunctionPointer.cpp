#include <iostream>
using namespace std;

int Add(int x, int y)
{
	return x + y;
}

int temp()
{
	return 7;
}

int main(int argc, char const *argv[])
{
	cout << Add(7, 12) << endl;

	//declaring function pointer

	int (*any)();  // it's a function pointer who points the type of function who take no parameters and
	              // return int

	//declaring function pointer

	int (*const imran)() = temp;  // it's a const function pointer who points the type of function who take no  
	                             // parameters and return int
				    // since it is a const function pointer so it is need to be initialized
	                           //  at the moment of declaration


	// function calling through pointer

	cout << "calling function pointer returned : " << (*imran)() << endl;


	cout << "calling function pointer returned : " << imran() << endl; // calling like simple function
								  // it only support modern compilers 


/*
	now calling add function will require new function pointer 

	because function Add() is different type function other than the declared funtion pointers
	above
*/	

	int (*sakib)(int, int) = Add; // notice, no parenthesis is needed

	cout << "calling function pointer returned : " << sakib(15, 10) << endl; 

	return 0;
}