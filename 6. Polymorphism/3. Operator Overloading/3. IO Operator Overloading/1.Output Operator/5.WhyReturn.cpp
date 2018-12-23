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


	public: string GetName() const
	{
		return name;
	}

	public: int  GetAge() const
	{
		return age;
	}

	public: int  GetId() const
	{
		return id;
	}

	public: string GetDepartment() const
	{
		return department;
	}

	public: string GetInstitution() const
	{
		return institution;
	}

	public: void Display() const
	{

		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Id: "<< id << endl;
		cout << "Department: "<< department << endl;
		cout << "Institution: "<< institution << endl;
	}

	friend void operator<< (ostream &out, const Student &sakib);
};



void operator<< (ostream &out, const Student &sakib)
{
	//out << endl;
	out << "---Student " << sakib.GetName() <<"'s Information---" << endl;
	sakib.Display();

	//return out;
}


int main(int argc, char const *argv[])
{
	Student imran("Imran", 21, 13, "CSE", "RU");
	Student munir("Munir", 23, 14, "CSE", "RU");
	Student nayeem("Nayeem", 21, 17, "CSE", "RU");


	//cout << imran << munir << nayeem << endl;
	cout << endl << imran ;
	cout << endl << munir ;
	cout << endl << nayeem;
	cout << endl;
	

	return 0;
}