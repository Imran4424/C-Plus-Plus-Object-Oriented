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
};


int main(int argc, char const *argv[])
{
	Student imran("Imran", 21, 13, "CSE", "RU");
	Student munir("Munir", 23, 14, "CSE", "RU");
	Student Nayeem("Nayeem", 21, 17, "CSE", "RU");


	cout << endl;
	cout << "---Student One Information---" << endl;
	cout << imran.GetName() << endl;
	cout << imran.GetAge() << endl;
	cout << imran.GetId() << endl;
	cout << imran.GetDepartment() << endl;
	cout << imran.GetInstitution() << endl;

	cout << endl;
	cout << "---Student Two Information---" << endl; 
	cout << munir.GetName() << endl;
	cout << munir.GetAge() << endl;
	cout << munir.GetId() << endl;
	cout << munir.GetDepartment() << endl;
	cout << munir.GetInstitution() << endl;
	
	cout << endl;
	cout << "---Student Three Information---" << endl; 
	cout << Nayeem.GetName() << endl;
	cout << Nayeem.GetAge() << endl;
	cout << Nayeem.GetId() << endl;
	cout << Nayeem.GetDepartment() << endl;
	cout << Nayeem.GetInstitution() << endl;

	return 0;
}