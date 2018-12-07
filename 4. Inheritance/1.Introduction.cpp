#include <iostream>
#include <string>
using namespace std;


class Person
{
	public: string name;
	public: int age;

	public: Person()
	{
		name = "";
		age = 0;
	}

	public: Person(string name, int age)
	{
		this -> name = name;
		this -> age = age;
	}

};


class Student: public Person
{
	public: int studentID;
	public: string institution;
};