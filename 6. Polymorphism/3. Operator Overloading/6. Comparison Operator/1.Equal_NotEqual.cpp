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
}