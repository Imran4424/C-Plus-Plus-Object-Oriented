/*
	write a program to demonstrate multiple inheritance in c++
*/


#include <iostream>
#include <string>
using namespace std;

class Person // Base
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

class Employee // Base
{
	public: int wage;

	public: Employee()
	{
		wage = 0;
	}

	public: Employee(int wage)
	{
		this -> wage = wage;
	}
};


class Teacher: public Person, public Employee
{
	public: string instition;

	public: Teacher()
	{
		instition = "";
	}

	public: Teacher(string name, int age, int wage, string instition): Person(name, age), Employee(wage)
	{
		this -> instition = instition;
	}


	public: void Show()
	{
		cout<< "Name: " << name << endl;
		cout<< "Age: " << age << endl;
		cout<< "Wage: " << wage << "$" << endl;
		cout<< "Instition: " << instition << endl;
	}
};


int main(int argc, char const *argv[])
{
	Teacher green("Sakib", 30, 200000, "MIT");

	green.Show();

	return 0;
}


/*
	when a Derived class inherit behaviours from multiple Base classes

	then the Inheritance type is called Multiple inheritance


	Here, Teacher class has two Base class, Person , Employee
*/