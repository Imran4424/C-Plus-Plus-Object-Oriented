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

	public: int GetChocolateCount() const
	{
		return countChocolate;
	}

	
};

ChocolateBox operator*(const ChocolateBox &kitkat, int value)
{
	return ChocolateBox(kitkat.GetChocolateCount() * value);
}

int main(int argc, char const *argv[])
{
	ChocolateBox kitkat(15);
	//ChocolateBox fiveStar(30);

	ChocolateBox total = kitkat * 5; 

	cout << "I have " << total.GetChocolateCount() << " chocolates in my box." << endl;

	
	return 0;
}