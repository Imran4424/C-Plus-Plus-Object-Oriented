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
		return ChocolateBox(countChocolate + value);
	}
};


int main(int argc, char const *argv[])
{
	ChocolateBox kitkat(15);

	ChocolateBox total = kitkat + 15; 

	cout << "I have " << total.GetChocolateCount() << " chocolates in my box." << endl;

	
	return 0;
}