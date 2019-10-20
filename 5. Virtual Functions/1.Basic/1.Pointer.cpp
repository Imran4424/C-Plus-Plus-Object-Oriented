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



int main(int argc, char const *argv[])
{
	Computer dipu("CSE");

	Civil sadman("Civil");

	Mechanical jannat("Mechanical");

	cout << dipu.GetProfession() << " Engineers " << dipu.GetJob() << endl;


	Mechanical &rMecha = jannat;

	cout << rMecha.GetProfession() << " Engineers " << rMecha.GetJob() << endl;


	Civil *pCivil = &sadman;

	cout << pCivil -> GetProfession() << " Engineers " << pCivil -> GetJob() << endl;

	return 0;
}

/*
	We already learned Inheritance
	Remainder About Inheritance

	When we create a derive class object, it contains base part(which constructed first) and 
	derived part(which is constructed second).

	Now, let's talk about pointers and references of derived class


	Pointers
	
	When we declare pointers to derived class object. It will serve as normal class pointer
	object. pointer to derived class object can access all public members of that class
	using pointer member access operator( -> )

	Example:
	Civil *pCivil = &sadman;

	cout << pCivil -> GetProfession() << " Engineers " << pCivil -> GetJob() << endl;


	References

	Same goes for references too. When we declare a reference to derived class object, we can 
	access all the public derived class members with dot operator(.) or member access operator

	Example:
	Mechanical &rMecha = jannat;

	cout << rMecha.GetProfession() << " Engineers " << rMecha.GetJob() << endl;
*/