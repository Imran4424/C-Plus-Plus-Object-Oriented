/*
	In this code, we will learn how to operate on variable addresses using pointer

*/

#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	double a, b;

	cout << "enter a and b" << endl;

	cin >> a >> b;

	double *ptr = &a;

	cout << "normal variable a: " << a << endl;
	cout << "variable address of a: "<< &a << endl;

	cout << "normal variable b: " << b << endl;
	cout << "variable address of b: "<< &b << endl;

	cout << "pointer variable value: " << ptr << endl;
	cout << "pointer value(address) holding  value: " << *ptr << endl;
	//this one will always stay same
	cout << "pointer variable address: " << &ptr << endl << endl;


	/*
		this is called dereferencing
		ptr holds an address, if we dereference it, we can access the value which is
		pointer value(address) holding

	*/
	*ptr = 3.1416;  // changing value of ptr's value's(address) value

	cout << "normal variable a: " << a << endl;
	cout << "variable address of a: "<< &a << endl;

	cout << "normal variable b: " << b << endl;
	cout << "variable address of b: "<< &b << endl;

	cout << "pointer variable value: " << ptr << endl;
	cout << "pointer value(address) holding  value: " << *ptr << endl;
	//this one will always stay same
	cout << "pointer variable address: " << &ptr << endl << endl;

	ptr = &b;

	cout << "normal variable a: " << a << endl;
	cout << "variable address of a: "<< &a << endl;

	cout << "normal variable b: " << b << endl;
	cout << "variable address of b: "<< &b << endl;

	cout << "pointer variable value: " << ptr << endl;
	cout << "pointer value(address) holding  value: " << *ptr << endl;
	//this one will always stay same
	cout << "pointer variable address: " << &ptr << endl << endl;

	*ptr = 12.2496; // changing value of ptr's value's(address) value

	cout << "normal variable a: " << a << endl;
	cout << "variable address of a: "<< &a << endl;

	cout << "normal variable b: " << b << endl;
	cout << "variable address of b: "<< &b << endl;

	cout << "pointer variable value: " << ptr << endl;
	cout << "pointer value(address) holding  value: " << *ptr << endl;
	//this one will always stay same
	cout << "pointer variable address: " << &ptr << endl << endl;

	return 0;
}