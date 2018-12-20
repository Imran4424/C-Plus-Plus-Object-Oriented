// #include <iostream>
// using namespace std;  

/*
	Need to inlcude header if we use build in functionality in c++
*/

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

	public: int GetMinChocolate() const
	{
		return  minChocolate;
	}

	public: int GetMaxChocolate() const
	{
		return maxChocolate;
	}

};

/*
	Need to declare prototypes of functions
*/


ChocolateBox operator+(const ChocolateBox &kitkat, const ChocolateBox &fiveStar);

ChocolateBox operator+(const ChocolateBox &kitkat, int value);

ChocolateBox operator+(int value, const ChocolateBox &fiveStar);

