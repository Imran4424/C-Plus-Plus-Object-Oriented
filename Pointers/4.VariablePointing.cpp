/*
	In this code, we will learn how to operate on variable addresses using pointer

*/

#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int a, b;

	cout << "enter a and b" << endl;

	cin >> a >> b;

	int *ptr = &a;

	cout << "normal variable: " << a << endl;
	cout << "variable address: "<< &a << endl;

	cout << "pointer variable value: " << ptr << endl;
	cout << "pointer value holding value: " << *ptr << endl;
	cout << "pointer variable address: " << &ptr << endl; 


	/*
		this is called dereferencing
		ptr holds an address, if we dereference it, we can access the value which 
		is ptr value(address of a in this case) holding

	*/
	*ptr = 10;  

	return 0;
}