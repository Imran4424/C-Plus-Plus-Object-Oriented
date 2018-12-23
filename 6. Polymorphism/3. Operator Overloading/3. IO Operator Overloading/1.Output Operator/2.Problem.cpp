#include <iostream>
#include <string>
using namespace std;


class Student
{
	private: string name;
	private: int age;
	private: int id;
	private: string department;
	private: string institution;

	public: Student()
	{
		name = "";
		age = 0;
		id = 0;
		department = "";
		institution = "";
	}

	public: Student(string name, int age, int id, string department, string institution)
	{
		this -> name = name;
		this -> age = age;
		this -> id = id;
		this -> department = department;
		this -> institution = institution;
	}


	public: string GetName()
	{
		return name;
	}

	public: int  GetAge()
	{
		return age;
	}

	public: int  GetId()
	{
		return id;
	}

	public: string GetDepartment()
	{
		return department;
	}

	public: string GetInstitution()
	{
		return institution;
	}

	public: void Display()
	{

		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Id: "<< id << endl;
		cout << "Department: "<< department << endl;
		cout << "Institution: "<< institution << endl;
	}
};


int main(int argc, char const *argv[])
{
	Student imran("Imran", 21, 13, "CSE", "RU");
	Student munir("Munir", 23, 14, "CSE", "RU");
	Student nayeem("Nayeem", 21, 17, "CSE", "RU");


	
	cout << endl;
	cout << "---Student One Information---" << endl;
	imran.Display();

	// cout << "---Student One Information---" << endl << imran.Display();

	
	cout << endl;
	cout << "---Student Two Information---" << endl; 
	munir.Display();
	
	
	
	cout << endl;
	cout << "---Student Three Information---" << endl; 
	nayeem.Display();
	

	return 0;
}