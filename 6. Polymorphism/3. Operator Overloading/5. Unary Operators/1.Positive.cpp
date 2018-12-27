#include <iostream>
using namespace std;

class Data
{
	private: int x,y;
	private: bool isPositive;

	Data()
	{
		x = 0;
		y = 0;
		IsPositive = true;
	}

	Data(int x, int y, bool isPositive)
	{
		this -> x = x;
		this -> y = y;
		this -> isPositive = isPositive;
	}
};