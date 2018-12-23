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
	Student nayeem("Nayeem", 21, 17, "CSE", "RU");


	cout << endl;
	cout << "---Student One Information---" << endl;
	cout << "Name: " << imran.GetName() << endl;
	cout << "Age: " << imran.GetAge() << endl;
	cout << "Id: "<< imran.GetId() << endl;
	cout << "Department: "<< imran.GetDepartment() << endl;
	cout << "Institution: "<< imran.GetInstitution() << endl;

	cout << endl;
	cout << "---Student Two Information---" << endl; 
	cout << "Name: " << munir.GetName() << endl;
	cout << "Age: " << munir.GetAge() << endl;
	cout << "Id: "<< munir.GetId() << endl;
	cout << "Department: "<< munir.GetDepartment() << endl;
	cout << "Institution: "<< munir.GetInstitution() << endl;
	
	cout << endl;
	cout << "---Student Three Information---" << endl; 
	cout << "Name: " << nayeem.GetName() << endl;
	cout << "Age: " << nayeem.GetAge() << endl;
	cout << "Id: "<< nayeem.GetId() << endl;
	cout << "Department: "<< nayeem.GetDepartment() << endl;
	cout << "Institution: "<< nayeem.GetInstitution() << endl;

	return 0;
}