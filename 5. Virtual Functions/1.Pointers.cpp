/*
	Write a program to demonstrate use of pointers
*/

#include <iostream>
#include <string>
using namespace std;


class Person
{
	public: string profession;

	public: Person()
	{
		profession = "";
	}

	public: Person(int age, string job)
	{
		this -> profession = profession;
	}


	public: string GetJob()
	{
		return "none";
	}
};

class Engineer: public Person
{
	public: Engineer(): Person()
	{

	}

	public: Engineer(string profession): Person(profession)
	{

	}

	public: string GetJob()
	{
		return "Develop App";
	}
};

int main(int argc, char const *argv[])
{
	Engineer eng("Computer");

	cout << eng.GetJob() << endl;
	Person *ptr = & eng;

	cout << ptr -> GetJob() << endl;

	return 0;
}