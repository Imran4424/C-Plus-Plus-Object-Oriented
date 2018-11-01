/*
	Write a program that read an double number and display it
*/

#include <iostream> // for cin, cout
using namespace std;

int main(int argc, char const *argv[])
{
	double num;

	cin>> num;

	cout<<"The entered double number is: "<< num <<endl;

	return 0;
}
/*
	Unlike C++, it's default format precision for double will be depend on the input value

	if input value is 0 precision output will be 0 precision
	if input value is 1 precision output will be 1 precision
	if input value is 2 precision output will be 2 precision

	and so on
*/