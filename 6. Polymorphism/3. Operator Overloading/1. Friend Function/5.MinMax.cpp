#include <iostream>
using namespace std;

class ChocolateBox
{
	private: int maxChocolate;
	private: int minChocolate;

	public: ChocolateBox()
	{
		minChocolate = 0;
		maxChocolate = 0;
	}

	public: ChocolateBox(int min, max)
	{
		minChocolate = min;
		maxChocolate = max;
	}

	public: int GetMinChocolate()
	{
		return  minChocolate;
	}

	public: int GetMaxChocolate()
	{
		return maxChocolate;
	}

	friend ChocolateBox operator+(const ChocolateBox &kitkat, const ChocolateBox &fiveStar);
};

ChocolateBox operator+(const ChocolateBox &kitkat, const ChocolateBox &fiveStar)
{
	int min, max;

	if (kitkat.minChocolate < fiveStar.minChocolate)
	{
		minChocolate = kitkat.minChocolate;
	}
	else
	{
		minChocolate = fiveStar.minChocolate;
	}
}

int main(int argc, char const *argv[])
{
	ChocolateBox kitkat(15,30);
	ChocolateBox fiveStar(30,75);
	ChocolateBox 

	ChocolateBox total = kitkat + fiveStar; 

	cout << "I have " << total.GetChocolateCount() << " chocolates in my box." << endl;

	
	return 0;
}