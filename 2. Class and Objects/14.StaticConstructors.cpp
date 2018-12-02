/*
	wrtie a program to demonstrate static constructor in c++
*/


#include <iostream>
using namespace std;

class Box
{
	private: int length, width, height;

	public: static Box()
	{
		length = 0;
		width = 0;
		height = 0;

		cout << "Static constructor" << endl;
	}
};