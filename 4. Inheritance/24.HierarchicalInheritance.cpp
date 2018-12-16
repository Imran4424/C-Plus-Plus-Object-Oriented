/*
	writa a program to demonstrate hierachical inheritance in c++
*/

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

	public: Student()
	{
		name = "";
		age = 0;
		studentID = 0;
		institution = "";
	}

	public: Student(string name, int age, int studentID, string institution)
	{
		this -> name = name;
		this -> age = age;
		this -> studentID = studentID;
		this -> institution = institution;
	}

	public: void Show()
	{
		cout << "------Student------" << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Student Id: " << studentID << endl;
		cout << "Institution: " << institution << endl;  
	}
};

class Employee: public Person
{
	public: int salary;

	public: Employee()
	{
		name = "";
		age = 0;
		salary = 0;
	}

	public: void Show()
	{
		cout << "------Employee------" << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Salary: " << salary << endl;		
	}
};

int main(int argc, char const *argv[])
{

	string name = "Shah Md. Imran Hossain";
	int age = 14;
	int studentID = 48;
	string institution = "Ranpur Zilla School, Ranpur";

	

	Student rzsian(name, age, studentID, institution);

	rzsian.Show();

	Employee ubisoft;

	ubisoft.name = "Imran";
	ubisoft.age = 22;
	ubisoft.salary = 80000;

	ubisoft.Show();

	return 0;
}


/*
	In hierarchical inheritance 

	One Base class has multiple child or derived classes
*/