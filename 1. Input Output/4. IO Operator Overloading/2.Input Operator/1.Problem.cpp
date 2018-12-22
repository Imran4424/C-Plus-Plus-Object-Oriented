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

	friend ostream& operator<< (ostream &out, const Student &sakib);
};



ostream& operator<< (ostream &out, const Student &sakib)
{
	out << endl;
	out << "---Student " << sakib.name <<"'s Information---" << endl;
	out << "Name: " << sakib.GetName() << endl;
	out << "Age: " << sakib.GetAge() << endl;
	out << "Id: " << sakib.GetId() << endl;
	out << "Department: " << sakib.GetDepartment() << endl;
	out << "Institution: " << sakib.GetInstitution() << endl;

	return out;
}


int main(int argc, char const *argv[])
{
	string name, department, institution;
	int age, id;



	cout << endl << endl << "Enter Imran's Information" << endl;

	cout << "Name: ";
	getline(cin, name);
	//cout << endl;

	cout << "Age: ";
	cin >> age;
	//cout << endl;

	cout << "Id: ";
	cin >> id;
	//cout << endl;

	cout << "Department: ";
	getchar();
	getline(cin, department);
	//cout << endl;

	cout << "Institution: ";
	getline(cin, institution);
	//cout << endl;
	
	Student imran(name, age, id, department, institution);
	


	cout << endl << endl << "Enter Munir's Information" << endl;

	cout << "Name: ";
	getline(cin, name);
	//cout << endl;

	cout << "Age: ";
	cin >> age;
	//cout << endl;

	cout << "Id: ";
	cin >> id;
	//cout << endl;

	cout << "Department: ";
	getchar();
	getline(cin, department);
	//cout << endl;

	cout << "Institution: ";
	getline(cin, institution);
	//cout << endl;


	Student munir(name, age, id, department, institution);



	cout << endl << endl << "Enter Nayeem's Information" << endl;

	cout << "Name: ";
	getline(cin, name);
	//cout << endl;

	cout << "Age: ";
	cin >> age;
	//cout << endl;

	cout << "Id: ";
	cin >> id;
	//cout << endl;

	cout << "Department: ";
	getchar();
	getline(cin, department);
	//cout << endl;

	cout << "Institution: ";
	getline(cin, institution);
	//cout << endl;

	Student nayeem(name, age, id, department, institution);



	cout << imran << munir << nayeem << endl;
	

	return 0;
}