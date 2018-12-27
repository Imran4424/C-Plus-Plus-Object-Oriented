#include <iostream>
using namespace std;

class ChocolateBox
{
	private: int countChocolate;

	public: ChocolateBox()
	{
		countChocolate = 0;
	}

	public: ChocolateBox(int count)
	{
		countChocolate = count;
	}

	public: int GetChocolateCount()
	{
		return countChocolate;
	}

	public: ChocolateBox operator+(int value)
	{
		
	}
};