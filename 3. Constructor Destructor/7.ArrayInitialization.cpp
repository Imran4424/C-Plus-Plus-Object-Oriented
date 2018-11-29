/*
	write a program to demonstrate Array Initialization
*/

#include <iostream>
using namespace std;


class Number
{
	private: const int m_array[5];

	public: Number(): m_array {} // initialize zero to the member array
	{
		// for assignment or other purposes we can use this block
	}

	public: void Display()
	{
		for(int i = 0; i < 5; i++)
		{
			printf("%d\n", m_array[i]);
		}
	}
};


int main(int argc, char const *argv[])
{
	Number obj;

	obj.Display();

	return 0;
}

/*
	initializing array is really easy in c++ object

	just use curly brackets instead of parenthesis in the member initializer list 

	leaving the curly bracket means initializing the whole array with 0
*/