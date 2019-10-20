/*
	Write a program to demonstrate use of pointers
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


	public: string GetJob()
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

	public: string GetJob()
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

	public: string GetJob()
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

	public: string GetJob()
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

	/*	Engineer *ptr = &CSE;

		Report(ptr);

		ptr = &sadman;
		Report(ptr);

		ptr = &jannat;
		Report(ptr);
	*/


	Report(&dipu);
	Report(&sadman);
	Report(&jannat);

	return 0;
}

/*
	Now, let's do the same work in other way

*/