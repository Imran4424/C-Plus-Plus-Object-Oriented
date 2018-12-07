/*
	writa a program to demonstrate inheritance in c++
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

class SchoolStudent: public Student
{
	public: string currentClass;

	public:	SchoolStudent()
	{
		currentClass = "";
	}

	public: void Show()
	{
		cout << "------School Student------" << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Student Id: " << studentID << endl;
		cout << "Institution: " << institution << endl;  
		cout << "Current Class: " << currentClass << endl;		
	}
};

int main(int argc, char const *argv[])
{

	string name = "Shah Md. Imran Hossain";
	int age = 15;
	int studentID = 48;
	string institution = "Ranpur Zilla School, Ranpur";

	

	Student rzsian(name, age, studentID, institution);

	rzsian.Show();

	SchoolStudent legend;

	legend.name = "Shah Md. Imran Hossain";
	legend.age = 15;
	legend.studentID = 48;
	legend.institution = "Ranpur Zilla School, Ranpur";
	legend.currentClass = "Ten";

	legend.Show();

	return 0;
}