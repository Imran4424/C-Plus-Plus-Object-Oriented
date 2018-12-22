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

	public Student(string name, int age, int id, string department, string institution)
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
}


int main(int argc, char const *argv[])
{
	Student


	return 0;
}