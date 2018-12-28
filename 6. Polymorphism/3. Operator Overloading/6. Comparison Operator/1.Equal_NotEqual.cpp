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
		return !(this == imran);
	}
}

int main(int argc, char const *argv[])
{
	
	return 0;
}