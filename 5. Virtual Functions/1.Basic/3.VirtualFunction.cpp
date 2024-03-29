/*
	Write a program to demonstrate use of pointers and virtual function
*/

#include <iostream>
#include <string>
using namespace std;


class Engineer
{
	public: string profession;

	public: Engineer()
	{
		profession = "";
	}

	public: Engineer(string profession)
	{
		this -> profession = profession;
	}


	public: virtual string GetJob()
	{
		return "do nothing";
	}

	public: string GetProfession()
	{
		return profession;
	}
};

class Computer: public Engineer
{
	public: Computer(): Engineer()
	{

	}

	public: Computer(string profession): Engineer(profession)
	{

	}

	public: virtual string GetJob()
	{
		return "Develop Software";
	}
};


class Civil: public Engineer
{
	public: Civil(): Engineer()
	{

	}

	public: Civil(string profession): Engineer(profession)
	{

	}

	public: virtual string GetJob()
	{
		return "Buid Building";
	}
};


class Mechanical: public Engineer
{
	public: Mechanical(): Engineer()
	{

	}

	public: Mechanical(string profession): Engineer(profession)
	{

	}

	public: virtual string GetJob()
	{
		return "Work with Machinery";
	}
};


void Report(Engineer *eng)
{
	cout << eng -> GetProfession() << " Engineers " << eng -> GetJob() << endl;
}


int main(int argc, char const *argv[])
{
	Computer dipu("CSE");

	Civil sadman("Civil");

	Mechanical jannat("Mechanical");


	Report(&dipu);
	Report(&sadman);
	Report(&jannat);

	return 0;
}

/*
	Virtual function is a very special type function for function overriding.

	When we call a virtual function using the base pointer pointing derived class object, it
	will call the most derived overriden function between the base and derived class object
	(right now base pointer pointing)


	Making a function virtual function

	Making a function virtual function is really easy, we just need to put virtual keyword
*/