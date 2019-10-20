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


	Now, let's do the same work in other way

	Instead of declaring dervied class pointer, now we will declare base class pointer and we 
	will try to access all derived class public members

	Here in this code we delared a function called report, which take base pointer of base class
	as parameters and trying to call the base function GetProfession and overridden function 

	void Report(Engineer *eng)
	{
		cout << eng -> GetProfession() << " Engineers " << eng -> GetJob() << endl;
	}

	expected output:

	CSE Engineers Develop Software
	Civil Engineers Buid Building
	Mechanical Engineers Work with Machinery

	given output:

	CSE Engineers do nothing
	Civil Engineers do nothing
	Mechanical Engineers do nothing

	Now question is why?

	Because base pointer can only see the base class members, it can not see derived and derived
	overridden members(hidden to base class pointer)

	which is why base pointer is calling base class GetJob() function rather than derived GetJob()
	function


	This is when virtual functions come to rescue for this kind of situation

	We will talk about that more deeply in the later codes



	Now, one can ask why we need to use pointer to make things complex we can simply use
	derived class object.

	Let's say we have 50 or more derived classes and we want to display all of their 
	member variables, then we need to declare one display function for each class which
	is really time consuming and declaring 50 or more functions will make it lot more 
	harder and painful