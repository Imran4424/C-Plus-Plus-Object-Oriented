#include <iostream>
using namespace std;

class Data
{
	private: int x,y;
	private: bool isPositive;

	publibc: Data()
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
		cout << "is postivie = " << isPositive << endl;
	}

	public: Data operator+()
	{
		//return Data(-x, -y, true);

		return Data(abs(x), abs(y), true);
	}
};

int main(int argc, char const *argv[])
{
	
	return 0;
}