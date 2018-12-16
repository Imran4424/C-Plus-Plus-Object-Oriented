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

int main(int argc, char const *argv[])
{

	string name = "Shah Md. Imran Hossain";
	int age = 15;
	int studentID = 48;
	string institution = "Ranpur Zilla School, Ranpur";

	

	Student rzsian(name, age, studentID, institution);

	rzsian.Show();

	return 0;
}


/*
	Inheritance is a very cool feature of object oriented programming

	inheritance is like borrowing 

	but main difference between inheritance and real life borrowing is

	when you borrow money from someone, he/she don't posses that money anymore

	but in inheritance sense both you and the other person from whom you borrow the money
	will have same amount of money (actually copy)

	let's be more practical

	let's say your friend have 100 dollar and you borrow that 100 dollar from him/her

	in real life now you have the 100 dollar, he/she have none

	but in inheritance sense both you and your friend have 100 dollar now

	sounds interesting right

*/