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
		countChocolate = count
	}

	public: int GetChocolateCount()
	{
		return countChocolate;
	}

	friend operator+(const ChocolateBox &kitkat, const ChocolateBox &fiveStar);
};

int main(int argc, char const *argv[])
{
	
	return 0;
}