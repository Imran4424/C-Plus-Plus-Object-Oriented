/*
	Write a program that read any float number and display it 
*/

#include <iostream> // for cin, cout
using namespace std;

int main(int argc, char const *argv[])
{
	float num;

	cin>> num;

	cout<<"The entered float number is: "<< num <<endl;

	return 0;
}
/*
	In C coding, we always have to remember format specifier for different data types

	Here, C++ gives us a very good simpliciy

	we don't have to remember format spceifier anymore for different types of varibale

	using cin we can take input any types of variable without knowing format specifier


	Unlike C++, it's default format precision for float will be depend on the input value

	if input value is 0 precision output will be 0 precision
	if input value is 1 precision output will be 1 precision
	if input value is 2 precision output will be 2 precision

	and so on
*/