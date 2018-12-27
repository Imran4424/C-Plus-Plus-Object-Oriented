#include <iostream>
using namespace std;

class Data
{
	private: int x,y;
	private: bool isPositive;

	public: Data()
	{
		x = 0;
		y = 0;
		isPositive = true;
	}

	public: Data(int x, int y, bool isPositive)
	{
		this -> x = x;
		this -> y = y;
		this -> isPositive = isPositive;
	}

	public: void Show()
	{
		cout << "X = " << x << endl;
		cout << "Y = " << y << endl;
		cout << "Is Postivie = " << boolalpha << isPositive << endl << endl;
	}

	public: Data operator+()
	{
		return Data(abs(x), abs(y), true);
	}
};

int main(int argc, char const *argv[])
{
	Data red(-5, -8, false);

	red.Show();

	(+red).Show();

	// (red+).Show(); // this statement will give you error
	              // because unary operators sits left of operands
	
	return 0;
}