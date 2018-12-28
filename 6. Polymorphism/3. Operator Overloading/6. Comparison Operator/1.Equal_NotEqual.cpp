#include <iostream>
using namespace std;

class Person
{
	private: string name;
	private: int moneyAmount;

	public: Person()
	{
		name = "";
		moneyAmount = 0;
	}

	public: Person(string name, int moneyAmount)
	{
		this -> name = name;
		this -> moneyAmount = moneyAmount;
	}

	public: bool operator== (const Person &imran)
	{
		// if(moneyAmount == imran.moneyAmount)
		// {
		// 	return true;
		// }
		// else
		// {
		// 	return false;
		// }

		return (moneyAmount == imran.moneyAmount);
	}

	public: bool operator!= (const Person &imran)
	{
		// return (moneyAmount != imran.moneyAmount);

		return !(this -> operator==(imran));
	}
};

int main(int argc, char const *argv[])
{
	Person linkon("linkon",150);
	Person munir("munir",150);
	Person nayeem("nayeem", 200);

	if (linkon == munir)
	{
		cout << "linkon and munir has same amount of money" << endl;
	}

	if (linkon != nayeem)
	{
		cout << "linkon and nayeem do not possess same amount of money" << endl;		
	}

	return 0;
}