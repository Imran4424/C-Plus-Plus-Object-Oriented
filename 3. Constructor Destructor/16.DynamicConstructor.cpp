/*
	write a program to demonstrate dynamic constructor in c++
*/

#include <iostream>
#include <cstring>
using namespace std;

class DynamicConstructor
{
	private: char *name;
	private: int length;

	public: DynamicConstructor()
	{
		length = 0;
		name = new char(length+1);
	}
	
	public: DynamicConstructor(const char line[]) // using const for constant string parameter
	{
		length = strlen(line);
		name = new char[length+1];

		strcpy(name, line);
	}

	public: void Join(DynamicConstructor &a, DynamicConstructor &b)
	{
		length = a.length + b.length;

		delete name;

		name = new char[length+1];

		strcpy(name, a.name); // copy
		strcat(name, b.name); //concatenation
	}

	public: void Display()
	{
		cout << name << endl;
		cout << "Number of Characters: " << strlen(name) << endl;
	}
};


int main(int argc, char const *argv[])
{
	char text[] = "I am a Programmer";

	DynamicConstructor obj(text);

	obj.Display();

	DynamicConstructor line("I love to play games."); // this is a constant string parameter

	DynamicConstructor line2(" Now, I also develop games");

	obj.Join(line, line2);

	obj.Display();

	return 0;
}

/*
	So, what is dynamic constructor

	By name, you can guess that, the changes are happen dynamically in dynamic constructor

	here in this code we are creating a char pointer, then we are allocating spaces according to the
	parameter length with new keyword

	so memory space allcated by constructor is not fixed and this is happening in run time that's why
	this is called dynamic constructor

	here, we used new and delete for dynamic memory allocation, if you are not fimiliar with them just 
	kindly visit dynamic memory allocation section


	anothing thing, I used const keyword before constructor string parameter because updated version
	compilers don't allow constant string to string conversion
*/