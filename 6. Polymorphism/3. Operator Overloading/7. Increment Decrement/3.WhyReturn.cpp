#include <iostream>
using namespace std;

class Chocolate
{
	private: int countChocolate;

	public: Chocolate()
	{
		countChocolate = 0;
	}

	public: Chocolate(int count)
	{
		countChocolate = count;
	}

	public: Chocolate& operator++()
	{
		++countChocolate;

		return *this; // notice we are returning the pointer
	}

	public: Chocolate& operator--()
	{
		--countChocolate;

		return *this; // notice we are returning the pointer
	}

	friend ostream& operator<<(ostream &imran, const Chocolate &sakib);
};


ostream& operator<<(ostream &imran, const Chocolate &sakib)
{
	imran << sakib.countChocolate << endl;

	return imran; // this "imran" is a osstream object, object name can be anything
}

int main(int argc, char const *argv[])
{
	Chocolate kitkat(15);

	cout << ++kitkat;
	cout << --kitkat;
	cout << --kitkat;
	cout << ++kitkat;
	cout << --kitkat;
	cout << --kitkat;

	cout << endl << "Why Return" << endl << endl;
	
	cout << ----kitkat;   // decrease two from previous
	cout << ++++kitkat;  // increase two from previous
	cout << --++kitkat;
	cout << ++--kitkat;

	return 0;
}

