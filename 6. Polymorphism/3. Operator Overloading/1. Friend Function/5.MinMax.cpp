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

	public: ChocolateBox(int min, int max)
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
	friend ChocolateBox operator+(const ChocolateBox &kitkat, int value);
	//friend ChocolateBox operator+(int value, const ChocolateBox &fiveStar);

};

ChocolateBox operator+(const ChocolateBox &kitkat, const ChocolateBox &fiveStar)
{
	int min, max;

	if (kitkat.minChocolate < fiveStar.minChocolate)
	{
		min = kitkat.minChocolate;
	}
	else
	{
		min = fiveStar.minChocolate;
	}

	

	if (kitkat.maxChocolate > fiveStar.maxChocolate)
	{
		max = kitkat.maxChocolate;
	}
	else
	{
		max = fiveStar.maxChocolate;
	}

	
	return ChocolateBox(min, max);
}


ChocolateBox operator+(const ChocolateBox &kitkat, int value)
{
	int min, max;

	if (kitkat.minChocolate < value)
	{
		min = kitkat.minChocolate;
	}
	else
	{
		min = value;
	}

	

	if (kitkat.maxChocolate > value)
	{
		max = kitkat.maxChocolate;
	}
	else
	{
		max = value;
	}

	
	return ChocolateBox(min, max);
}


ChocolateBox operator+(int value, const ChocolateBox &fiveStar)
{

	// calling operator+(ChocolateBox, value)

	return fiveStar + value;
}


int main(int argc, char const *argv[])
{
	ChocolateBox kitkat(15,30);
	ChocolateBox fiveStar(30,75);
	ChocolateBox cadbury(5, 25);
	ChocolateBox galaxy(6, 20);

	ChocolateBox total = kitkat + fiveStar + cadbury + 27 + 22 + galaxy + 3; 

	cout << "Minimum Chocolate in the box: " << total.GetMinChocolate() << endl;
	cout << "Maximum Chocolate in the box: " << total.GetMaxChocolate() << endl;

	
	return 0;
}

/*
	the above arithmetic expression will evaluate like this

	ChocolateBox total = ((((((kitkat + fiveStar) + cadbury) + 27) + 22) + galaxy) + 3)


	here, we don't use any function for value + value (ex: 7 + 12)

	so, following type of arithmetic expression will give error

	ChocolateBox total = 7 + 12 + kitkat + fivestar + 3 + galaxy;
*/