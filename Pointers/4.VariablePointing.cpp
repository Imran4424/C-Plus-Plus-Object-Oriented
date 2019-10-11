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

	return 0;
}