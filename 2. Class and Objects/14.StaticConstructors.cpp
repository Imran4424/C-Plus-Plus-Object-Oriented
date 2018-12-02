/*
	wrtie a program to demonstrate static constructor in c++
*/


#include <iostream>
using namespace std;

class Box
{
	private: int length, width, height;

	public: static Box() // this line of code will give you error
	{
		length = 0;
		width = 0;
		height = 0;

		cout << "Static constructor" << endl;
	}
};

int main(int argc, char const *argv[])
{
	Box red;

	return 0;
}


/*
	static constructor is a common feature in a advanced programming language

	but unfortunately c++ doesn't provide it

	so, this code will end up in error
*/