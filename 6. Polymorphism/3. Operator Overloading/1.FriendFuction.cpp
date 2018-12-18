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

	friend ChocolateBox operator+(const ChocolateBox &kitkat, const ChocolateBox &fiveStar);
};

ChocolateBox operator+(const ChocolateBox &kitkat, const ChocolateBox &fiveStar)
{
	return ChocolateBox(kitkat.countChocolate + fiveStar.countChocolate);
}

int main(int argc, char const *argv[])
{

	
	
	return 0;
}