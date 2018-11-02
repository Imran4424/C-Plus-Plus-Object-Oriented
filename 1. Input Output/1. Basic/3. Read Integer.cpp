/*
	Write a program that read a integer number and display it
*/

#include <iostream> // for cin, cout
using namespace std;

int main(int argc, char const *argv[])
{
	int num;

	 cin>>num;

	 cout<<"The entered int number is: "<<num<<endl;

	return 0;
}

/*
	In C++,

		cin  : for input stream
		cout : for output stream

	In C coding, we always have to remember format specifier for different data types

	Here, C++ gives us a very good simpliciy

	we don't have to remember format spceifier anymore for different types of varibale

	using cin we can take input any types of variable without knowing format specifier
*/