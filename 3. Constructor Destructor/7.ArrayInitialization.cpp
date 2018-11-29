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
	
	return 0;
}