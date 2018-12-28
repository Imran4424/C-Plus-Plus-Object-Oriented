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

	friend bool operator== (const Person &sakib, const Person &imran)
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

	public: bool operator!= (Person &imran)
	{
		return !(this == imran);
	}
}

int main(int argc, char const *argv[])
{
	Person linkon("linkon",150);
	Person munir("munir",150);
	Person nayeem("nayeem", 200);

	if (linkon == munir)
	{
		cout << "linkon and munir has same amount of money" << endl;
	}

	if (linkon != munir)
	{
		cout << "linkon and munir do not has same amount of money" << endl;		
	}

	return 0;
}