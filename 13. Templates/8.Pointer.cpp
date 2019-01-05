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

	public: string GetName()
	{
		return  name;
	}

	friend bool operator== (const Person &sakib, const Person &imran);
	friend bool operator!= (const Person &sakib, const Person &imran);

	friend bool operator> (const Person &sakib, const Person &imran);
	friend bool operator>= (const Person &sakib, const Person &imran);

	friend bool operator< (const Person &sakib, const Person &imran);
	friend bool operator<= (const Person &sakib, const Person &imran);

	friend ostream& operator<< (ostream &out, Person *sakib);
};

bool operator== (const Person &sakib, const Person &imran)
{
	// if(moneyAmount == imran.moneyAmount)
	// {
	// 	return true;
	// }
	// else
	// {
	// 	return false;
	// }

	return (sakib.moneyAmount == imran.moneyAmount);
}

bool operator!= (const Person &sakib, const Person &imran)
{
	return !(sakib == imran);
}


bool operator> (const Person &sakib, const Person &imran)
{
	return sakib.moneyAmount > imran.moneyAmount;
}

bool operator>= (const Person &sakib, const Person &imran)
{
	return sakib.moneyAmount >= imran.moneyAmount;
}

bool operator< (const Person &sakib, const Person &imran)
{
	return sakib.moneyAmount < imran.moneyAmount;
}

bool operator<= (const Person &sakib, const Person &imran)
{
	return sakib.moneyAmount <= imran.moneyAmount;
}


template <class imran>
imran* Max(imran *red, imran *blue)
{
	if (red > blue)
	{
		return red;
	}
	else
	{
		return blue;
	}
}

ostream& operator<< (ostream &out, Person *sakib)
{
	out << endl;
	out << sakib -> GetName() << " have maximum money" << endl;
	

	return out;
}


int main(int argc, char const *argv[])
{
	Person linkon("linkon",150);
	Person munir("munir",150);
	Person nayeem("nayeem", 200);


	cout << Max(&linkon, &nayeem) << endl;

	
	return 0;
}