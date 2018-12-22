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

	public: Student(string name)
	{
		Student();
		this -> name = name;
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

	friend ostream& operator<< (ostream &out, const Student &sakib);
	friend void operator>> (istream &in, Student &sakib);
};


void operator>> (istream &in, Student &sakib)
{
	cout << endl << endl << "Enter " << sakib.name << "'s Information" << endl;

	cout << "Name: ";
	getline(in, sakib.name);

	cout << "Age: ";
	in >> sakib.age;

	cout << "Id: ";
	in >> sakib.id;

	cout << "Department: ";
	getchar();
	getline(in, sakib.department);

	cout << "Institution: ";
	getline(in, sakib.institution);


	//return in;
}



ostream& operator<< (ostream &out, const Student &sakib)
{
	out << endl;
	out << "---Student " << sakib.GetName() <<"'s Information---" << endl;
	out << "Name: " << sakib.GetName() << endl;
	out << "Age: " << sakib.GetAge() << endl;
	out << "Id: " << sakib.GetId() << endl;
	out << "Department: " << sakib.GetDepartment() << endl;
	out << "Institution: " << sakib.GetInstitution() << endl;

	return out;
}


int main(int argc, char const *argv[])
{
	
	Student imran("Imran");
	Student munir("Munir");
	Student nayeem("Nayeem");

	//cin >> imran >> munir >> nayeem;

	cin >> imran;
	cin >> munir;
	cin >> nayeem;



	cout << imran << munir << nayeem << endl;
	

	return 0;
}