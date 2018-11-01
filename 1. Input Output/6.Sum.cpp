/*
	Read two integer number print the addition
*/

#include <iostream> // for cin and cout
using namespace std;


int main(int argc, char const *argv[])
{
	int a,b;

	cin>> a >> b;

	int sum = a+b;

	cout<<"The sum of "<< a <<" and "<< b <<" is: "<< sum <<endl;

	return 0;
}
/*
	cin is the standard input stream for c++

	cout is the standard output stream for c++

	iostream holds cin cout

	And

	cin, cout is also member of std namespace
*/