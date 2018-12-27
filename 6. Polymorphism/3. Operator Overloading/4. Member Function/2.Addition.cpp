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

	public: ChocolateBox operator+(const ChocolateBox &galaxy)
	{
		return ChocolateBox(countChocolate + galaxy.countChocolate);
	}
};


int main(int argc, char const *argv[])
{
	ChocolateBox kitkat(15);
	ChocolateBox fiveStar(30);

	ChocolateBox total = kitkat + fiveStar; 

	cout << "I have " << total.GetChocolateCount() << " chocolates in my box." << endl;

	
	return 0;
}